countGuard :: [a] -> Int
countGuard (x:xs) | not (null xs) = 1 + countGuard xs | null xs = 1