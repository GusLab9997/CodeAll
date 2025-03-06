#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(10); // []->[10]
    vec.push_back(20); // [10]->[10,20]
    vec.push_back(30); // [10,20]->[10,20,30]

    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    vec.pop_back(); // [10,20,30]->[10,20]
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}