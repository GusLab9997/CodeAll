#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *startPtr = &arr[1];
    int *endPtr = &arr[4];

    int distance = endPtr-startPtr;
    cout << "StartPtr: " << *startPtr << endl;
    cout << "EndPtr: " << *endPtr << endl;
    cout << "Distance: " << distance << endl;
}