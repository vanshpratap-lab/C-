// TEMPLATES
// FUCNTION TEMPLATES

#include<iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){
    cout<< "max of 3 and 7 is : "<<myMax<int>(3,7)<<endl;
    cout<< "max of 3.5 and 7.5 : "<<myMax<double>(3.5,7.5)<<endl;
    cout<< " max of g and e is : "<<myMax<char>('g', 'e')<<endl;
    return 0;

}

