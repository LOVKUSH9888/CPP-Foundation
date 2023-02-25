//Write a function to print a message a given number of times.

#include <iostream>
using namespace std;

// Function to print a message a given number of times
void printMessage(string message, int n) {
   for (int i = 0; i < n; i++) {
      cout << message << endl;
   }
}

int main() {
   // Call the printMessage() function with two arguments
   printMessage("Hello, World!", 3);
   return 0;
}
