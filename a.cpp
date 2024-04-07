//to see if it is lowercase, uppercase or numerical
#include <iostream>
using namespace std;
int main() {
    char sd;
    cout<<"Enter your input"<<endl;
    cin>>sd;
    if(sd>='a' && sd<='z'){
        cout<<"It is lowercase";
    }
    else if(sd>='A'&& sd<='Z'){
        cout<<"It is UpperCase";
    }
    else{
        cout<<"It is numerical";
    }
    return 0;
}
