#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << m << endl;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int res = 1;
	for(int i=0;i<n;i++)
		res = (res * arr[i]) % m;
	cout << res << endl;
	return 0;
}
