#include "iostream"
#include "vector"
#include "string"
#include "stack"
#include "unordered_set"
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int x:nums) {
            if (s.find(x)!=s.end()) return true;
            s.insert(x);
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int> v = {1,2,3,3};
    cout<<s.containsDuplicate(v);
    return 0;
}

