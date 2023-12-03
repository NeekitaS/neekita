// first program
#include<iostream>
using namespace std;
#inlcude<string.h>
int main()
{
  char l;
	cin>>l;
	if(isupper(l))
	cout<<"1";
	else if (islower(l))
	cout<<"0";
	else 
	cout<<"-1";
	return 0;
}
