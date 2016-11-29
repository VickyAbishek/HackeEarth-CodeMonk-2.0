#include<bits/stdc++.h>
using namespace std;

bool checkPal ( string str );

int main()
{
	int n; cin >> n;
	while(n--)
	{
		string str; cin >> str;
		long res = 1;
		if ( checkPal(str) )
			cout << "Palindrome" << endl;
		else
		{
			int n = str.length();
			for (int i = 0; i < n; i++)
				res *= ( str.at(i) - 96 );	
			cout << res << endl;
		}
	}
	return 0;
}


bool checkPal ( string str )
{
	int n = str.length();
	int k = n-1;
	for (int i = 0; i < n/2; i++,k--)
	{
		if ( str.at(i) != str.at(k) )
			return false;
	}
	return true;
	return true;
}
