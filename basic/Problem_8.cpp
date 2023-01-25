//C++ Program to find the Size of data types

#include<iostream>
using namespace std;
int main(){
    char charType;
    short shortType;
    int intType;
    long long longType;
    float floatType;
    double doubleType;

    // sizeof operator is used to determine size of data type and

    cout<<"Size of char"<< sizeof(charType)<<endl;
    cout<<"Size of short"<< sizeof(shortType)<<endl;

    // similarly for all other type we cant give same cout

    return 0;
}