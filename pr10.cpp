#include<iostream>
using namespace std;

class car{
    public: 
    int modelno;
    string name;

    car(){
        cout<<"tata is a great car company"<<endl;
    }
    void print(){
        cout<<name<<"with mode no"<<modelno<<endl;
    }
};
int main(){
    car c;
    return 0;
}