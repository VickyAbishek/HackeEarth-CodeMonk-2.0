#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	long res = 1;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		res = ( res * arr[i] ) % m;
	}
	cout << res << endl;
	return 0;
}
