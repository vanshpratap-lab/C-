// USER DEFINED DATA TYPES --- STRUCT
#include<iostream>
using namespace std;

struct MEM{
    int g1;
    char g2;
    float g3;
};

int main(){
    MEM geek = {20,'v',20000.12};

    cout<<geek.g1<<endl;
    cout<<geek.g2<<endl;
    cout<<geek.g3<<endl;

    return 0;

}
