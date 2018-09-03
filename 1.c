#include <stdio.h>
int main() 
{
	int a=0;
    int b=1;
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum = sum+b;
        int t = b;
        b = b+a;
        a = t;
    }
    printf("%d",sum);
}