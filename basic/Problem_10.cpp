// C++ Program to convert days to years, weeks and days

#include<iostream>
using namespace std;
int main (){
    int days, years, weeks, days;

    cout<<"Enter days";
    cin>>days;

    //Logic

    years = (days/365);
    weeks = (days % 365)/7;
    days = days-((years*365)+(weeks*7));

    cout <<"Years : "<<years<<endl;
    cout<<"weeks:"<<weeks<<endl;
    cout<<"Days :"<<days<<endl;


    return 0;
}