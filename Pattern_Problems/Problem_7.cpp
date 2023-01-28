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


//Another way of doing this is:
int main(){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<" ";
        }
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}