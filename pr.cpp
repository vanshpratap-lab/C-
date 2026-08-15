#include<iostream>
using namespace std;

int main(){
    int a ,b , sum , difference , product, quoteint, remainder ;
    cout<<"please enter you first number : "<<endl;
    cin>>a;
    cout<<"please enter your second number : "<<endl;
    cin>>b;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quoteint = a / b;
    remainder = a % b;

    cout<<"Your output: "<<endl;

    cout<<":"<<sum<<endl;
    cout<<":"<<difference<<endl;
    cout<<":"<<product<<endl;
    cout<<":"<<quoteint<<endl;
    cout<<":"<<remainder<<endl;

    return 0;


}