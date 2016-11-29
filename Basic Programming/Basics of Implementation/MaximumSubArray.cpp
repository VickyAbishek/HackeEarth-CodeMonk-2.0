#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	
	int x,y;
	for (int i = 0; i < n; i++)
	{
		x = x + arr[i];
		if ( x < 0 )
			x = 0;
		else if ( y < x )
			y = x;
	}
	cout << y << endl;
	return 0;
}
