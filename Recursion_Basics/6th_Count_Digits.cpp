//We have to count the digits in the number e.g = 4025 = 4digits && 125 = 3 digits
//I willl break the number and add1 = 402/5 = 3 + 1
//Again break  = 40/2 = 
//Again break = 4/0 =
//Again break = 0/4 = 
//Again Break = 0 == Base case

//If 4025 = n Then 402 = n/10 {Int/int = int}
//Count(n) = count(n/10) + 1


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int count(int n){
    //Base CAse

    if (n == 0){
        return 0;
    }

    //Recursive case
    int smallAns = count(n/10);

    //Calculation 
    return smallAns + 1;
}


int main (){

    cout<<count(4025);

}

//Output = 4ans
