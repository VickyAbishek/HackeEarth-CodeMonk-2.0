#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str)
{
	int n = str.length();
	for(int i=0; i<n/2; i++)
	{
		if( str.at(i) !=  str.at(n-i-1) )
		return false;
	}
	return true;
}

int main()
{
	string text;
	cin >> text;
	if( checkPalindrome(text) )
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}