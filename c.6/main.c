#include <stdio.h>
int max(int x, int y);
int main(){
    int n1,n2,n3,n4;
    printf("enter  number1 ");
    scanf("%d",&n1);
     printf("enter  number2 ");
    scanf("%d",&n2);
     printf("enter  number3 ");
    scanf("%d",&n3);
     printf("enter  number4 ");
    scanf("%d",&n4);


    int max1 = max(n1, n2);
    int max2 = max(n3, n4);
    int Max = max(max1, max2);
    printf("Maximum number is: %d", Max);
}
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
