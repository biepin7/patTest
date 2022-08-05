#include "iostream"
#include "vector"
#include "string"
#include "stack"
#include "unordered_map"
#include "algorithm"
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum_of_nums = 0;
        for(int num:nums) sum_of_nums+=num;
        sort(nums.begin(), nums.end(),greater<int>()); // 逆序排序
        int curr = 0;
        vector<int> res;
        for(int num:nums){
            curr += num;
            res.emplace_back(num);
            if(sum_of_nums < 2*curr) break;
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums = {4,3,10,9,8};
    vector<int> res = s.minSubsequence(nums);
    for(int x:res){
        cout<<x<<endl;
    }
    return 0;
}