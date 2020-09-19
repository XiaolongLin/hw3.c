#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int digit_sum(int n){
 int sum =0;
 while (n>=0){
   sum = sum + n%10;
   n = n/10;
  return sum;
  }
}
int main(void) {
  int num = atoi(readline("Enter an int: "));
  printf("sum of digits of %d is %d\n", num, digit_sum(num) );
  return 0;

} 
 