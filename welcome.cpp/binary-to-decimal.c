#include<stdio.h>

int main(){
    int num,binary,decimal = 0,rem,base=1;
    printf("enter binary number:");
    scanf("&d",&binary);

    num=binary;
    while(binary!=0)
    {
        rem = binary % 10;
        decimal = decimal + rem*base;
        binary = binary / 10;
        base = base*2;
    }
    printf("Decimal equivalent to binary number  %d :  ",num,decimal);
    return 0;
}


