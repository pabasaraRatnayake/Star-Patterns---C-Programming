//C program to print Hollow Pyramid Star Pattern

#include<stdio.h>
int main(){
    int n;

    //Input the number of rows
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //Iterate over rows
    for(int i=1; i<=n; i++){

        //Print trailing spaces
        for(int j=1; j<=n-i; j++)
            printf(" ");

        /*Print 2*i-1 number of stars for
        first column (j==1) or
        last column (j==2*i-1) or
        last row (i==1)
        */
        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1 || i==n)
                printf("*");
            else
                printf(" ");
        }

        //Move to next line
        printf("\n");
    }

    return 0;
}
