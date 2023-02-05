//Given no. = 10320 = 0+0 = 2 zeros   // constrained n >= 1
//If n = 123 = then 0 count = 0

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int countZeros(int n){
    //BaseCase
    if(n==0){
        return 0;
    }

    //recursive CAse

    int smallAns = countZeros(n/10);   //Smallest Value 

    //Calculation

    int last_digit = n % 10; 

    if(last_digit == 0){
        return 1 + smallAns;
    }else {
        return smallAns;
    }
    
}

int main (){
    cout<<countZeros(10230);

}


//Output = 2ans