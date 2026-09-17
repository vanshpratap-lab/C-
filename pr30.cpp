#include<iostream>
using namespace std;

int main(){
    enum MEOW {male,female};

    MEOW bob = male;

    switch(bob){
    case male :
        cout<<"who is he?";
        break;
    case female :
        cout<<"who is she?";
        break;
    default:
        cout<<"who is they?";

    }
    return 0;
}