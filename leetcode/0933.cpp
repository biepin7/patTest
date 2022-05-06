#include "iostream"
#include "queue"
using namespace std;

class RecentCounter {
    queue<int> q;
public:
    // 初始化计数器，请求数为 0
    RecentCounter() {}

    // 时间 t 添加一个新请求，其中 t 表示以毫秒为单位的某个时间，并返回过去 3000 毫秒内发生的所有请求数（包括新请求）。
    // 确切地说，返回在 [t-3000, t] 内发生的请求数。

    int ping(int t) {
        q.push(t);
        while (q.front()<t-3000){
            q.pop();
        }
        return q.size();
    }
};

int main(){
    RecentCounter* obj = new RecentCounter();
    int param_1 = obj->ping(1);
    cout<<param_1<<endl;

    int param_2 = obj->ping(4);
    cout<<param_2<<endl;

    int param_3 = obj->ping(3002);
    cout<<param_3<<endl;

    return 0;
}