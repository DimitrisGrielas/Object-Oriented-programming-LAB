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

        inline void setWidth(int w);

        inline void setHeight(int h);

        inline int getWidth() const;

        inline int getHeight() const;

        inline int getEmvado() const;

        inline void print_rect();

        inline void print_emv();

};

inline void Rectangle::setWidth(int w)
{
    width = w;
}

inline void Rectangle::setHeight(int h)
{
    height = h;
}

inline int Rectangle::getWidth() const
{
    return width;
}

inline int Rectangle::getHeight() const
{
    return height;
}

inline int Rectangle::getEmvado() const
{
    return getWidth()*getHeight();
}

inline void Rectangle::print_rect()
{
    cout << "Rectangle width = " << getWidth() << "\nRectangle height = " << getHeight() << "\n";
}

inline void Rectangle::print_emv()
{
    cout << "Rectangle emvado = " << getEmvado() <<"\n";
}

inline void inc_rect(Rectangle &r)
{
    r.setWidth(r.getWidth() + 1);
    r.setHeight(r.getHeight() + 1);
}

inline Rectangle add_rect(Rectangle &r1, Rectangle &r2)
{
    Rectangle r (r1.getWidth()+r2.getWidth(), r1.getHeight()+r2.getHeight());
    return r;
}

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
    Rectangle r3;
    r1.print_rect();
    r1.print_emv();
    r2.print_rect();
    r2.print_emv();
    inc_rect(r1);
    r1.print_rect();
    r3 = add_rect(r1, r2);
    r3.print_rect();
    
    return 0;
}