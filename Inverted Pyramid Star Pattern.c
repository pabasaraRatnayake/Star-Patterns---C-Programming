//C program to print Inverted Pyramid Star Pattern

#include<stdio.h>
int main(){
    int n;

    //Input number of rows by user
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //Iterate over row
    for(int i=1; i<=n; i++){

        //Print trailing spaces
        for(int j=1; j<=i-1; j++)
            printf(" ");

        //print 2*(n-1)-1 number of stars
        for(int j=1; j<=2*(n-i)+1; j++)
            printf("*");

        //Move to next line
        printf("\n");
    }

    return 0;
}
