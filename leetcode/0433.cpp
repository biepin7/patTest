#include "iostream"
#include "queue"
#include "string"
#include "vector"
#include <algorithm>

using namespace std;

class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        int res=0;

        if (find(bank.begin(), bank.end(), end) == bank.end())
            return -1;

//        for(int i=0;i<8;i++){
//            if(start[i]!=end[i]) res++;
//        }



        return res;
    }
};

int main(){
    Solution s;
    string start ="AACCTTGG";
    string end="AATTCCGG";
    vector<string> bank ={"AATTCCGG","AACCTGGG","AACCCCGG","AACCTACC"};

    cout<<s.minMutation(start,end,bank)<<endl;
}