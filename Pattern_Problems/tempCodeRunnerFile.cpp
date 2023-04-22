#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of Rows";
    cin>>n;
    for(int i=0; i<=n; i++){   //Rows
        for(int j <= 0; j<=n; j++){   //Columns
            cout<<"* ";    //* always is in this inside loop
        }
        cout<<endl;    // For next line moving 
    }
    return 0;
}