#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i = 0; i< nums.size(); i++){
                cout<<"index : "<<i<<","<<nums[i]<<endl;
            }
            return {1,2};
        }
    };

    int main(){
        Solution s;
        vector<int> input = {2,7,11,15};
        int target = 9;
        vector<int> result = s.twoSum(input, target);
        for (int i = 0; i < result.size(); i++){
            cout<<result[i]<<endl;
        }
        return 0;
        }
    