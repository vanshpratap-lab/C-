#include<iostream>
using namespace std;
class animal{
    public:
};
class dog : public animal{
    public:
    void start1(){
        cout<<"dog barks"<<endl;
    }
    
    };
class cat : public animal{
    public:
    void start2(){
        cout<<"cat meow meow"<<endl;
    }

};

class tiger : public animal{
    public:
    void start3(){
        cout<<"tiger roars"<<endl;
    }

};
class horse : public animal{
    public:
    void start4(){
        cout<<"horse heee"<<endl;
    }

};
class cow : public animal{
    public:
    void start5(){
        cout<<"cow mooo"<<endl;
    }

};

int main(){
    dog d;
    cat c;
    tiger t;
    horse h;
    cow co;
    d.start1();
    c.start2();
    t.start3();
    h.start4();
    co.start5();
    
    return 0;
}