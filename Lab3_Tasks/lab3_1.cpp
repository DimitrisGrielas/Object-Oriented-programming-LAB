#include <iostream>

using namespace std;

class Point
{
    private:
        float x;
        float y;
    public:

    Point(): x(0), y(0) 
    {
        cout << "Constracted Point class object without parameters.\n";
    }

    Point(const float a, const float b): x(a), y(b)
    {
        cout << "Constracted Point class object without parameters.\n";
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
        cout << this << ": x = " << get_x() << ", y = " << get_y() << "\n";
    }
};

class Triangle
{
    private:
        Point a;
        Point b;
        Point c;
    public:

};

int main()
{
    Point A;
    Point B(2, 3);

    A.Print_point();
    B.Print_point();
    return 0;
}