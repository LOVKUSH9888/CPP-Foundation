//C++ Program to find the Largest among Three Variables using Nested if
#include<iostream>
using namespace std;
int main (){
    int num1, num2, num3;

    cout<<"Enter Three Numbers";
    cin>>num1>>num2>>num3;


    
    if(num1 >= num2) {

        if(num1 >= num3) {
            cout << endl << num1 << " is largest number";
        } else {
            cout << endl << num3 << " is largest number";
        }
        
    } else {

        if(num2 >= num3) {
            cout << endl << num2 << " is largest number";
        } else {
            cout << endl << num3 << " is largest number";
        }

    }

    return 0;
}