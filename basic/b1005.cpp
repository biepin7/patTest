#include "iostream"
#include "map"
using namespace std;

int num;
map<int,int,greater<int>> m;

int main(){
    cin>>num;
    while(num--){
        int n;
        cin>>n;
        m[n]++;
        while (n != 1) {
            if (n % 2 == 0) {n /= 2;}
            else n = (3 * n + 1) / 2;
            m[n]++;
        }
    }
    int flag = 0;
    for (auto &[k, v] : m) {
        if(v==1){
            if(flag == 1) cout<<" ";
            cout<<k;
            flag = 1;
        }
    }
    cout<<endl;
    return 0;
}