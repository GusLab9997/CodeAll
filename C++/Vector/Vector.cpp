#include <iostream>
#include <vector>
using namespace std;

int main(){
    int myArray[]={1,2,3,4,5};
    cout<<"Array elements : "<<endl;
    for(int i=0;i<5;i++){
        cout<<myArray[i]<<" "<<endl;
    }
    vector<int> myVector = {1,2,3,4,5};
    cout<<"Vector elements : "<<endl;
    for(int i=0; i < myVector.size(); i++){ //size() หาขนาดของ vector ให้
        cout<<myVector[i]<<" "<<endl;
    }
}