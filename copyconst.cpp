#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{

private:
    int length;
    int breadth;

public:
    Rectangle(int l = 1, int b = 1)
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r)
    {
        // COPY CONSTRUCTOR
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }
    double getLength()
    {
        return length;
    }
    void setBreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {

            breadth = 0;
        }
    }

    double getBreadth()
    {

        return breadth;
    }

    double area()
    {

        return (length * breadth);
    }

    double perimetre()
    {

        return (2 * (length + breadth));
    }

    double diagonal()
    {

        return pow(pow(length, 2) + pow(breadth, 2), 0.5);
    }
};

int main()
{
    // COPYING DIMENSIONS OF R1 INTO R2
    int a, b;
    cout << "Enter length: ";
    cin >> a;
    cout << "Enter breadth: ";
    cin >> b;
    Rectangle r1(a, b);
    Rectangle r2(r1); //COPYING
    cout << "Length of r1 is: " << r1.getLength() << endl;
    cout << "Breadth of r1 is: " << r1.getBreadth() << endl;
    cout << "Area of r1 is: " << r1.area() << endl;
    cout << "perimetre of r1 is: " << r1.perimetre() << endl;
    cout << "Diagonal of r1 is: " << r1.diagonal() << endl;
//COPYING
    cout << "Length of r2 is: " << r2.getLength() << endl;
    cout << "Breadth of r2 is: " << r2.getBreadth() << endl;
    cout << "Area of r2 is: " << r2.area() << endl;
    cout << "perimetre of r2 is: " << r2.perimetre() << endl;
    cout << "Diagonal of r2 is: " << r2.diagonal() << endl;
    return 0;
}