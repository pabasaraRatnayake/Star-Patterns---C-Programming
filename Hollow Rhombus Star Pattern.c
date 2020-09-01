#include<stdio.h>
int main(){
    int n;

    //Input side length of the rhombus from user
    printf("Enter the length of one side of the rhombus : ");
    scanf("%d",&n);

    //Iterate over row
    for(int i=1; i<=n; i++){

        //Print trailing spaces
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }

        //Print stars and inside spaces
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n)
                printf("*");
            else
                printf(" ");
        }
        //Jump to next row
        printf("\n");
    }



    return 0;
}
