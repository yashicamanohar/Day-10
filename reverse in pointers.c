#include<stdio.h>
void reverse (int arr[],int n){
    int start=0,end=n-1;
    while(end>start){
        int t=arr[start];
        arr[start];
        arr[end]=t;
        start++;
        end--;
    }
}
int main()
{
    int s[]={1,2,3,4,5,6};
    int*str=s;
    int n=sizeof(s)/sizeof(s[0]);
    reverse(s,n);
    for(int i=0;i<n;i++){
        printf("%d",str);
        str++;
    }
   
}