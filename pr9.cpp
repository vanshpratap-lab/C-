#include<iostream>
using namespace std;

class student{
    int id;
    string name;
    public:
    student(){
        id = 0;
        name = "unknown";
    }
    void getData(){
        cout<<"enter your id"<<endl;
        cin>>id;
        cout<<"enter your name"<<endl;
        cin>>name;
    }
    void displayData(){
        cout<<"here are your details:"<<endl;
        cout<<id<<endl;
        cout<<name<<endl;
    }
};

int main(){
    student obj;
    obj.getData();
    obj.displayData();

    return 0;
}
