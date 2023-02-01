// GCD = Greatest Common Divisor && HCF = Higest common Factor; == We are not solving with this simple metho as the time complexity will be liner so we are using Eulidean algo.

// EUCLIDEAN ALGO = If we have two numbers N1 & N2, then
//  GCD(N1, N2) = GCD (N1-N2, N2) {Where N1>N2}
//code here
#include<iostream>
using namespace std;

    //function to return GCD of a & b
    int gcd(int a, int b){
        int result = min (a, b); //Finding the minimum of a & b
        while(result>0){
            if(a%resut == 0 && b % result == 0){
                break; // /* Remember this break always breaks the Outer Loop.*/
            }
            result -- ;
        }
        return result;
    }

// Printing the above function
int main()
{
    int a = 98, b = 56;
    cout << "GCD of " << a << " and " << b << " is "
         << gcd(a, b);
    return 0;
}




//GFG
class Solution {
  public:
    vector<long long> lcmAndGcd(long long a , long long b) {
        long long lcm, gcd; 
        
        // first gcd
        long c = a, d = b; 
        gcd = 1; 
        while(c > 0 && d > 0)
        {
            if(c > d) 
                c = c % d; 
            else 
                d = d % c; 
        }
        if(c == 0) 
            gcd = d;
        else 
            gcd = c; 
            
        lcm = (a * b) / gcd; 
        return {lcm, gcd};
    }
};