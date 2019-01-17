myMean [] = 0.0
myMean xs = (mySum xs) / (fromIntegral (length xs))
mySum [] = 0
mySum (x:xs) = x + (mySum xs)