// x^n = 0, 1, 2 ................
// 5^3 = 5 * 5 * 5 = 125
//Base case = n = 0 the x^0 = 1 & also we can take 1
// Lets think about Recursive Case = x*x^(n-1)
// Recursive case = pow(x, n) = pow(x, n-1) * x

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){   //Only we will change the n = value in case 
    //Base Case
    if(n==0) return 1;

    //Recursive Case
    int smallOutput = power(x, n-1);

    //3rd step calculation
    return x*smallOutput;
}


int main (){
    cout<<power(5, 3);
    return 0;

}


//Output = 5 * 3 = 123 ans