#include <bits/stdc++.h>

using namespace std;

class Point
{
    private:
    //private Point class members representing a two dimensional point coordinates
        int x;
        int y;
    public:
        Point(): x(0), y(0) 
        {
            cout<<"(1) Constracted class Point object using method without given parameters.\n";
        };
        
        Point(int a, int b): x(a), y(b)
        {
            cout<<"(2) Constracted class Point object using method with two given parameters.\n";
        };
};