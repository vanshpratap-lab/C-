#include<iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++){
        result = result * i;
    }
    return result;
}

int FactorialRecurssive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * FactorialRecurssive(n-1);
    }
}

int main (){
    int num;
    cout << "please enter your number" << endl;
    cin >> num;

    cout<<"factorial of loop version : "<< factorial(num) << endl;
    cout<<"factorial of recurssive version : "<< FactorialRecurssive(num) << endl;

    return 0;
}