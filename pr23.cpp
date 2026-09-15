#include<iostream>
using namespace std;

int main(){
    int *ptr = new (nothrow) int;
    if (ptr == nullptr)
    cout<<"memory allocation failed"<<endl;

    delete ptr;
}