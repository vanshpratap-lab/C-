#include<iostream>
using namespace std;

int main(){
    int arr[10], n;
    cout<<"please enter number of elements : "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cout<<"enter your elements : "<<endl;
        cin>>arr[i];
    }
    int maxval = arr[0];
    int minval = arr[0];
    for (int i =1; i < n; i++){
        if (arr[i] > maxval){
            maxval = arr[i];
        }
        if (arr[i] < minval) {
            minval = arr[i];
        }
    }
    cout<<"maximum value is"<<maxval<<endl;
    cout<<"minimum value is"<<minval<<endl;
    return 0;
}