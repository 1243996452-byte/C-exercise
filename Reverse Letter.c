#include <stdio.h>
int main(){ //小写转换大写
    char ch;
    printf("input a string\n");
    while(scanf("%c",&ch),ch != '\n')//一直读入字符，直到读到换行符就停止循环
    {
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}