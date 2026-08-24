#include <iostream>
using namespace std;

class animal {
public:
    string name;
    string sound;

    void inputData() {
        cout << "Enter animal name: ";
        cin >> name;

        cout << "Enter animal sound: ";
        cin >> sound;
    }

    void display() {
        cout << "Animal name: " << name << endl;
        cout << "Animal sound: " << sound << endl;
    }
};

class dog : public animal {
public:
    void start() {
        cout <<name<< " is barking!" << endl;
    }
};

class cat : public animal {
public:
    void start() {
        cout << name << " is meowing!" << endl;
    }
};

int main() {

    dog d;
    cat c;
    
    d.inputData();
    d.start();
    c.inputData();
    c.start();

    return 0;
}