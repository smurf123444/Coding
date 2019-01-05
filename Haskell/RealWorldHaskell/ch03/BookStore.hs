bookID      (Book id title authors)  = id
bookTitle   (Book id title authors)  = title
bookAuthors (Book id title authors)  = authors

data BookInfo = Book Int String [String]
                deriving (Show)