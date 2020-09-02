//C program to print Inverted Right Triangle Star Pattern

#include<stdio.h>
int main(){
    int n;

    //Input the number of rows by the user
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //Iterate over row
    for(int i=1; i<=n; i++){

        //Print n-1-1 number of stars
        for(int j=1; j<=n-i-1; j++){
            printf("*");
        }

        //Move to next row
        printf("\n");
    }


    return 0;
}
