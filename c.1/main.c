#include <stdio.h>
#include <stdlib.h>
//C program to count total of zeros and ones in a binary number using bitwise operator

#define Numbits sizeof(int) * 8 /* Total number of bits in integer */
 int num,num_ones, num_zeros, i;
int main()
{


    printf("Enter any number: ");
    scanf("%d", &num);
 count_bits(num);

    return 0;
}
void count_bits(int num){
    num_zeros = 0;
    num_ones = 0;

    for(i=0; i<Numbits; i++)
    {
        if(num & 1==1)
            num_ones++;
        else
            num_zeros++;


        num >>= 1;
    }

    printf("Total zero bit is %d\n",num_zeros);
    printf("Total one bit is %d",num_ones);
}
