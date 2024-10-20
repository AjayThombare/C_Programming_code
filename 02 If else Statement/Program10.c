#include <stdio.h>
void main(){
	int angle1;
	int angle2;
	int angle3;

	printf("Enter angle of a triangle: \n");
	scanf("%d%d %d",&angle1, &angle2, &angle3);
	
	/*printf("Enter angle of atriangle: ");
	scanf("%d",&angle2); 
	printf("Enter angle of atriangle: ");
	scanf("%d",&angle3); 	*/
	
	//int sum = angle1+angle2+angle3;
	if( angle1+angle2+angle3==180){
		printf("The Triangle is valid \n");
	}
	else{
		printf("The Triangle is invalid \n");
	}
}


