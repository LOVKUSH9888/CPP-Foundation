//Write C++ program to print all natural numbers in reverse order
#include<iostream>
using namespace std;
int main (){
    int num;

    cout<<"Enter the num";
    cin>>num;

    //Running the loop entered by the user and start decreasing it 

    for(int i = num; i>0; i--){
        cout<<i<<"";
    }
    return 0;
}