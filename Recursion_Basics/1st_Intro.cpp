//Recursion = When a function callling itself
// we use where == When a problem uses its same nature but of smaller number
//eg. = fact(n) = n*fact(n-1)
//Big probem => Smaller pro => smaller probem => smaller problem;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){

    cout<<n<<endl; // printing the vaule of n
    if(n == 0) return 1; // so that if will not go to -ve values

    ///*if (n<0) return -1; // In case of negative cin value we can take this condtion */ //factrorial of -ve number is not defind

    int smallAns = fact(n-1);
    return n*smallAns;
}

int main (){
    int n ;
    cin >> n;
    int ans = fact(n);
    cout<< ans << endl;
    return 0;
}


// ans = input = 4
//4
//3
//2
//1
//0
//24 == factorial of 4
