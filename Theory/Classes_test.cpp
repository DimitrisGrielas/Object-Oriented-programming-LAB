#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int width;
        int height;
    public:
        Rectangle()
        {
            setWidth(0);
            setHeight(0);
            cout << "Constructed (case 1)\n";
        }

        Rectangle(int w, int h)
        {
            setWidth(w);
            setHeight(h);
            cout << "Constructed (case 2)\n";
        }

        ~Rectangle()
        {
            cout << "Deconstructed\n";
        }

        inline void setWidth(int w)
        {
            width = w;
        }

        inline void setHeight(int h)
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

        inline void print_rect()
        {
            cout << "Rectangle width = " << getWidth() << "\nRectangle height = " << getHeight() << "\n";
        }

        inline void print_emv()
        {
            cout << "Rectangle emvado = " << getEmvado() <<"\n";
        }
};


int main()
{
    int width, height;
    cout << "Give rectangle width: ";
    cin >> width;
    cout << "\nGive rectangle height: \n";
    cin >> height;
    //Rectangle r;
    //r.setWidth(width);
    //r.setHeight(height);
    Rectangle r1;
    Rectangle r2 (width, height);
    r1.print_rect();
    r1.print_emv();
    r2.print_rect();
    r2.print_emv();
    
    return 0;
}