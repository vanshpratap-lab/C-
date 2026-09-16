#include<iostream>
using namespace std;

class ATM{
    private:
    int c_pin = 4321;
    double balance = 0;
    bool verifypin(int pin){
        if ( pin == c_pin){
            cout<<"pin is correct "<<endl;
            return True;


        }
        else{
            cout<<"incprrect pin"<<endl;
            return false;
        }

    }
    public:
    void enter(){
        
    }

}