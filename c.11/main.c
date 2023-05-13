//C program to get the nth bit of a number

#include <stdio.h>

int main()
{
    int num, n, status;

    printf("Enter  any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    status = (num >> n) & 1;

    if(status==1)
    printf("The %d bit is set to 1 ", n);
    else
    printf("The %d bit is set to 0 ", n);
    return 0;
}
