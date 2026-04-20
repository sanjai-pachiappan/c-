//47 Function prime
#include <stdio.h>
int p(int n){ int i; for(i=2;i<n;i++) if(n%i==0) return 0; return 1; }
int main(){ printf(p(7)?"Prime":"Not"); }