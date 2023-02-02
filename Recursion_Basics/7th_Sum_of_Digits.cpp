// given n = 12345 = all all digits == 15 ans
// similaryly = n = 12 == 3
// if n = 15 == 6
//Same break the num into smaller part & 1234/5 = sum(n) + last digit & so on.
// formula will be   =  sum(n) = sum(n/10) + last digit //here n/10 = smaller digit = 1234

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int sum(int n){
    // BAse case

    if(n == 0){
        return 0;
    }

    //Recursive case
    int smallAns = sum(n/10);

    //CAlculation

    int last_digit = n%10;
    return smallAns + last_digit;
}

int main (){
    cout<<sum(12345);
}

//Output = 15 ans