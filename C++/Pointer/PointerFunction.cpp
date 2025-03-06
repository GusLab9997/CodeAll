#include <iostream>
using namespace std;

void increment(int *x){ //input is a pointer
    cout << "x address = "<<x<<endl;
    *x += 10; //incrementing the value at the address
}

int main(){
    int num = 15;
    increment(&num); // passing address of num
    cout<<"num address = "<<&num<<endl;
    cout << num << endl; 
}