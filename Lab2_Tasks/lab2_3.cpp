#include <iostream>

using namespace std;

void array_input(char** names, int* matches, int length)
{
    int i, j;
    for(i = 0; i <= length - 1; i++)
    {
        int k = 50;
        cout << "Enter " << i << " student's name: ";
        cin.getline(names[i], k);
        cout << "\n";

        cout << "Enter the number of matches that the " << i << " student played: ";
        cin >> matches[i];
        cin.ignore();
        cout << "\n";
        /*for(j = 0; j <= 49; j++)
        {
            
        }*/
       
    }
    for(i = 0; i <= length - 1; i++)
    {
       cout << names[i] << "\n";
    }
}

int main()
{
    int i;
    int stud_part_count;

    cout << "How many students did participate in the study? ";
    cin >> stud_part_count;
    cout << "\n";

    int* matches = new int[stud_part_count];
    char** stud_names = new char*[stud_part_count];

    for(i=0; i <= stud_part_count-1; i++)
    {
        stud_names[i] = new char[50];
    }

    array_input(stud_names, matches, stud_part_count);

    return 0;

}