import Data.List
import System.IO



sumOfNums = sum [1..1000]
bigFloat = 3.9999999 + 0.00000005
speedOfLight = 13312312412412418237471247712471274 * 12312312312312314124187581276561275616274681624761245125

doubleEvenNumber y = 
    if (y `mod` 2 /= 0)
        then y
        else y * 2

getClass :: Int -> String
getClass n = case n of
    5 -> "Go to Kindergarten"
    6 -> "Go to elementary school"
    7 -> "Blablabla"

bmiTell :: (RealFloat a) => a -> a -> String  
bmiTell weight height  
    | weight / height ^ 2 <= 18.5 = "You're underweight, you emo, you!"  
    | weight / height ^ 2 <= 25.0 = "You're supposedly normal. Pffft, I bet you're ugly!"  
    | weight / height ^ 2 <= 30.0 = "You're fat! Lose some weight, fatty!"  
    | otherwise                 = "You're a whale, congratulations!"  

data Customer = Customer String String Double
    deriving Show

tomSmith :: Customer
tomSmith = Customer "Tom Smith" "123 Main" 20.50

virginiaManning :: Customer
virginiaManning = Customer "Virginia Manning" "354 Burke" 15.69

getBalance :: Customer -> Double
getBalance (Customer _ _ b) = b

tell :: (Show a) => [a] -> String  
tell [] = "The list is empty"  
tell (x:[]) = "The list has one element: " ++ show x  
tell (x:y:[]) = "The list has two elements: " ++ show x ++ " and " ++ show y  
tell (x:y:_) = "This list is long. The first two elements are: " ++ show x ++ " and " ++ show y  

length' (_:xs) = 1 + length' xs  

initials :: String -> String -> String  
initials firstname lastname = [f] ++ "." ++ [l] ++ "."  
    where (f:_) = firstname  
          (l:_) = lastname 

reallyBig :: Integer
reallyBig = 2^(2^(2^(2^2)))

biggestInt, smallestInt :: Int
biggestInt  = maxBound
smallestInt = minBound

foo :: Integer -> Integer
foo 0 = 16
foo 1 
  | "Haskell" > "C++" = 3
  | otherwise         = 4
foo n
  | n < 0            = 0
  | n `mod` 17 == 2  = -43
  | otherwise        = n + 3

intListLength :: [Integer] -> Integer
intListLength []     = 0
intListLength (x:xs) = 1 + intListLength xs

sumEveryTwo :: [Integer] -> [Integer]
sumEveryTwo []         = []    -- Do nothing to the empty list
sumEveryTwo (x:[])     = [x]     -- Do nothing to lists with a single element
sumEveryTwo (x:(y:zs)) = (x + y) : sumEveryTwo zs

myDrop n xs = if n <= 0 || null xs
    then xs
    else myDrop (n - 1) (tail xs)
    
    
    
removeNonUppercase st = [ c | c <- st, c `elem` ['A'..'Z']]

factorial :: Integer -> Integer  
factorial n = product [1..n]  