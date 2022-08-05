#include "iostream"
#include "vector"
#include "string"
#include "stack"
#include "queue"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxLevelSum(TreeNode* root) { // 层序遍历

        // 初始化队列
        queue<TreeNode*> bfs;
        bfs.push(root);

        int max_size =  INT_MIN ;
        int res = 1;
        int level = 1;

        while (!bfs.empty()){
            int size_of_level = bfs.size();
            int sum_of_level = 0;

            // 进行层序遍历
            while (size_of_level --){
                TreeNode* add = bfs.front();
                sum_of_level += add->val;
                bfs.pop();
                if(add->left) bfs.push(add->left);
                if(add->right) bfs.push(add->right);
            }

            // 若是 max 有变化， 更新 res 和 max
            if( sum_of_level > max_size ) {
                res = level;
                max_size = sum_of_level;
            }
            level++;
        }
        return res;
    }
};