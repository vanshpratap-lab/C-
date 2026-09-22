// EXCEPTION HANDLING

#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int m = 0;

    try {
        if (m == 0)
        throw "divison by zero";
        cout<<"Answer: "<< n/m<<endl;

    }
    catch(const char* msg){
        cout<< "Error "<<msg;
    }
    return 0;


}