#include <iostream>

using namespace std;

int main()
{
    float grade[5];
    float average = 0;
    unsigned short int i;

    cout<<"Enter five grades: \n";

    for (i = 0; i < 5; i++)
    {
        cin>>grade[i];
    }

    for (i = 0; i < 5; i++)
    {
        average += grade[i];
    }
    average = average/5.0;

    cout<<"The average grade is: "<<average<<"\n";

    for (i = 0; i < 5; i++)
    {
        if(grade[i] < average)
        {
            cout<<grade[i]<<"\n";
        }
    }
    
    return 0;
}