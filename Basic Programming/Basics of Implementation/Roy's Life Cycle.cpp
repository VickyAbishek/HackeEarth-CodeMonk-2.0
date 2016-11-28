#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = n;
	int arr[n] ; 
	cout << "array" << endl;
	for (int i = 0; i < n; i++)
	{
		cout < arr[i] << endl;
	}
	
	for (int i = 0; i < n; i++)
	{
		arr[n] = 0;
	}
	//arr[k] = {0};
	//cout << "arr" << arr[0] << endl;
	int y = 0;
	int maxy = 0;
	while(n--)
	{
		
		string s;
		cin >> s;
		int l = s.length();
		int pv=0;
		for (int i = 0; i < l; i++)
		{
			if ( s.at(i) == 'C' )
			{
					++y;
					++arr[n];
			}
			else
			{
				if ( arr[n] > pv )
					pv = arr[n];
				arr[n] = 0;
				
				if ( maxy < y )
					maxy = y;
				y = 0;
			}
		}
		arr[n] = pv;
	}
	//SSSSSEEESSCCCCCCCS
	int x = 0 ;
	for (int i = (k-1); i >=0 ; i--)
	{
		if ( arr[i] > x )
			x = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	
	cout << x << " " << maxy << endl;
	return 0;
}
