//48 File write
#include <stdio.h>
int main(){ FILE *f=fopen("a.txt","w"); fprintf(f,"Hello"); fclose(f); }