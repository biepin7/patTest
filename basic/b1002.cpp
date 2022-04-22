#include<iostream>
#include<string>
using namespace std;

string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi","ba", "jiu"};

int sum;
string n;

int main()
{
	cin >> n;
	for(auto s : n){
        sum += (s-'0');
    }
    string num = to_string(sum);

    // 满足输出格式要求
    for (int i = 0; i < num.length(); i++) {
        if (i != 0) cout << " ";
        cout << str[num[i] - '0'];
    }
    return 0;
}