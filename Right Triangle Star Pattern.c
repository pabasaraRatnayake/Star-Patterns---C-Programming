//C program to print a Right Triangle Star Pattern

#include<stdio.h>
int main(){
    int n;

    //Input the number of rows by the user
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //Iterate over rows
    for(int i=1; i<=n; i++){

        //Print i number of stars
        for(int j=1; j<=i; j++){
            printf("*");
        }

        //Move to next row
        printf("\n");
    }

    return 0;
}
