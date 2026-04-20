//20 Palindrome Number
#include <stdio.h>
int main(){ int n=121,t=n,r=0; while(n){ r=r*10+n%10;n/=10;}
printf(t==r?"Palindrome":"Not"); }