//C++ Program to check whether an integer entered by the user is odd or even
#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter a Number";
    cin>>num1;

    //Logic

    if(num1%2 == 0){
        cout<<num1 <<"  is even number";
    }else{
        cout<<num1 <<"  is odd number";
    }
    return 0;
}