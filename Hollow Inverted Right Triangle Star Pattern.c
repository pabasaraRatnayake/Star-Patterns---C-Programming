//C program to print Hollow Inverted Right Triangle Pattern

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i-1; j++){
            if(i==1 || j==1 || j==n-i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
