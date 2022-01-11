#include<iostream>

using namespace std;


string reverse(string s)
{
	string rev="";
	for(int i=s.size();i>0;i--)
	{
		rev += s[i];
	}

	return rev;
}

int main()
{
	string s;
	cout<<"Enter a String -: ";
	cin>>s;
	string rev = reverse(s);
	cout<<rev<<endl;
}