#include <stdio.h>
int main(){
    int dividend, divisor;//被除数和除数
    int quotient, remainder;//商和余数
    scanf("%d %d", &dividend,&divisor);
    quotient = dividend/divisor;
    remainder = dividend%divisor;
    printf("%d %d\n", quotient, remainder);
    return 0;
}
