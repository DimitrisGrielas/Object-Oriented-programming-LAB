#include <iostream>

using namespace std;

inline void swap1(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap2(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

void swap3(int **ptr1, int **ptr2)
{
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

inline void print_int(const int num)
{
    cout << "Number = " << num << "\n";
}

int main()
{
    int num1, num2;
    cout << "Give two intiger numbers: ";
    cin >> num1 >> num2;
    cout << "\n";

    swap1(num1, num2);

    print_int(num1);
    print_int(num2);

    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    swap2(ptr1, ptr2);

    print_int(num1);
    print_int(num2);

    swap3(&ptr1, &ptr2);
    print_int(*ptr1);
    print_int(*ptr2);

    return 0;
}