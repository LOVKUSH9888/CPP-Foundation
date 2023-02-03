//Given two numbers m & n = m*n {condition = we can only use + & - operator not *}
//m*n = (m+m+m+m....) n time
//we can write = m*n = m*(n-1) + m /*{mn - m + m} */
// Example = m = 3 & n = 5 === 3*5 = 3 + 3 + 3 + 3 + 3
//Formula = m*n = m * (n - 1) + m
//BAsecase = m*0 = 0
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int multiply(int m, int n){   //m*n
    //Base-Case
    if(n==0){
        return 0;
    }
    //Recursive Case
    int smallAns = multiply(m, n-1);   //m*(n-1)

    //Calculation
    return smallAns + m;
    
}


int main (){
    cout << multiply(5, 20);
}

/Output = 100;

