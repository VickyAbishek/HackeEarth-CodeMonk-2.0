#include<iostream>
using namespace std;

int main()
{
	string no;
	cin >> no;
	int arr[10] = { 0 };
	int length=no.length();
	int cur_no;
	for( int i=0; i<length; i++ )
	{
		cur_no = no.at(i) - '0';
		++arr[cur_no];
	}
	for( int i=0; i<10; i++ )
		cout << i << " " << arr[i] << endl;
	return 0;
}
