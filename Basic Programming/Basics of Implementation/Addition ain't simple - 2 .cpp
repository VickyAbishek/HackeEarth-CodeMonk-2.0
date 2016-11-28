#include<iostream>

using namespace std;
int main()
{
	int n;
	std::cin >> n;
	//n = 1;
	while(n--)
	{
		std::string str;
		//str = "bgxbjifjrx";
		std::cin >> str;
		int l = str.length();
		int arr[l];
		int k = l-1;
		for (int i = 0; i < l; i++)
		{
			int c1 = str.at(i) - 96;
			int c2 = str.at(k-i) - 96;
			int res = c1 + c2;
			if( res > 26 )
			{
				while( res > 26 )
					res = res-26;
			}
			else
				res = res%27;
			arr[i] = res;
		//	cout << "res" << res << endl;
		}
		for (int i = 0; i < l; i++)
		{
			cout << (char)(arr[i]+96) ;
		}
		cout << endl;
	}
	return 0;
}

