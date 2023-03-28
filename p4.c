

// . Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        
        if(i%2==1)
        printf("%d ",i);
    }
    return 0;

}

/*
Enter the value of n
10
1 3 5 7 9 11 13 15 17 19 
*/