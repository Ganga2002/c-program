#include<stdio.h>
#include<stdlib.h>
void menu();
void insert();
void delete();
void search();
void display();
void sort();
int choice,i,j,a[20],b[10],s;
void main()
{
printf("\nenter the size of array:");
scanf("%d",&s);
printf("\nenter the elements of array:");
for(i=0;i<s;i++)
{
scanf("\t %d",&a[i]);
}
menu();
}
void menu()
{
printf("\n 1.insert");
printf("\n 2.delete");
printf("\n 3.sort");
printf("\n 4.search");
printf("\n 5.display");
printf("\n 6.exit");
printf("\n enter your choice;");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
 break;
case 2:delete();
 break;
case 3:sort();
 break;
case 4:search();
 break;
case 5:display();
 break;
case 6:
 exit(1);
}
}
void search()
{
int clc,loc;
printf("enter the element to be searched:");
scanf("%d",&clc);
printf("element found at:");
for(i=0;i<s;i++)
{
if(clc==a[i])
 printf("%d",i+1);
}
menu();
}
void sort()
{
printf("\ncurrent array:");
for(i=0;i<s;i++)
 printf("\t %d",a[i]);
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
 if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
printf("\nthe sorted array:");
for(i=0;i<s;i++)
 printf("\t %d",a[i]);
menu();
}
void insert()
{
int loc,clc;
printf("\n enter the location:");
scanf("%d",&loc);
printf("enter the element to be i:");
scanf("%d",&clc);
for(i=s;i>loc-1;i--)
 a[i]=a[i-1];
 a[loc-1]=clc;
printf("\n element inserted");
printf("\n array after insertion is:");
s++;
for(i=0;i<s;i++)
 printf("\t %d",a[i]);
menu();
}
void delete()
{
int loc;
printf("\nenter location:");
scanf("%d",&loc);
for(i=loc-1;i<s-1;i++)
{
a[i]=a[i+1];
}
printf("\n element deleted");
printf("\n new array after deletion:");
s--;
for(i=0;i<s;i++)
 printf("\t %d",a[i]);
menu();
}
void display()
{
int i;
if(s==0)
{
printf("no elements to display");
return;
}
printf("array elements are:");
for(i=0;i<s;i++)
 printf("\t %d",a[i]);
menu();
}

