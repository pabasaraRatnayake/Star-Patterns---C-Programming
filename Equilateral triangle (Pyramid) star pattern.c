//C program to print Equilateral triangle (Pyramid) star pattern

#include<stdio.h>
int main(){
    int n;

    //Input the number of rows by user
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //Iterate over rows
    for(int i=1; i<=n; i++){

        //Print trailing spaces
        for(int j=1; j<=n-i; j++)
            printf(" ");

        //print 2*i-1 number of stars
        for(int j=1; j<=2*i-1; j++)
            printf("*");

        //Move to next line
        printf("\n");
    }


    return 0;
}
