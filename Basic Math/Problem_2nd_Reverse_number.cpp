//Write a program to reverse a number
//method ==== revNum = (revNum*10) +lastDigit
int main(){
    int n;
    cin >> n;

    int revNum = 0;
    while (n > 0){
        int ld = n%10;  //ld = last_digit
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    cout << revNum;
}



//GFG
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        long long ans=0;
        for(int i=0;i<=31;i++){
            ans+=((X>>i)&1)*(1L<<(31-i));

        }

        return ans;
    }
};



//2nd:
        long long ans=0;
        int cnt=0;
        while(X!=0){
            ans=(X&1)+(ans<<1);
            X=X>>1;
            cnt++;
        }
        for(int i=0;i<32-cnt;i++){
            ans=ans<<1;
        }
        return ans;
