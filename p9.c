

//Write a program to print cubes of the first N natural numbers

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",i*i*i);
    return 0;
}

/*
Enter the value of n
10
1 8 27 64 125 216 343 512 729 1000
*/