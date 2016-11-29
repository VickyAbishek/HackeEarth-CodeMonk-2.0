#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
typedef long long int ll;
int main()
{
	int n; cin >> n;
	int arr[n];
	string s; cin >> s; int sl = s.length();
	int count=0;
	while(1)
	{
		for (int i = 0; i < sl ; i++)
		{	
			
			if( count==(n-1) )
			{
				pw();
				return 0;
			}
		}
	}
	return 0;
}

