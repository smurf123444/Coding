#ifndef H_rectangleType
#define H_rectangleType
 
class rectangleType
{
public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;


    rectangleType operator+(const rectangleType&) const;
      //Overload the operator +

      //Overload the operator *
    rectangleType operator*(const rectangleType&) const;
    bool operator==(const rectangleType&) const;
    bool operator!=(const rectangleType&) const;
    bool operator <(const rectangleType& d);
    rectangleType operator++(int);
    rectangleType operator--(int);
    rectangleType operator--();
    rectangleType operator++();
    rectangleType operator-(const rectangleType& rectangle);
      //Overload the operator ==

      //Overload the operator !=

    rectangleType();
    rectangleType(double l, double w);

private:
    double length;
    double width;
    int i;
};

#endif
