//C program to print Hollow Mirrored Right Triangle Star Pattern

#include<stdio.h>
int main(){
    int n;

    //Input number of rows by the user
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //Iterate over row
    for(int i=1; i<=n; i++){

        //Print trailing spaces
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }

        /*
        Print star for
        first column (j==1)
        last column (j==i)
        last row (i==n)
        */
        for(int j=1; j<=i; j++){
            if(j==1 || j==i || i==n)
                printf("*");
            else
                printf(" ");
        }

        //Move to next line
        printf("\n");
    }


    return 0;
}
