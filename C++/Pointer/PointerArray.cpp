#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    int* ptr = arr;

    int length = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array elements: ";
    for(int i=0;i<length;i++){
        cout<<*(ptr+i)<<" ";

    }
    return 0;
}