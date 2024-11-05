#include <iostream>

using namespace std;

char ** make_array(int length)
{
    int i;
    char** stud_names = new char*[length];

    for(i=0; i <= length-1; i++)
    {
        stud_names[i] = new char[50];
    }

    return stud_names;
}

int main()
{
    int stud_part_count;

    cout << "How many students did participate in the study? ";
    cin >> stud_part_count;
    cout << "\n";

    

}