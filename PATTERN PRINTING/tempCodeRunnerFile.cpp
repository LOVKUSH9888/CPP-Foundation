#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main()
{
    for(int i = 5; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout<<"*";
            Sleep(5000);
        }
        cout<<endl;
        
    }
    
    return 0;
}