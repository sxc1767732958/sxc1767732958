#include <bits/stdc++.h>

using namespace std;
int main() {
	unsigned long long t = 0;
	cin >> t;
	while (t--)
	{
		unsigned long long x  = 0;
		cin >> x;
		unsigned long long sum = 0;
		if (x % 233 != 0) {
			cout << "-1" << endl;
		}
		else {
			sum = x / 233;
			int res = 0;
			while (sum)
			{
				unsigned long long te = sum % 10;
				res += (int)te;
				sum /= 10;
			}
			cout << res << endl;
		}
	}
	return 0;
}
