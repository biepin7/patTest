#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int xy=0,xz=0,yz=0;
        for (int i = 0; i < grid.size() ; ++i) {
            int max_row_for_xz=0,max_col_for_yz=0;
            for (int j = 0; j <grid[0].size() ; ++j) {
                // xy : grid 的非零数个数
                xy+= grid[i][j]?1:0;
                max_row_for_xz = max(max_row_for_xz,grid[i][j]);
                max_col_for_yz = max(max_col_for_yz,grid[j][i]);
            }
            // xz：每行最大数之和
            xz+=max_row_for_xz;
            // yz：每列最大数之和
            yz+=max_col_for_yz;
        }
        return xy+xz+yz;
    }
};

int main(){
    Solution s;
    vector<vector<int>> grid = {{1,2},{3,4}};
    cout<<s.projectionArea(grid)<<endl;
}