//BAsic concept of Modulo % = It means the Reamainder we get.
//eg. 7789%10 = 9
// 778%10 = 8
//77%10 = 7
// Extracting of digits :- (Code Studio)
int count(int n){
    int count = 0;
    while(n > 0){
        int lastDigit = n % 10; //We can remove this LAst digits
        count = count + 1;
        n = n/10;
    }
    return count;
}


//Another Method:
#include<bits/stdc++.h>
int count(int n){
    int count = (int)(log10(n) + 1); //TypeCasted to Int.
    return count;
}

//Time Complxity = O(log10(N)) //By which number the nuber is dividing.
//In Divison = time complxity always = log


//GFG 
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int x = N;
        int cnt = 0;
        while(x>0)
        {
            int last_digit = x%10;
            if(last_digit>0 && N%last_digit == 0) 
                cnt++;
                x=x/10;
        }
        return cnt;
    }
    
};



//GFG code :
class Solution
{
    public:
    int evenlyDivides(int N)
    {
        //code here
        int x = N;
        int cnt = 0;
        while(x>0)
        {
            int last_digit = x%10;
            if(last_digit>0 && N%last_digit == 0) 
                cnt++;
                x=x/10;
        }
        return cnt;
    }
    
};


/2nd :
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int temp=N;
        int c=0;
        while(N>0)
        {
            int k=N%10;
            if(k!=0) if(temp%k==0) c++;
            N=int(N/10);
        }
        return c;
    }
};
