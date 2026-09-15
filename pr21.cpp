#include<iostream>
using namespace std;

int main(){
    int x = 6;
    int *nptr;

    nptr = new int(10);
    cout<<x<<endl;
    cout<<"your new pointer :"<<nptr<<endl;
    cout<<"update x: "<<*nptr<<endl;
    
    return 0;
}