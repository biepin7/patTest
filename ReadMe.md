# Clion 刷题的小项目

basic :pta 的乙级题目
leetcode : leetcode 的题目

可视化调试
https://pythontutor.com/visualize.html#mode=edit

# 刷题的小经验

## 矩阵遍历

由 0944 谈列遍历
```c++
for (int j = 0; j < strs[0].size(); ++j) {
            for (int i = 1; i < strs.size(); ++i) {
                if (strs[i - 1][j] > strs[i][j]) {
                    res++;
                    break;
                }
            }
        }
```
为了减少心智负担， 还是行 i 列 j 容易记住

## STL && 常用库函数

## vector


## algorithm

### is_sorted()

比如 2124
```c++
is_sorted(begin(s), end(s));
```