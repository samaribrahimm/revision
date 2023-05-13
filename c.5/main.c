//calculate power
#include <stdio.h>
int main() {
    int num, pow;
    long result=1;
    printf("Enter a  number: ");
    scanf("%d", &num);
    printf("Enter an power: ");
    scanf("%d", &pow);

    while (pow != 0) {
        result *= num;
        --pow;
    }
    printf("Answer = %d", result);
    return 0;
}
