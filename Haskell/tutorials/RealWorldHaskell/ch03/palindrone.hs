palindrome2 :: [a] -> [a]
palindrome2 (x:xs) = [x] ++ (palindrome2 xs) ++ [x]
palindrome2 [] = []