#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec(5,10);

    vec.push_back(20); // [10,10,10,10,10]->[10,10,10,10,10,20]
    vec.push_back(30); // [10,10,10,10,10,20]->[10,10,10,10,10,20,30]
    vec.reserve(100);  // [10,10,10,10,10,20,30]->[10,10,10,10,10,20,30]
    cout<<"Size = "<<vec.size()<<" Capacity = "<<vec.capacity()<<endl;
    
    for(int i=0; i<vec.size(); i++){
        cout<<vec.at(i)<<" ";
    }
}
