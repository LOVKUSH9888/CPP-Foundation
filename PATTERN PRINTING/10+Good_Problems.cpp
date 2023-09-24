#include <iostream>

using namespace std;

int main() {
    int i, j;

    // Problem 1: Right-angled Triangle
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Problem 2: Inverted Right-angled Triangle
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Problem 3: Half Pyramid using Numbers
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // Problem 4: Half Pyramid using Alphabets
    char ch = 'A';
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // Problem 5: Pyramid
    int spaces;
    for (i = 1; i <= 5; i++) {
        for (spaces = 5 - i; spaces >= 1; spaces--) {
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Problem 6: Inverted Pyramid
    for (i = 5; i >= 1; i--) {
        for (spaces = 5 - i; spaces >= 1; spaces--) {
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Problem 7: Diamond Pattern
    int k;
    for (i = 1; i <= 5; i++) {
        for (spaces = 5 - i; spaces >= 1; spaces--) {
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        for (k = i - 1; k >= 1; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = 4; i >= 1; i--) {
        for (spaces = 5 - i; spaces >= 1; spaces--) {
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        for (k = i - 1; k >= 1; k--) {
            cout << "* ";
        }
        cout << endl;
    }

    // Problem 8: Hollow Rectangle
    int rows = 5, cols = 10;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Problem 9: Floyd's Triangle
    int num = 1;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Problem 10: Pascal's Triangle
    int n = 5;
    for (i = 0; i < n; i++) {
        int val = 1;
        for (spaces = 1; spaces <= n - i; spaces++) {
            cout << "  ";
        }
        for (j = 0; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
