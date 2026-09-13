// POINTERS -- stores memory address of the value in the variable
// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int* myptr;

//     myptr = &x;

//     cout<<"the value of x is : "<<endl;
//     cout<<x<<endl;

//     cout<<"the address of x is : "<<endl;
//     cout<<myptr<<endl;

//     cout<<"the value of myptr is : "<<endl;
//     cout<<*myptr<<endl;

//     return 0;
// }

// USE OF REFRENCE VARIABLE --- just another alias to store the same value of the varibale means asame value in two variables 1st - real and 2nd - refrenced

#include<iostream>
using namespace std;

int main() {
    int x = 10;

    int& myref = x;

    cout<<"the value of x is : "<<x<<endl;

    x = 30;
    cout<<"the updated value of x is : "<<x<<endl;
    cout<<"the vlaue of refrence varibale is : "<<myref<<endl;

    return 0;
}