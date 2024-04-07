//
// Created by hyper on 8/4/24.
//
//to print the numbers and their sum
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your limit"<<endl;
    cin>>n;
    int i=1,sum=0;
    while(i<=n){
        cout<<" "<<i;
        sum=sum+i;
        i=i+1;
    }
    cout<<endl<<" Sum is : "<<sum;
}