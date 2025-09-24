#include <stdio.h>
int find_evenfibonaccisum(int number);
int main(){
	int number;
	int result;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	result = find_evenfibonaccisum(number);
	printf("Sum of even fibonacci numbers : %d\n", result);
	
	return 0;
}

int find_evenfibonaccisum(int number){
	int firstnumber, secondnumber,temp;
	int sum;

	sum = 0;
	firstnumber = 0;
	secondnumber = 1;
	temp = 0;

	while(number > temp){
		temp = firstnumber + secondnumber;
		firstnumber = secondnumber;
		secondnumber = temp;
		if(temp % 2 == 0){
			sum += temp;
		}
	}
	
	return sum;
}
