// So STL has the sort word = we can use it to sorting this array
e.g.

a[] = {1, 5, 3, 2};
//use sort
sort(a, a +n); // here a = 1st iterator & a+n = end or last iterator
//

//Imp. 
now here a = 1
a+2 = 5
a+3 = 3
& a + 4 = 2
so array will be sorted = a[] = {1, 2, 3, 5};

//By using vector syntax will br:
sort(v.begin(), v.end());


//2nd = If we want to sort in Decending Order :
//Use 
sort(a, a+n, greater<int>);


//3rd = Sorting in my ownway
sort(a, a+n,comp)
//here a = 1st 
//a+n = last
// comp = self written comparator == It isBoolean Function always
Syntax of comp : 
//Here p1 = pair 1 == {0,0}
 //& p2 = pair 2 == {1, 1}
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //Means they are same 
    if(p1.first > p2.first) return true;
    return false;


    ///Builtinpopcount
    int num = 7;
    int cnt = _builtin_popcount();
    long long num = 165786444656;
}

