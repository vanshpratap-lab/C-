// WTITE A PROGRAM FOR A CLASS DORAEMON WITH AN ATTRIBUTES COLOUR POCKET NAME HEIGHT AND BEHAVIOUR AND TAKE OUT GADGET HELP NOBITAA AND FLY
#include<iostream>
using namespace std;

class Doraemon{
    public:
    string colour;
    string pocket;
    string action;
    string fly;
    
    void getdata(){
        colour = "blue";
        pocket = "4d";
        action = "helps nobita";
        fly = "he can fly";
    }
    void displaydata(){
        cout<<"here is your doraemon : "<<endl;
        cout<<"colour of doraemon is :"<<colour<<endl;
        cout<<"he have a "<<pocket<<" pocket"<<endl;
        cout<<"he "<<action<<endl;
        cout<<fly<<endl;


    
    }
};

int main(){
    Doraemon obj;
    obj.getdata();
    obj.displaydata();
    
    return 0;
}