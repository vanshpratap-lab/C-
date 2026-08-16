#include<iostream>
using namespace std;

int main(){
    int a ,b;

    cout<<"please enter your a number"<<endl;
    cin>>a;
    cout<<"please enter your b number"<<endl;
    cin>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
    
    
    return 0;

}