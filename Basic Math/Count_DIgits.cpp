//BAsic concept of Modulo % = It means the Reamainder we get.
//eg. 7789%10 = 9
// 778%10 = 8
//77%10 = 7
// Extracting of digits :- (Code Studio)
int count(int n){
    int count = 0;
    while(n > 0){
        int lastDigit = n % 10;
        count = count + 1;
        n = n/10;
    }
    return count;
}
