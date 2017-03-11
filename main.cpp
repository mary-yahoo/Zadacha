#include <iostream>

int main() {
    int a=10407;//первоначальное число
    int n; //остатки от деления
    int b=0;//новое число;
    int m=1;
    int i=0;
    while (a!=0){
        n=a%10;
        a=a/10;
        if (n==0){
            b=9*m+b;
        }
        else
            b=m*(n-1)+b;
        i++;
        m=m*10;
    }
    printf("Количество разрядов = %d\n", i);
    printf("Полученное число = %d", b);

    return 0;
}