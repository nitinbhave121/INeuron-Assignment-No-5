
// Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
    return 0;

}

/*
Enter the value of n
10
2 4 6 8 10 12 14 16 18 20
*/