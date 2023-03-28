
// Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2==0)
        printf("%d ",i);
    }
    return 0;

}

/*
Enter the value of n
10
20 18 16 14 12 10 8 6 4 2
*/