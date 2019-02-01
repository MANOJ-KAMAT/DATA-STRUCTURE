#include<iostream>
#include<conio.h>
using namespace std;

int bsearch(int a[], int size, int f)
{
    int beg=0, last=size-1, mid;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(a[mid]==f)
        {
            cout<<"The element is present at "<<mid+1<<" \n";         
		 return 1;
        }
        else if(f<a[mid])
        last=mid-1;
        else
            beg=mid+1;
    }
    return 0;
}

int main()
{
    int a[10],l,i,b;
    cout<<"\n enter the size of array";
    cin>>l;
    for(i=0; i<l; i++)
    {
        cout<<"\n enter number";
        cin>>a[i];
    }
    cout<<"\n enter the no. to be searched";
    cin>>b;
    int c;

    b=bsearch(a,l,b);
    if(b==1)
    {
        cout<<"No. is present";
    }
        else
        {
            cout<<"\n no. not present";
        }
}
