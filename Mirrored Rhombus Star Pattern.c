//C program to print mirrored rhombus star pattern

#include<stdio.h>
int main(){
    int n;

    //Input the side length of the rhombus by the user
    printf("Enter the side length of the rhombus : ");
    scanf("%d",&n);

    //Iterate over row
    for(int i=1; i<=n; i++){

        //Print trailing spaces
        for(int j=1; j<=i-1; j++){
            printf(" ");
        }

        //print stars
        for(int j=1; j<=n; j++){
            printf("*");
        }

        //Move to next row
        printf("\n");
    }

    return 0;
}
