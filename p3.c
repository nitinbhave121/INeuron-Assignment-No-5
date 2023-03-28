

//  Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    printf("%d ",i);
    return 0;
}

/*
Enter the value of n

5
5 4 3 2 1 
*/