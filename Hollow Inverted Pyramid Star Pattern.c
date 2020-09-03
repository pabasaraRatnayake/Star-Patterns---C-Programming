//C program to print Hollow Inverted Pyramid Star Pattern

#include<stdio.h>
int main(){
    int n;

    //Input number of rows by the user
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //Iterate over rows
    for(int i=1; i<=n; i++){

        //Print trailing spaces
        for(int j=1; j<=i-1; j++){
            printf(" ");
        }

        /*
        Print stars for
        first row (i==1)
        i th column (j==1)
        last column (j==2*(n-i)+1)
        */
        for(int j=1; j<=2*(n-i)+1; j++){
            if(j==1 || j==2*(n-i)+1 || i==1)
                printf("*");
            else
                printf(" ");
        }

        //Move to next line
        printf("\n");
    }

    return 0;
}
