//https://www.geeksforgeeks.org/cpp-program-to-print-pyramid-patterns/

//1.
#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main()
{
    for(int i = 1; i<=5; i++){
        for(int j = 1; j <=i; j++){
            cout<<"*";
            //Sleep(1000);
        }
        cout<<endl;
    }
    
    return 0;
}


//2.
#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main()
{
    for(int i = 5; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout<<"*";
            // Sleep(5000);
        }
        cout<<endl;
        
    }
    
    return 0;
}



// C++ program for the above approach
  
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
  
// Driver Code
int main()
{
    // Initialize the string
    string S = "Hello World!";
  
    // Traverse the given string S
    for (int i = 0; i < S[i]; i++) {
  
        cout << S[i];
  
        // Waits for 200 milliseconds
        //Sleep(200);
    }
  
    return 0;
}



#include <iostream>
#include <windows.h>
using namespace std;
  
// Driver Code
int main()
{
    for (int i = 0; i < 5; i++)
    {
		cout << i ;
        //Sleep(100);
    }
}