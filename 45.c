//45 Matrix add
#include <stdio.h>
int main(){ int a[2][2]={{1,2},{3,4}},b[2][2]={{1,1},{1,1}},i,j;
for(i=0;i<2;i++){ for(j=0;j<2;j++) printf("%d ",a[i][j]+b[i][j]); printf("\n");}}