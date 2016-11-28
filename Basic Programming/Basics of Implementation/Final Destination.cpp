#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int l = str.length();
	int x=0,y=0;
	for (int i = 0; i < l; i++)
	{
		if ( str.at(i) == 'L' )
			--x;
		else if ( str.at(i) == 'R' )
			++x;
		else if ( str.at(i) == 'D' )
			--y;
		else if ( str.at(i) == 'U' )
			++y;
	}
	cout << x << " " << y << endl;
	return 0;
}
