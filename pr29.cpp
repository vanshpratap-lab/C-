// USER DEFINED DATA TYPE --- UNION

#include<iostream>
using namespace std;

union MEOW{
    int g1;
    char g2;
    float g3;
};

int main(){
    MEOW bob;
    
    bob.g1 = 20;
    cout<<bob.g1<<endl;
    bob.g2 = 'v';
    cout<<bob.g2<<endl;
    bob.g3 = 20000.12;
    cout<<bob.g3<<endl;


    return 0;


}