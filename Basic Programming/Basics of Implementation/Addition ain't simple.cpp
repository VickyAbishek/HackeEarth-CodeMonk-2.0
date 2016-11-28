#include<iostream>

using namespace std;
int main()
{
	int n;
	//std::cin >> n;
	n = 1;
	while(n--)
	{
		std::string str;
		//std::cin >> str;
		str = "bgxbjifjrx";
		int n = str.length();
		int k = n-1;
		std::string res = "";
		for (int i = 0; i < n; i++)
		{
			int c1 	 = str.at(i) ;
			int c2 	 = str.at(k-i) ;
			cout <<"c1:" << c1 << ":" << c2 << endl;
			int diff = (c2-96)+(c1-96) ;
			cout <<"c1:" << c1 << ":" << c2 << endl;
			cout << "diff:" <<  diff << endl;
			diff = (diff%26);// + 1;
			diff += 96;
			cout << "diff:" <<  diff << endl;
			cout << (char)diff << endl;			
			res += (char)diff;
		}
		//cout << "outside" << endl;
		std::cout <<  res << std::endl ;
	}
	return 0;
}
