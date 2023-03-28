

//. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",i);
    return 0;
}

/*
Enter the value of n
5
1 2 3 4 5 
*/