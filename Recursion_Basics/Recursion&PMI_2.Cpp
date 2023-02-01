//Iterative solution means = Use FOR & WHILE loop to solve a problem
//Recursion works on the princple of PMI =Principle of Mathematical Induction == 
// it was used to prove the facts 
// PMI proves any facts in 3 steps == This step is called  1st step = BASE CASE 
// 2nd step  = Induction Hypothesis = we need to assume in this case k
//3rd step = Induction step = we have to prove for Sigma(k+1)
// /* In every Recursion problem - we assume we  will prove the PMI 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact (int n){

    //1st step = Base case
    if (n == 0){
        return 1;
    }


    //2nd step {Assumption / Recursive Case}
    int smallAns = fact(n-1); 


    //3rd step = Calculations
    int ans = n * smallAns;
    return ans;
}

int main() {
    cout<<fact(4)<<endl;   //ENtering 4 like input & printing its avalue
    return 0;
}


//Output = 24 ans.