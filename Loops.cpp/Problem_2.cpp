//Write C++ Multiplication Table Programs
#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter num to print table";
    cin>>num;

    //Logic

    for(int i =0; i<=10; i++){
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }
    return 0;
}