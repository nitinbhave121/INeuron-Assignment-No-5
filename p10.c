
// Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    printf("%d ",i*n);
    return 0;
}

/*
Enter the value of n
5
5 10 15 20 25 30 35 40 45 50
*/