#include <iostream>

using namespace std;

float cube(float c_side)
{
    float volume;
    volume = c_side*c_side;
    return volume;
}

float cuboid(float c_base, float c_weidth, float c_height)
{
    float volume;
    volume = c_base*c_weidth*c_height;
    return volume;
}

float cylinder(float c_height, float c_radius)
{
    float volume;
    volume = c_height*(c_radius*c_radius)*3.14;
    return volume;
}

float distance(float x1, float y1, float x2, float y2)
{
    float distance;

    return NULL;
}

int main()
{
    char terminate;
    int check;
    do
    {
        float cube_side, cuboid_base, cuboid_weidth, cuboid_height, cylinder_height, cylinder_radius;
        float x1, y1, x2, y2;
        int choice;
        cout<<"For a cube enter 1.\nFor a cuboid enter 2.\nFor a cylinder enter 3.\nFor the distance betweem two points enter 4.\n";
        cin>>choice;
        if(choice == 1)
        {
            cout<<"\nYou have chosen a cube!\nEnter the cube's side lenght: ";
            cin>>cube_side;
            cout<<"\n\n";

            //cout<<cube_side<<"\n";

            cout<<"volume: "<<cube(cube_side)<<"\n";
        }
        else if(choice == 2)
        {
            cout<<"\nYou have chosen a cuboid!\nEnter the cuboid's base lenght: ";
            cin>>cuboid_base;
            cout<<"\n\nEnter the cuboid's weidth: ";
            cin>>cuboid_weidth;
            cout<<"\n\nEnter the cuboid's height: ";
            cin>>cuboid_height;
            cout<<"\n\n";

            //cout<<cuboid_base<<" "<<cuboid_weidth<<" "<<cuboid_height<<"\n";

            cout<<"volume: "<<cuboid(cuboid_base, cuboid_weidth, cuboid_height)<<"\n";
        }
        else if(choice == 3)
        {
            cout<<"\nYou have chosen a cylinder!\nEnter the cylinder's height: ";
            cin>>cylinder_height;
            cout<<"\n\nEnter the cylinder's radius: ";
            cin>>cylinder_radius;
            cout<<"\n\n";
        
            //cout<<cylinder_height<<" "<<cylinder_radius<<"\n";

            cout<<"volume: "<<cylinder(cylinder_height, cylinder_radius)<<"\n";
        }
        else if(choice == 4)
        {
            cout<<"\nYou have chosen the distance between two points!\nEnter the coordinates of the first point (first the x axis and then the y axis): ";
            cin>>x1>>y1;
            cout<<"\n\nEnter the coordinates of the second point (first the x axis then the y axis): ";
            cin>>x2>>y2;
            cout<<"\n\n";
        
            //cout<<"("<<x1<<","<<y1<<")"<<", "<<"("<<x2<<","<<y2<<")."<<"\n";

            cout<<"distance: "<<distance(x1, y1, x2, y2)<<"\n";
        }
        else
            cout<<"\nYou have entered wrong input! Only the numbers 1, 2, 3 and 4 must be chosen!\n";

        cout<<"\nTerminate procedure?\n";
        cin>>terminate;

        if(terminate == 'y' || terminate == 'Y')
            check = 0;
        else if(terminate == 'n' || terminate == 'N')
            check = 1;
        else
            cout<<"\nTermination code invalid! For termination press 'y' or 'Y' and for continuation press 'n' or 'N'!\n\n";

    } while(check);

    return 0;
}