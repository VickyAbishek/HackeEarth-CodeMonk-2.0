#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
typedef long long int ll;
int main()
{
	int n;// = 832;
	cin >> n;
	string str;// = "qbextqbyiehhjotqrpsmkfnqoxckbwofhlsxmqtubgmgckveaswkxwtyoxohkjlsquineajhxjjmsymxhjuyhehcwufjaxnvcesvrfxmjlfacxipjaidbssrkukhlrbslomvhocydnmvakscwnmotsqgohqvfinfklbgjntpygfyiemnrwvkekuivpcxxpaesmwfdwjrvwyowkrfnxsuwsryhwmiqvpwvkfwmqtrrwpgsvfkecrmlylthsugoncdfkkdlorfvguvpsvabfaabkwxfpkbsbwwfaegohriertrwqucdwtefhltvmjwnoombgsyiywfibwdpyyflkhumpigtixqyupecakatpeiluuwfleblfagmicjfjvgoqkgifmoyajqjwsnebmmplrkwxiyccyqkiqhesuhqtgtslieafiojiewxtumrjkkwhharsvwvhkuhtqwwctbdphekkdqgqsuelxngugkephpysyrqjqfkplmrvtehmixpnqjpakmdubchntwplhrqmkjdwesbxdeoiywvjatfxktmcgxdiolaufhryajyruwpgpocjwqspphrwyepnwyetigtugultjsmxvmqxuhxretjnotvgaivomgbxqsfobprkaxymtoljbkgapcexutbqlcapevhaxxyuwaugnoltjpvdspllplbtjgdxdjuwxkvbknitmonjgaqvulcwfayqygyocbosbbhkkksjxdrxiyfrrhxfgayoppmqomjmilxmxhpahvghxddragfdoeqlyysoxybnftfgijkwmdvvnydtxpohdvrvfqfmnhnlocficn";
	cin >> str;
	int arr[100] = {0};
	for(int i=0; i<n; i++)
	{
		int x = str.at(i) - 32; 
		++arr[x];
	}
	
	// letters count has been added to arr[]
	string he = "HACKEREARTH";
	int hel = he.length();
	int count = -1;
	int cnd = true;
	while(cnd)
	{
		++count;
		for (int i = 0; i < hel ; i++)
		{
			int n = he.at(i);
			if(  arr[n] == 0 )
				cnd = false;
			else
				--arr[n];
		}
	}
	cout << count << endl;
	
	return 0;
}
