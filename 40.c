//40 Count vowels
#include <stdio.h>
int main(){ char s[]="hello"; int i,c=0;
for(i=0;s[i];i++) if(strchr("aeiou",s[i])) c++; printf("%d",c); }