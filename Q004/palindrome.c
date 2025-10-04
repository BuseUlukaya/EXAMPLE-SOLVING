#include <stdio.h>

int  largestPalindromeProduct(int digit);

int main(){
	int num1, num2;
	int digit;
	int palindrome;
	printf("How many digit will you enter? ");
	scanf("%d", &digit);
	palindrome = largestPalindromeProduct(digit);
	
	printf("%d ",palindrome);
	
	return 0;
	
} 

int  largestPalindromeProduct(int digit){
	int product;
	int num1, num2;
	int result = 0;
	int digit1 = 0, digit2 = 0;
	int reverse = 0;
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	product = num1 * num2;
	int temp = product;
	
	while(num1 > 0){
		digit1 += 1;
		num1 /= 10;
	}
		
	while(num2 > 0){
		digit2 += 1;
		num2 /= 10;
	}
	
	if(digit1 !=digit || digit2 != digit){
		printf("Please enter valid value !\n");
		return 0;
	}
	
	while(temp > 0){
		reverse = reverse*10 + temp % 10;
		temp /= 10;
	}
	
	if(reverse == product){
		result = product;
	}
	
	return result;
	
}
