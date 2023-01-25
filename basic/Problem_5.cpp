// C++ Program to perform all arithmetic operations

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    int sum, mult, sub, mod;
    float div;

    cout<< "Enter the num1";
    cin>>num1;

    cout<<"Enter the num2";
    cin>>num2;


    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    mod = num1 % num2;
    div = (float)num1 /num2;

    cout<<"Sum"<<sum;
    cout<<"Sub"<<sub;
    cout<<"Mult"<<mult;
    cout<<"mod"<<mod;
    cout<<"div"<<div;



}