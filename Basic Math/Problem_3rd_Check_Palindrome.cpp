//Palindrome = WHich reverse is Exactly same ex. RACECAR = RACECAR & 121 = 121
int main(){
    int n;
    cin >> n;
    int revNum = 0; //revNum = ReverseNumber
    int dup = n; //Dup = Duplicate
    while (n > 0){
        int ld = n%10;  //ld = last_digit
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if(dup == revNum) cout <<"True";
    else cout << "false";
}


//GFG

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int rev=0;
		    int ans=n;
		    while(n>0){
		        rev=rev*10+(n%10);
		        n/=10;
		    }
		    if(ans==rev){
		        return "Yes";
		    }
		    return "No";
		}
};

//LeetCode 
bool isPalindrome(int x) {
    long reverse = 0;
    long num = abs(x);
    while(x != 0){
        reverse *= 10;
        reverse += x % 10;
        x /= 10;
    }
    return reverse == num;
}


//2nd LeetCode:
 bool isPalindrome(int x) 
    {
       long int digit,reverse=0;
       int temp=x; // It does this by first storing the original value of x in the variable temp. 
       while(x>0) //uses a while loop to reverse the number stored in x by successively extracting its last digit, and appending it to the reverse variable.
       {
           digit=x%10;
           reverse=(reverse*10)+digit;
           x=x/10;
       }
      if(temp==reverse)
      {return true;}
      else
      {return false;}  
    }
};