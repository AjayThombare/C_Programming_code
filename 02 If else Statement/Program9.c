#include <stdio.h>
void main(){
	int marks;
	printf("Enter marks : ");
	scanf("%d",&marks);

	if(marks<=100 && marks>=90){
		printf("Grade: A \n");
	}
	else if(marks<90 && marks>=80){
		printf("Grade: B \n");
	}
	else if(marks<80 && marks>=60){
		printf("Grade: C \n");
	}
	else if(marks<60 && marks>=40){
		printf("Grade: D \n");
	}
	else{
		printf("Failed \n");
	}
}


