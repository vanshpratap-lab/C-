#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"please enter your number : "<<endl;
    cin>>a;

    if (a % 2 == 0) {
        cout<<"the number"<<a<<"is even"<<endl;
        if (a > 0)
        { 
            cout<<"the number"<<a<<"is positve"<<endl;
        }
        else if (a < 0){
            cout<<"the number"<<a<<"is negative"<<endl;
        }
        else {
            cout<<"the number is 0"<<endl;
        }
    }
    else {
        cout<<"the number"<<a<<"is odd"<<endl;
        if (a > 0) {
            cout<<"the number "<<a<<"is positive"<<endl;
        }
        else if (a < 0){
            cout<<"the number"<<a<<"is negative"<<endl;
        }
        else {
            cout<<"the number"<<a<<"is 0"<<endl;
        }
    }

    return 0;
}