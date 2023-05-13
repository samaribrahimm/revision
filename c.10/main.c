// convert binary to decimal

#include <stdio.h>
#include <math.h>

int convertNum(long );

int main() {
  long  num;
  int decimal;
  printf("Enter a binary number: ");
  scanf("%lld", &num);
  decimal=convertNum(num);
  printf("%lld in binary = %d in decimal", num,decimal);
  return 0;
}

int convertNum(long  num) {
  int decimal = 0, i = 0, rem;

  while (num!=0) {
    rem = num % 10;
    num /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }

  return decimal;
}
