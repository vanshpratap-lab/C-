// OPARTIONS ON ARRAY

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {10,20,30,40,50};
//     cout<<arr[3]<<endl;
//     cout<<arr[0]<<endl;

//     return 0;
// }

// UPDATE ARRAY ELEMENTS

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {10,20,30,40,50};
//     cout<<arr[2]<<endl;
//     arr[2] = 85;
//     cout<<arr[2]<<endl;
//     return 0; 
// }

// TRAVERSING OF ARRAY

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {10,20,30,40,50};
    
//     for(int i = 0; i < 5; i++)
//     cout<<arr[i]<<endl;

// }

// SIZE OF ARRAY
#include<iostream>
using namespace std;

int main(){
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    cout<<"size of one array element : "<<sizeof(arr[0])<<endl;
    cout<<"size of whole array : "<<sizeof(arr)<<endl;

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"length fo the array"<<n<<endl;
    return 0;

}