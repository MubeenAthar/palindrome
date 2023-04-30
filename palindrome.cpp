#include<iostream>
using namespace std;
void palindrome(string arr, int lenght);
int main()
{
	string array;
//	int count=0;
	cout<<"enter string "<<endl;
	cin>>array;
	
//cout<<	array.length();
	
	palindrome(array,array.length());
	return 0;
}
void palindrome(string arr, int lenght)
{
	int amp =0;
	for(int i=0;i<lenght;i++)
	{
		if(arr[i]!=arr[lenght-i-1])
		{
		amp=1;
		break;
		}	
	}
	if(amp)
	{
		cout<< arr <<" is a not palindrome"<<endl;
	}
	else
		{
			cout << arr <<" is a palindrome"<<endl;
		}
}
