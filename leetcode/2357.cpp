#include "iostream"
#include "vector"
#include "string"
#include "stack"
#include "unordered_map"
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            if(num!=0) m[num]++;
        }
        return m.size();
    }
};

int main(){
    Solution s;
    vector<int> nums ={1,5,0,3,5};
    cout<<s.minimumOperations(nums);
    return 0;
}