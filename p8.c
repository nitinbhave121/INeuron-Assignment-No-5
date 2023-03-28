
// Write a program to print squares of the first N natural numbers

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",i*i);
    return 0;
}

/*
Enter the value of n
10
1 4 9 16 25 36 49 64 81 100
*/