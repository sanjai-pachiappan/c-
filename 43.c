//43 Bubble sort
#include <stdio.h>
int main(){ int a[3]={3,1,2},i,j,t;
for(i=0;i<3;i++) for(j=0;j<2;j++)
if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
for(i=0;i<3;i++) printf("%d ",a[i]); }