#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	string rej[n];
	for (int i = 0; i < n; i++)
		cin >> rej[i];
		
	int k; cin >> k;
	string sentence[k];
	
	for (int i = 0; i < k; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < n; j++)
		{
			if ( str == rej[j] )
				sentence[i] = "x";
		}
		if ( sentence[i] == "" )
			sentence[i] = str.at(0) - 32;
	}
	bool dot = true;
	for (int i = 0; i < k; i++)
	{
		if( sentence[i] == "x" )
			continue;
		if (  dot && sentence[i] != "x" )
		{
			cout << sentence[i];
			dot = false;
		}
		else
			cout << "." << sentence[i] ;
	}
	return 0;
}
