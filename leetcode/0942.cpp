#include "iostream"
#include "vector"
#include "string"
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
//        int max = s.size();
//        int min = 0;
        // 优化行数
        int min=0,max=s.size();
        vector<int> res;
        for (auto c:s) {
//            if(c=='I'){
//                res.push_back(min);
//                min++;
//            }
//            else {
//                res.push_back(max);
//                max--;
//            }
            //优化行数，优化速度
            if(c=='I') res.emplace_back(min++);
            else res.emplace_back(max--);
        }
        res.push_back(max);
        return res;
    }
};

int main(){
    Solution s;
    string str1 = "IDID";
    string str2 = "III";
    string str3 = "DDI";

    for (auto i : s.diStringMatch(str1))
        std::cout << i << ' ';
    cout<<endl;

    for (auto i : s.diStringMatch(str2))
        std::cout << i << ' ';
    cout<<endl;

    for (auto i : s.diStringMatch(str3))
        std::cout << i << ' ';
    cout<<endl;
}