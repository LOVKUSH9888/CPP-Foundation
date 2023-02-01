//Fibonacci Series is = First Two numbers are fixed :
//e.g = 0 1 1 2 3 5 8 {first 0 & 1 are fixed}
//& if we ad then we need to add these 0 & 1 to the numbers
//fib(n) = fib(n-1) + fib(n-2) /*n-1 & n-2 is the previous two numbers*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n){

    //Since we have Two Recursive case So we need to make Two bases cases here

    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    //Step 2 =Recursive CAse

    int smallInput1 = fib(n-1);
    int smallInput2 = fib(n-2);


    //Calculation

    return smallInput1 + smallInput2;
}

int main(){
    cout<<fib(3); //3rd fibonacci number
    return 0;
}


//Output = 3
