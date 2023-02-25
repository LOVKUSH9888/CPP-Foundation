// C++ Program to demonstrate working of a function
#include <iostream>
using namespace std;

// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y){
    if(x>y){
        return x;

    }else{
        return y;
    }
}

// main function that doesn't receive any parameter and
// returns integer
int main()
{
	int a = 50, b = 20;

	// Calling above function to find max of 'a' and 'b'
	int m = max(a, b);

	cout << "m is " << m;
	return 0;
}


//2nd 

#include <iostream>
using namespace std;

// Inline function declaration
inline int add(int x, int y) {
   return x + y;
}

int main() {
   // Function call
   int result = add(5, 7);
   cout << "Result: " << result << endl;
   return 0;
}


//Pass by Value

#include <iostream>
using namespace std;

// Function that accepts two integer values and returns their sum
int add(int x, int y) {
   x = x + 1; // Changes made to x inside the function do not affect the original value of x
   return x + y;
}

int main() {
   int a = 5;
   int b = 7;
   int result = add(a, b); // Passes the values of a and b to the add() function
   cout << "Result: " << result << endl;
   cout << "a: " << a << endl; // The value of a is unchanged
   return 0;
}


//Pass by ref.

#include <iostream>
using namespace std;

// Function that accepts two integer references and returns their sum
int add(int& x, int& y) {   ///& we use 
   x = x + 1; // Changes made to x inside the function affect the original value of x
   return x + y;
}

int main() {
   int a = 5;
   int b = 7;
   int result = add(a, b); // Passes the memory addresses of a and b to the add() function
   cout << "Result: " << result << endl;
   cout << "a: " << a << endl; // The value of a is changed
   return 0;
}


