#include<stdio.h>
void merge(int a[],int b[],int n,int m)
{
int i=0;int j=0;int k=0;int c[20];
while((i<n)&&(j<m))
{
if(a[i]<b[j])
{
 c[k]=a[i];
 k++;
 i++;
}
else if(a[i]>b[j])
{
 c[k]=b[j];
 b++;
 k++;
}
while(i<n)
{
 c[k]=a[i];
 i++;
 k++;
}
while(j<m)
{
c[k]=b[j];
j++;
k++;
}
printf("the merged array is= ");
for(k=0;k<n+m;k++)
 printf("\t %d",c[k]);
}
}
int main()
{
int a[10],b[10],i,j,n,m;
printf("enter the size of array 1=");
scanf("%d",&n);
printf("enter the elements of first array in sorted manner=");
for(i=0;i<n;i++)
{
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
}
printf("enter the size of second array=");
scanf("%d",&m);
printf("enter the elements of array in sorted manner=");
for(j=0;j<m;j++)
{
  printf("b[%d]=",j);
  scanf("%d",&b[j]);
}
merge(a,b,n,m);
return 0;
}
