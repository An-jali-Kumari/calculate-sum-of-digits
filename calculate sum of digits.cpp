#include<iostream>
using namespace std;
int main()
{
	int num,temp,sum=0,r,q;
	cout<<"Enter a number to add its Digits";
	cin>>num;
	temp=num;
	while(temp>0)
	{
		q=temp/10;
		r=temp%10;
		sum=sum+r;
		temp=q;
	}
	cout<<"\n The sum of digits of given number"<<num<<"  "<<sum;
}
