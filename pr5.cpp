#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "enter your number: " << endl;
    cin >> num;

    if (num <= 1) {
        cout << "the number " << num << " is not a prime number" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i < num; i++){
        if (num % 1 == 0){
            isPrime = false;
            break;
        }

    }
    if (isPrime) {
        cout << "the number" << num << "is a prime number"<< endl;
    }
    else {
        cout << "the numebr" << num << "is not a prime number"<<endl;
    }


    return 0;
}