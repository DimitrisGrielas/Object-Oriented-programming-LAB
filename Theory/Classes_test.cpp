#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int width;
        int height;
    public:
        void setWidth(int w)
        {
            width = w;
        }

        void setHeight(int h)
        {
            height = h;
        }

        inline int getWidth() const
        {
            return width;
        }

        inline int getHeight() const
        {
            return height;
        }

        inline int getEmvado() const
        {
            int emv;
            emv = width*height;
            return emv;
        }
};


int main()
{
    int width, height;
    cout << "Give rectangle width: ";
    cin >> width;
    cout << "\nGive rectangle height: \n";
    cin >> height;
    Rectangle r;
    r.setWidth(width);
    r.setHeight(height);
    cout << "Width = " << r.getWidth() << "\nHeight = " << r.getHeight() << "\n";
    cout << "Emvado = " << r.getEmvado() << "\n";

    return 0;
}