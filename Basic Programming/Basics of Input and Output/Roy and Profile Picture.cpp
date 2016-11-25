#include<bits/stdc++.h>
using namespace std;

void photoValidation( int x, int y, int l)
{
	if( x<l || y<l )
		cout << "UPLOAD ANOTHER" << endl;
	else if ( x>=l && y>=l )
	{
		if( x==y )
			cout << "ACCEPTED" << endl;
		else
			cout << "CROP IT" << endl;
	}
}

int main()
{
	int l,n;
	cin >> l;
	cin >> n;
	int w,h;
	while(n--)
	{
		cin >> w >> h;
		photoValidation(w,h,l);
	}
	return 0;
}