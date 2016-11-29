#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int n = str.length();
	int res = 0;
	for (int i = 0; i < n; i++)
		res += (str.at(i) - 96);
	cout << res << endl;
	return 0;
}
