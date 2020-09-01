//C program to print Hollow Mirrored Rhombus Pattern

#include<stdio.h>
int main(){
    int n;

    //Input number of rows by the user
    printf("Enter number of rows : ");
    scanf("%d",&n);

    //Iterate over row
    for(int i=1; i<=n; i++){

        //Print trailing spaces
        for(int j=1; j<=i-1; j++){
            printf(" ");
        }

        //Print stars and inside spaces
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n)
                printf("*");
            else
                printf(" ");
        }

        //Move to next row
        printf("\n");
    }


    return 0;
}
