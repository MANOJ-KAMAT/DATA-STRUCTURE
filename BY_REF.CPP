#include<iostream.h>
#include<conio.h>
// pinter call by referance
int swap(int *x,int *y);
void main()
{
 int a,b;
 clrscr();
 cout<<"\n Enter the values :";
 cin>>a>>b;
 swap(&a,&b);
 getch();
}

int swap(int *x, int *y)
{
 int *temp;
 *temp=*x;
 *x=*y;
 *y=*temp;
 cout<<"\n Value After swaping :"<<*x<<"\n"<<*y;
 return 0;
 }
