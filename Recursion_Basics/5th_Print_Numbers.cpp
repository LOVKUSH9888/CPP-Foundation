// Here n = 5 == 1, 2, 3, 4, 5
// if n = == 1, 2, 3
// Rcursive Case == print(n) = print(n-1) + n

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// As we are not retruning anything so we can use Void / we are printing only

void print(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Recursive case
    print(n - 1); // 1 2 3 4 5 6 ..... n-1

    // 3rd step calcultion part
    cout << n << endl;
}

int main()
{
    print(5); // We can't write cout - as its not returning anything
    return 0;
}

// concept of void
/* void is a C++ data type that represents the absence of a value. cout is a stream that is used to output text to the console in C++. return is a statement used to exit a function and return a value to the caller.

For example, a function declared as void does not return a value, but it can still use cout to output information to the console. The return statement can be used to exit the function early without returning a value. Here is an example:*/

#include <iostream>

void printMessage()
{
    std::cout << "Hello, World!" << std::endl;
    return;
}

int main()
{
    printMessage();
    return 0;
}
