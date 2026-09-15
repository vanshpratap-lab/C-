#include<iostream>
using namespace std;

int main(){
    int *nptr;

    nptr = new int[10]{1,2,3,4,5};

    cout<<"your output is :"<<endl;
    for(int i = 0; i <=10; i++)
        cout<<nptr[i]<<endl;

    return 0;

}