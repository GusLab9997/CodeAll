#include <iostream>
using namespace std;

int* createArray(int size){
    int* arr = new int[size];
    
    for(int i = 0; i<size; ++i){ // i = 0, 1, 2, 3, 4
        arr[i] = i*i; // i^2
    }
    return arr;
}

int main(){
    int size = 5;
    int *myArray = createArray(size); // 0 1 4 9 16
    
    cout << "Array elements: ";
    for(int i = 0; i<size; ++i){ // i = 0, 1, 2, 3, 4
        cout << myArray[i]<<" "; // 0 1 4 9 16
    }
    cout<<endl;
    delete[] myArray;
}