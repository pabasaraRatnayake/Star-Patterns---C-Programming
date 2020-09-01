//C program to print hollow square with diagonal
#include<stdio.h>
int main(){
    int n;

    //Input the length of the square
    printf("Enter the length of hollow square with diagonal :");
    scanf("%d",&n);

    //Iterate over each row
    for(int i=1; i<=n; i++){
        //Iterate over each column
        for(int j=1; j<=n; j++){

            /*
            print * where,
            first row (i==1) or
            last row (i==n) or
            first column (j==1) or
            last column (j==n) or
            diagonal 1 (i==j) or
            diagonal 2 (i+j-1==n)
            */
            if(i==1 || i==n || j==1 || j==n || i==j || i+j-1==n)
                printf("*");
            else
                printf(" ");
        }
        //Go to next line
        printf("\n");
    }

    return 0;
}
