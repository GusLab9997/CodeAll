#include <iostream>
#include <stdint.h>
using namespace std;

int main(){
    int16_t arr[5]={1,2,3,4,5};
    int16_t* ptr = arr;

    cout<<*ptr<<endl; //1
    cout<<arr<<endl;
    cout<<ptr<<endl;
    
    return 0;
}