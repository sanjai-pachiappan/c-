//49 File read
#include <stdio.h>
int main(){ char s[20]; FILE *f=fopen("a.txt","r");
fgets(s,20,f); printf("%s",s); fclose(f); }