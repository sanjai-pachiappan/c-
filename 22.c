//22 Armstrong
#include <stdio.h>
int main(){ int n=153,t=n,s=0,r;
while(n){ r=n%10;s+=r*r*r;n/=10;}
printf(t==s?"Yes":"No"); }