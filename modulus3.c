#include<stdio.h>
#include<conio.h>
void main()
{
 int a=347,r,q;
// r=a%10;//o/p=7
r=a%100;//o/p=47
//r=a%1000;//o/p=347
//r=a%10000;//o/p=347
//q=a/10;//0/p=34
q=a/100;//o/p=3
//q=a/1000;//o/p=0
//q=a/10000;//0/p=0
 printf("%d\n",r);
 printf("%d\n",q);
 getch();
}
