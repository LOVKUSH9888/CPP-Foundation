#include<iostream>
using namespace std;
int main (){
    for(int i=0; i<n; i++){
        for(int k = n-1; k>0; k--){
            cout<<" ";
        }
        for(int j = 1; j<=((int i*2)-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}