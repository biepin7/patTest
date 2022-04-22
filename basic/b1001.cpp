#include<iostream>
using namespace std;

int n, num;

int main() {
	cin >> n;
	while (n != 1) {
		if (n % 2 == 0) n /= 2;
		else n = (3 * n + 1) / 2;
		num++;
	}
	cout << num;
}