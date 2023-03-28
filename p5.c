

// . Write a program to print the first N odd natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2==1)
        printf("%d ",i);
    }
    return 0;

}

/*
Enter the value of n
10
19 17 15 13 11 9 7 5 3 1 
*/