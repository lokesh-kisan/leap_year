#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a number";
    cin>>year;
    if(year%4)
        cout<<"Not a leap year";
    else if(year%100)
        cout<<"Leap year";
    else if(year%400)
        cout<<"Not a leap year";
    else
        cout<<"Leap year";
    getch();

}
