#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,temp,a[100];

	cout<<"enter value you want to insert";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n data";
		cin>>a[i];
	}
	for(i=0; i<n; i++)
	for(j=0; j<n-i-1; j++)
	{
		 if(a[j]>a[j+1])
		 {
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		 }
	}
	cout<<"\n bubble sort:";
	for(i=0;i<n;++i)
	{
		cout<<a[i];
	}

}

