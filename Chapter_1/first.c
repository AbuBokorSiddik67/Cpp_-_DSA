#include <stdio.h>
int main(){
    int mark, index;
    printf("Enter your mark: ");
    scanf("%d",&mark);
    index=mark/10;
    switch (index)
    {
    case 9 :
        printf("Your Grade is: A+\n");
        break;
    
    case 8 :
        printf("Your Grade is: A\n");
        break;
    
    case 7 :
        printf("Your Grade is: B\n");
        break;
    
    case 6 :
        printf("Your Grade is: C\n");
        break;
    
    case 5 :
        printf("Your Grade is: D\n");
        break;
    
    case 4 :
        printf("Your Grade is: E\n");
        break;
    
    default:
        printf("Your Grade is: F\n");
        break;
    }
}