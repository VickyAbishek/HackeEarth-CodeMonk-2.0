#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int no[100] = { 0 };	
	int min=100,max=0;
	for( int i=0; i<n; i++ )
	{
		cin >> arr[i];
		++no[ arr[i] ];
		if( arr[i] > max )
			max = arr[i];
		if ( arr[i] < min )
			min = arr[i];
	}
	for( int i=min; i<=max; i++ )
	{
		if ( no[i] == 0 )
			{
				cout << "NO" << endl;
				return 0;
			}
		else 
			continue;
	}
	cout << "YES" << endl;
	return 0;
}
