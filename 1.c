/*Test case
input
india
delhi
1498.871

output
The capital of India is Delhi and it's GDP is 1498.87*/




#include<stdio.h>
#include <stdlib.h>

int main()
{
    char c[10],s[10];
    float i;
    scanf("%s %s %f",&c,&s,&i);
    printf("The capital of %s is %s and it's GDP is %.2f",&c,&s,i);


}
