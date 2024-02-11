#include <stdio.h>

int main(){

int num1, num2;
int sum, difference, product;
float qoutient;


printf("Enter first number: ");
scanf("%d", &num1);

printf("Enter second number: ");
scanf("%d", &num2);


sum = num1 + num2;
difference = num1 - num2;

product = num1 * num2;


// To handle division by zero 

if(num2 != 0){
	qoutient = (float) num1 / num2;
} else{
	printf("Divison by zero is not allowed.\n");

	return 1;
}


printf("Sum = %d\n", sum);
printf("Difference = %d\n",difference);
printf("Product = %d\n",product);
printf("Qoutient = %f\n", qoutient);

return 0;
}
