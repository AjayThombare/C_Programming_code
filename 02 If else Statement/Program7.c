#include <stdio.h>
void main(){
        int num1;
        printf("Enter number1 :");
        scanf("%d",&num1);

	int num2;
        printf("Enter number2 :");
        scanf("%d",&num2);

        if(num1 > num2){
                printf("%d is maximum between %d and %d\n",num1,num1,num2);
        }
	else if(num1 < num2){
                printf("%d is greater betwwen %d and %d\n",num2,num1,num2);
	}
	else{
                printf("Number are equal \n");
	}



}
