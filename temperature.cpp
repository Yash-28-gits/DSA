//
// Created by hyper on 8/4/24.
//
//temperature conversion
#include<iostream>
using namespace std;
int main(){
    int unit,temp;
    cout<<"Choose the unit"<<endl;
    cout<<"1. Celcius"<<endl;
    cout<<"2. Fahrenheit"<<endl;
    cin>>unit;
    cout<<"Enter Temperature"<<endl;
    cin>>temp;
    int out,out1;
    switch (unit){
        case 1:
            out= (temp*9/5) + 32;
            cout<<"Your Converted Temperature is : "<<out;
            break;
        case 2:
            out1= (temp-32)*5/9;
            cout<<"Your Converted Temperature is : "<<out1;
            break;
        default:
            cout<<"Enter a valid temperature "<<endl;

    }
}