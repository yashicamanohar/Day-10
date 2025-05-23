#include <stdio.h>
int main()
{
    int a=7;
    int * p,q;
    q=p;
    p=&a;
    *q=1
   
    printf("%d",a);
}