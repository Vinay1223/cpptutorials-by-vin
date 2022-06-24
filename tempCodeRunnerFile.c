#include<stdio.h>
int main(void)
{
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        printf("#");
        printf("\n");
    }
}