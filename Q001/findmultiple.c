#include <stdio.h>
int findthreeorfivemultiple(int number);
int main(){
int number;
int sum;
printf("Enter a number: ");
scanf("%d", &number);

sum = findthreeorfivemultiple(number);
printf("Sum : %d\n", sum);

return 0;

}
int findthreeorfivemultiple(int number){
int i;
int sum = 0;

for(i = 0;i < number;i++){
    if(i % 3 == 0 || i % 5 == 0){
    sum += i;
    }
}
    return sum;
}
