/*
input:
3
output:
1
1 2
1 2 3
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,c,b;
    scanf("%d",&a);
    for(b=0;b<=a;b++){
        for(c=1;c<=b;c++){
            printf("%d ",c);
        }
        printf("\n");
    }
}
