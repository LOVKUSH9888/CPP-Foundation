//Write C++ program to print alphabets from a to z

image.png


#include<iostream>
using namespace std;
int main(){
    //ASCII value of a = 97 & z = 122
    
    for(int i = 97; i<=122; i++){
        cout<<(char)i<<endl;
    }
    return 0;
}