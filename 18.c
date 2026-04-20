//18 Prime
#include <stdio.h>
int main(){ int n=7,i,f=0; for(i=2;i<n;i++) if(n%i==0)f=1;
printf(f?"Not Prime":"Prime"); }