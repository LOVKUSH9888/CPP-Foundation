//C++ Program to Find the Largest Number using Conditional Operator
/*The syntax for the ternary conditional operator in C++ is as follows:

// condition ? expression1 : expression2
This operator evaluates "condition" and if it is true, the expression on the left of the colon (:) is executed, otherwise the expression on the right is executed.

For example:

int x = 10, y = 20;
int max = (x > y) ? x : y;
In this example, (x > y) is the condition, x is the expression1 and y is the expression2. The value of max will be 20.*/

#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3, largest;

    cout<<"Enter three numbers";
    cin>>num1>>num2>>num3;

    largest = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    cout<<largest<<"is the largest number";
    return 0;
}