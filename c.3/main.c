 //calculator
 #include <stdio.h>
void calculator(double num1 ,double num2,char op);
int main() {

  double num1,num2;
  char operation ;
  printf("Enter an operation (+, -, *, /) ");
  scanf("%c", &operation);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &num1, &num2);
calculator(num1,num2,operation);

  return 0;
}
void calculator(double num1 ,double num2,char op){

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", num1, num2,num1 / num2);
      break;
    default:
      printf("operator is not correct");
  }}
