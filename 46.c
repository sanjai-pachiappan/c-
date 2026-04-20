//46 Function factorial
#include <stdio.h>
int f(int n){ return n==1?1:n*f(n-1); }
int main(){ printf("%d",f(5)); }