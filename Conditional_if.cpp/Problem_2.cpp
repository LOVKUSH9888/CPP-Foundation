//C++ Program to Find the Largest Number Among Three
#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;

    //Taking input from the user now 
    cout<<"Enter three numbers";
    cin>>num1>>num2>>num3;

    //Logic

    if(num1>num3 && num1>=num3){
        cout<<num1<<"is the largest number"<<endl;
    }
    else if(num2>=num1 && num2>=num3){
        cout<<num2<<"is the largest number"<<endl;
    }
    else if (num3>=num1 && num3>=num2){
        cout<<num3<<"is the largest number"<<endl;
    }
    return 0;
}