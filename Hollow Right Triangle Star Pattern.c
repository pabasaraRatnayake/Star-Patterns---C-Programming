//C Program to print Hollow Right Triangle Star Pattern

#include<stdio.h>
int main(){
    int n;

    //Input the number of rows by the user
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //Iterate over row
    for(int i=1; i<=n; i++){

        //Print star for first column (j==1)
        //Print star for last column (j==1)
        //Print star for last row (i==n)
        for(int j=1; j<=i; j++){
            if(i==n || j==1 || j==i)
                printf("*");
            else
                printf(" ");
        }

        //Move to the next line
        printf("\n");
    }


    return 0;
}
