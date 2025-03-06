#include <iostream>
#include <stdint.h>
using namespace std;

int main(){
    int16_t number = 10;
    int16_t* ptr = &number; //address of number
    cout<<&number<<endl; //address of number
    cout<<*ptr<<endl;

    number = 20;    //changing value of number
    cout<<number<<endl; //value of number
    cout<<*ptr<<endl;  //value of number
    return 0;
}
