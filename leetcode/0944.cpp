class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;

        // 先j后i/先列后行/按列遍历
        for (int j = 0; j < strs[0].size(); ++j) {
            for (int i = 1; i < strs.size(); ++i) {
                if (strs[i - 1][j] > strs[i][j]) {
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};

