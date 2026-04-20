//42 Palindrome string
#include <stdio.h>
#include <string.h>
int main(){ char s[]="madam"; int i,f=1,n=strlen(s);
for(i=0;i<n/2;i++) if(s[i]!=s[n-i-1])f=0;
printf(f?"Yes":"No"); }