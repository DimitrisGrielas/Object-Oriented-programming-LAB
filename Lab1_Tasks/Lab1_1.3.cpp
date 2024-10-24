#include <iostream>

using namespace std;

int numEvaluation(int num)
{
    int check = (num%2 == 0);
    if(check)
        return 0;
    else
        return 1;
}

int main()
{
    int num;
    cout<<"Enter a number: \n";
    cin>>num;
    cout<<numEvaluation(num)<<"\n";
    return 0;
}