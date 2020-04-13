module Main where


import System.Random
import System.Clock
{-
time :: String
time = show (getTime (Realtime))
-}
nput :: TimeSpec -> Integer
nput tits =  toNanoSecs (tits)


conversionFromInput :: Integer -> Int
conversionFromInput input = fromIntegral(input)


main =
    do {
  -- run an action with a result, e.g., getLine :: IO String
       ; line <- getTime(Realtime)

  -- run an action with no result, e.g., putStrLn "hi" :: IO ()
  --   ; putStrLn "hi"

  -- do normal pure computations, e.g., read :: String -> Int
       ; let pureResult = toNanoSecs line
  --     ; print pureResult
  -- finish with an action
       ; return (pureResult * 42)
       ; let pureResulter = conversionFromInput(pureResult)
       ; let g = mkStdGen pureResulter
       ; let [s] = take 1 (randomStuff g)
       ; print s
       }

randomStuff :: RandomGen g => g -> [Int]
randomStuff g = work (randomRs (0, 22) g)

last' :: [a]    -> a
last'    []     =  error "empty"
last'    (x:[]) =  x
last'    (x:xs) =  last' xs

work :: [Int] -> [Int]
work (r:rs) = rs
