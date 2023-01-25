//Write C++ program to convert a string to upper case
//check on digital ocean for depth understanding 
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char string[10];
    cout<<"Input a string to convert lower case";
    cin.getline(string, 10);

    cout<<"Char in Uppercase"<<strupr(string)<<endl;

    return 0;
}