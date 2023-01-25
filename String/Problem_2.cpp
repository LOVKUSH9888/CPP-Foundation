//Write C++ program to find string length

#include<iostream>
using namespace std;
int main (){
    string str = "Lovkush";
    //Type-1
    cout<<"String Length = " << str.length()<<endl;

    //Type-2
    cout<<"String Length = " << str.size()<<endl;

    return 0;
}