#include <iostream>

using namespace std;

int* prime(const int& num, int& prime_count)
{
    int i, j, k = 0, count;
    int* array = new int[num];
    for(i = 1; i <= num; i++)
    {
        count = 2;
        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            cout << "prime: " << i << "\n";
            array[k] = i;
            k++;
        } 
    }

    int* new_array = new int[k];
    for(i = 0; i < k; i++)
    {
        new_array[i] = array[i];
    }
    delete[] array;

    prime_count = k;
    return new_array;
}

void print_array(const int* array, const int& prime_count)
{
    int i;
    for(i = 0; i < prime_count; i++)
    {
        cout << array[i] << "\n";
    }
}

int main()
{   
    int num;
    cout << "Enter a intiger number: ";
    cin >> num;
    cout << "\n";
    int prime_count = 0;
    int* array = prime(num, prime_count);
    print_array(array, prime_count);
    int i;
    /*for(i = 0; i < num; i++)
    {
    cout << array[i] << "\n";
    }*/

    delete[] array;
    return 0;
}