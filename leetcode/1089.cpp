#include "iostream"
#include "vector"
#include "string"
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        for(i;i<j;++i){
            if(arr[i] == 0) j--;
        }

        int k = arr.size()-1;
        if(arr[j])

        for(k;k>0;--k){
            arr[k] = arr[j];
            if(arr[j] == 0) {
                arr[--k] = 0;
            }
            j--;
        }
    }
};

int main(){
    vector<int> arr = {0,1,9,2,6,0,0,4,1,0};
    //[0,0,1,9,2,6,0,0,0,0]
    Solution s;
    s.duplicateZeros(arr);
    for (int i : arr) cout<<i<<" ";
    return 0;
}