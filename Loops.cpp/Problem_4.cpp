// Write C++ program to find sum of even numbers between 1 to n
#include <iostream>
using namespace std;
int main()
{
    int i, num, sum;

    cout<<"Enter any number";
    cin>>num;

    // logic

    for(i =2; i<=num; i+=2){
        sum+= i;
    }

    cout<<"Sum of all even num"<<num<<":"<<sum;

    return 0;
}