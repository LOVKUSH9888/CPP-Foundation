#include<iostream>
using namespace std;
int main(){
    for(int i=n; i>=1; i--)
	    {
	        for(int j=1; j<=i; j++)
	            cout<<j<<" ";
	        cout<<endl;
	    }
	}
    return 0;
}



//Another way of solving this 
for(int i =0; i<n ; i++){  //Rows
	        int k=1; //As first value is 1
	        for(int j=n-i ; j>0 ;j--){ //Columns
	            
	            cout<<k<<" ";
	            k++;
	        }
	        cout<<endl;
	    }
	    return;
	}