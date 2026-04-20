//32 Largest array
#include <stdio.h>
int main(){ int a[3]={1,5,2},i,max=a[0];
for(i=1;i<3;i++) if(a[i]>max)max=a[i]; printf("%d",max); }