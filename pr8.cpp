#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"enter a string"<<endl;
    cin>>str;

    int i = 0;
    int j = str.length() - 1;

    while (  i < j ){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout<<"reversed string : "<<str<<endl;
    return 0; 
}