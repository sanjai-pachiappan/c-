//26 GCD
#include <stdio.h>
int main(){ int a=6,b=9,i,g; for(i=1;i<=a&&i<=b;i++) if(a%i==0&&b%i==0)g=i;
printf("%d",g); }