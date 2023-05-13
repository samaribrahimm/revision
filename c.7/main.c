//copy string without using strcpy
#include <stdio.h>
#include <stdlib.h>
int n =100;
int main()
{
    char str2[n];
    char str1 [n];
    int i;
    printf("enter  first string ");
    fgets(str1,sizeof(str1),stdin);
    for( i =0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("copy string =%s",str2);
    return 0;
}
