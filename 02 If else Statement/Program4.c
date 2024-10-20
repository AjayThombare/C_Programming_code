#include <stdio.h>
void main(){
        int num;
        printf("Enter number :");
        scanf("%d",&num);

        if(num>=18){
                printf("Eligible for voting \n");
        }
        else{
                printf("Not eligible for voting \n");
        }
}
