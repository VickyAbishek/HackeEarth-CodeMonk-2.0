#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	cin >> n;
	long arr[n];
	long res[3] = {0};
	for(long i=0; i<n; i++)
	{
		cin >> arr[i];
		res[i%3] +=  arr[i];
	}
	cout << res[0] << " " << res[1] << " " << res[2] << endl;
	return 0;
}
