#include<iostream>
using namespace std;

class employee{
    public:
    string name;
    int empid;
};

class manager : public employee{
    public:
    void inputdata(){
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"please enter your emp id"<<endl;
        cin>>empid;
    }
    void DisplayData(){
        cout<<"here are your details"<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"id : "<<empid<<endl;
    }
};




int main(){
    manager obj;
    obj.inputdata();
    obj.DisplayData();
    return 0;
}