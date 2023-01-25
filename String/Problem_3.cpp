//Write C++ program to convert a string to lower case
//Check later what is the problem with strlwr

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char string[10];

    cout<<"Enter the string to convert lower case"<<endl;
    cin.getline(string, 10);

    cout<<"in lower case = " <<strlwr(string)<<endl;

    return 0;
}