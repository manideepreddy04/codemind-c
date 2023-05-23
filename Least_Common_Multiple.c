#include <stdio.h>

int main() {
    int a, b, max,m;
    scanf("%d %d", &a, &b);
    if(a>b){
    max=a;
    }
    else{
    max=b;}
    for (int i=max;i<=a*b;i+=max)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}