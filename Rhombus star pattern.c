//C program to to print rhombus star pattern
#include<stdio.h>
int main(){
    int n;

    //Input the length of the rhombus
    printf("Enter the length of the rhombus : ");
    scanf("%d",&n);

    //Iterate over each row
    for(int i=1; i<=n; i++){

        //print leading spaces
        for(int j=1; j<=n-i; j++){
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

