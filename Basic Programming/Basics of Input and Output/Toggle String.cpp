#include<bits/stdc++.h>
using namespace std;

int main()
{
	string text;
	cin >> text;
	int n = text.length();
	for( int i=0; i<n; i++ )
	{
		if( text.at(i) < 91 )
			text.at(i) += 32;
		else
			text.at(i) -= 32;
	}
	cout << text << endl;
	return 0;
}