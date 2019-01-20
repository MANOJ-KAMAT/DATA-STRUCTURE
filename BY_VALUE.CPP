#include<conio.h>
#include<iostream.h>
 // pointer (call by value)
int swap(int x, int y);
void main()
{
 int a,b;
 clrscr();
 cout<<"\n Enter the values to a & b:";
 cin>>a>>b;
 swap(a,b);
 getch();
}
 int swap(int x, int y)
 {
  int temp;
  temp=x;
  x=y;
  y=temp;
  cout<<" \n Values after swaping is "<<x<<"\t"<<y;
  return 0;
  }
