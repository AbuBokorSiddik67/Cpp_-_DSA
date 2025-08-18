#include<stdio.h>
#include<math.h>
int main(){
    int row, c, n, temp;
    printf("Enter the number of rows in pyramid of stars you wish to see: ");
    scanf("%d",&n);
    temp=n;
    // For Rows
    for(row=1; row <= n; row++){

        // For colum-
        for(c=1; c<temp; c++){
            printf(" ");
        }
        temp--;

        // For colum-
        for(c=1; c<=2*row-1; c++){
            printf("0");
        }
        printf("\n");

    }
}