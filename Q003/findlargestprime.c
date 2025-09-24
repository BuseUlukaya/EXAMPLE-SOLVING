#include <stdio.h>
int find_largestnumber(int number);
int main(){
	int number;
	int largest;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	largest = find_largestnumber(number);
	printf("Largest prime number: %d",largest);
	
	return 0;
	
}

int find_largestnumber(int number){
	int i, j;
	int max = 0;
	int prime;
	for(i = 2;i <=number; i++){
		prime = 1;
		for(j = 2;j <= i/2;j++){
			if(i % j == 0){
				prime = 0;
				break;
			}	 
		}
		if(prime == 1 && i >max){
			max = i;
		}
	}
	return max;
}
