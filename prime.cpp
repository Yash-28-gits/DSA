//
// Created by hyper on 8/4/24.
//
//to check if number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    int i=2, c = 0;
    while(i<n){
        if(n%i==0){
            c=1;
            break;
        }
        i=i+1;

    }
    if(c==1){
        cout<<"It is not a prime number ";
    }
    else{
      cout<<"It is a prime number ";
    }
}