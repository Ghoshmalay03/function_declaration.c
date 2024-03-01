#include<stdio.h>
int sum(int a, int b);
int main(){
	int num1, num2, total=0;
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	total=num1+num2;
	printf("Total= %d", total);
	return 0;
}

int sum(int a, int b){
	return(a+b);
}
