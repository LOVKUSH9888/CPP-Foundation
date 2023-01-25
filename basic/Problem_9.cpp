//C++ Program to Calculate Area of Circle

#include<iostream>
#define PI 3.141
using namespace std;
int main(){
    float radius, area;
    cout<< "Enter radius";
    cin>>radius;

    area = PI*radius *radius; //Pi*r2
    cout<<area;

    return 0;
}