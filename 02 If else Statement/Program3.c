#include <stdio.h>
void main(){
        int num;
        printf("Enter number :");
        scanf("%d",&num);

        if(num%7==0 &&  num>21){
                printf("%d Number is divisible by 7 and greater than 21 \n",num);
        }
	else if(num%7==0 &&  num<21){
                printf("%d Number is divisible by 7 and less than 21 \n",num);
        }
        else{
		printf("Number is not divisible by 7 \n");
        }
}
