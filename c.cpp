//
// Created by hyper on 8/4/24.
//
//sum of even numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    int i=1,sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
;        }
        i=i+1;
    }
    cout<<" Sum of even numbers is : "<<sum;
}
