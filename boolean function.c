#include <stdio.h>
#include <stdbool.h>
bool perfect(int x){
    int sum=0;
    for(int i=1;i<x;i++){
        if(x%i==0) sum=sum+i;
    }
    return sum==x;
}
int main()
{
    int x;
    scanf("%d",&x);
    bool a=perfect(x);
    printf("%s",a?"true":"false");
    if(a)printf("true");
    else printf("false");
}
