#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    private:
        float x;
        float y;

        void print_info() const
        {
            cout << this << ": x = " << get_x() << ", y = " << get_y() << "\n";
        }

    public:

    Point(): x(0), y(0) 
    {
        cout << "Constracted Point class object without parameters.\n";
    }

    Point(const float a, const float b): x(a), y(b)
    {
        cout << "Constracted Point class object with given parameters.\n";
    }

    const float get_x() const
    {
        return x;
    }

    const float get_y() const
    {
        return y;
    }

    void Print_point() const
    {
        print_info();
    }

    friend float dist(Point a, Point b);
};

float dist(Point a, Point b)
{
    float distance;
    distance = sqrt(pow(b.get_x() - a.get_x(), 2)/pow(b.get_y() - a.get_y(), 2));
    return distance;
}

class Triangle
{
    private:
        Point a;
        Point b;
        Point c;

    public:

    Triangle(Point i, Point j, Point k): a(i), b(j), c(k)
    {
        cout<<"Constracted object of class Triangle using given parameters.\n";
    }

    const Point get_triangle_point(int i) const
    {
        if(i == 1)
            return a;
        else if(i == 2)
            return b;
        else if(i == 3)
            return c;
        else
            cout<<"You need to input 1 for the first point, 2 for the second and 3 for the third.\n";
    }

    void print_triangle()
    {
        a.Print_point();
        b.Print_point();
        c.Print_point();
    }
};

float area(Triangle T)
{
    float area;
    area = (1/2)*(dist(b, c))
}

int main()
{
    Point A;
    Point B(2, 3);
    Point C(3, 4);

    A.Print_point();
    B.Print_point();

    Triangle T(A, B, C);
    T.print_triangle();
    T.get_triangle_point(2); 
    return 0;
}