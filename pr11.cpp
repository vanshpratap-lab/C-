#include<iostream>
using namespace std;

class vehicle{
    public:
    string name;
    string fueltype;

};

class bike : public vehicle{
    public:
    void start(){
        cout<<"start the bike"<<endl;
    }

};

int main(){
    bike obj;
    obj.start();

    return 0;
}


