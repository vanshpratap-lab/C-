#include<iostream>
using namespace std;

void checkAge(int age){

    if (age<18)
    throw "age must be 18 or above";

}

int main(){

    try{
        checkAge(15);

    }
    catch(const char* msg){
        cout<<msg;

    }
    return 0;
}

