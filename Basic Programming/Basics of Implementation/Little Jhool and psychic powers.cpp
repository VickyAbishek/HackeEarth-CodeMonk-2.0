	#include<bits/stdc++.h>
	using namespace std;

	int main()
	{
		string bno;
		cin >> bno;
		int l = bno.length();
		int zcount=0 , oncount=0;
		//int pv;
		for(int i=0; i<l; i++)
		{
			if( bno.at(i) == '0' )
			{
					oncount=0;
					++zcount;
					
			} 
			else if ( bno.at(i) == '1'  )
			{	
					zcount=0;
					++oncount;
			}
			//pv = bno.at(i);
			if( oncount==6 || zcount==6 )
			{
				cout << "Sorry, sorry!" << endl;
				return 0;
			}
		}
		cout << "Good luck!" << endl;
		return 0;
	}
