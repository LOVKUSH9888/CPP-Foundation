// C++ Program to convert celcius to farenheit

#include <iostream>
using namespace std;

int main(){
    float celsius, farenheit;
    cout<<"Enter Temp. in Celsius";
    cin>>celsius;

    //Formula or Logic

    farenheit = (1.8*celsius) +32;
    cout<<"Temp. in fahrenheit" << farenheit;


    return 0;
}