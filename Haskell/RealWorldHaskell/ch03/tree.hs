import Data.List
import System.IO
data Tree a = Node a (Tree a) (Tree a)
            | Empty
            deriving (Show)

simpleTree = Node "parent" (Node "left child" Empty Empty)
                           (Node "Right child" Empty Empty)