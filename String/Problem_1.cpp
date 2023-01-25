// Write C++ program to concatenate two strings
#include<iostream>
using namespace std;
int main(){
    string firstName = "Lovkush";
    string lastName = "Yadav";
    //Method one 
    cout<< firstName + " " + lastName<<endl;

    //2nd method = Append method
    cout<<firstName.append(lastName);
    return 0;
}