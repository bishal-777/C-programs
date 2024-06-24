/* Program to find the volume of cube ,cylinder and rectangle by using the concept of function overloading*/
#include <iostream>
#include<math.h>
#define pi 3.14

int cube(int);
int cylinder (int,int);
int cuboid(int,int,int);

using namespace std;
int main() {
    int choice,l1,r2,h2,l3,b3,h3;
    cout<<"Enter 1 for cube\tEnter 2 for cylinder\tEnter 3 for  cuboid"<<'\n';
    cin>>choice;
    
    switch (choice){
        case 1:
        cout<<"Enter length of cube"<<'\n';
        cin>>l1;
        cout<<"Area of cube="<<cube(l1)<<'\n';
        break;

        case 2:
        cout<<"Enter radius and height of cylinder:"<<'\n';
        cin>>r2>>h2;
        cout<<"Area of cylinder="<<cylinder(r2,h2)<<'\n';
        break;

        case 3:
         cout<<"Enter length,breadth and height of cylinder:"<<'\n';
        cin>>l3>>b3>>h3;
        cout<<"Area of rectangular box(Cuboid)="<<cuboid(l3,b3,h3)<<'\n';
        break;

        default:
        cout<<"Invalid operator!!!";

        
    }
    return 0;
}

int cube(int l){
    int a;
    a=pow(l,3);
    return a;
}

int cylinder(int r,int h){
    int a;
    a=pi*pow(r,2)*h;
    return a;
}

int cuboid(int l,int b,int h){
    int a;
    a=l*b*h;
    return a;
}