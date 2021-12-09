#include <stdio.h>
#include<conio.h>
using namespace std;
int main() {
  char op;
  double first, second;
  printf("Enter an operator: ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%lf", first + second);
      break;
    case '-':
      printf("%lf", first - second);
      break;
    case '*':
      printf("%lf",first * second);
      break;
    case '/':
      printf("%lf", first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}