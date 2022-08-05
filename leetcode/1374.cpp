#include "iostream"
#include "vector"
#include "string"
#include "stack"
using namespace std;

    class Solution {
    public:
        string generateTheString(int n) {
            if(n%2) return string(n,'a');
            else return string(n-1,'a')+'b';
        }
    };

int main(){
    Solution s;
    cout<<s.generateTheString(3)<<endl;
    cout<<s.generateTheString(4)<<endl;
    return 0;
}