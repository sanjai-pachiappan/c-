//19 Reverse Number
#include <stdio.h>
int main(){ int n=123,r=0; while(n){ r=r*10+n%10;n/=10;} printf("%d",r); }