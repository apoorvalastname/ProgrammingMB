#include <iostream>
#define PI 3.14

/**********************************************************************************************
 *        Class to represent a 2D Shapes
 **********************************************************************************************/
class Shape2D
{
    private : 
        std::string name;
        double area, circumference;

    protected :
        void setArea (double a )
        {
            this->area = a;
        }
        void setCircumference (double a)
        {
            circumference = a;
        }

    public :
        Shape2D (std::string n) : name (n) {}
        std::string getName ()
        {
            return name;
        }
        double getArea () 
        {
            return area;
        }
        double getCircumference ()
        {
            return circumference;
        }
        double printShape()
        {
            std::cout << "Shape         : " << getName() << std::endl; 
            std::cout << "Area          : " << getArea() << std::endl; 
            std::cout << "Circumference : " << getCircumference() << std::endl << std::endl; 
        }
};

/**********************************************************************************************
 *        A Circle is a 2D Shape
 **********************************************************************************************/
class Circle : public Shape2D
{
    double radius;

    public :
        Circle (double r) : Shape2D("Circle"), radius (r)
        {
            setArea (PI * radius * radius);
            setCircumference (2* PI * radius);
        }
};

/**********************************************************************************************
 *        A Polygon is a 2D Shape
 **********************************************************************************************/
class Polygon : public Shape2D
{
    int numOfSides;

    protected :
        void setNumOfSides (int numOfSides)
        {
            this->numOfSides = numOfSides;
        }

    public :
        Polygon (std::string name) : Shape2D (name) {}
        int getNumOfSides ()
        {
            return numOfSides;
        }
};

/**********************************************************************************************
 *        A Triangle is a Polygon with 3 sides
 **********************************************************************************************/
class Triangle : public Polygon
{
    double base, height;

    public :
        Triangle(double b, double h) : Polygon ("Triangle")
        {
            base = b;
            height = h;
            setNumOfSides (3);
            setCircumference (3 * base);   
            setArea (base * height / 2);
        }
};

/**********************************************************************************************
 *        A Quadrilateral is a Polygon with 4 sides
 **********************************************************************************************/
class Quadrilateral : public Polygon
{
    double a, b, c, d;
    void quadrilateral_init (double a1, double b1, double c1, double d1)
    {
        a = a1;
        b = b1;
        c = c1;
        d = d1;
        setNumOfSides (4);
        setCircumference ( a + b + c + d);
        setArea ( a * b );
    }

    public :
        Quadrilateral( double a1, double b1, double c1, double d1, std::string name = "Quadrilateral") : Polygon (name)
        {
            quadrilateral_init (a1, b1, c1, d1);
        }
};

/**********************************************************************************************
 *        A Parallelogram is a Quadrilateral where opposite sides are parallel
 **********************************************************************************************/
class Parallelogram : public Quadrilateral
{
    public :
        Parallelogram ( double a, double b, std::string name = "Parallelogram") : 
            Quadrilateral (a, b, a, b, name){}
};

/**********************************************************************************************
 *        A Rhombus is a Parallelogram where all sides are equal
 **********************************************************************************************/
class Rhombus : public Parallelogram
{
    public :
        Rhombus ( double a, std::string name = "Rhombus") : Parallelogram ( a, a, name) {}
};

/**********************************************************************************************
 *        A Rectangle is a Parallelogram where adjacent sides are at right angles
 **********************************************************************************************/
class Rectangle : public Parallelogram
{
    public :
        Rectangle (double a, double b) : Parallelogram (a, b, "Rectangle") {}
};

/**********************************************************************************************
 *        A Square  is a Rhombus where adjacent sides are at right angles
 **********************************************************************************************/
class Square : public Rhombus
{
    public :
        Square (double a) : Rhombus (a, "Square") {}
};


int main()
{
    Circle circle(5);
    circle.printShape();

    Triangle triangle(10, 7);
    triangle.printShape();

    Rectangle rectangle(10, 7);
    rectangle.printShape();

    Square square(10);
    square.printShape();

}
