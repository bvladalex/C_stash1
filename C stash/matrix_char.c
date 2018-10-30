#include <stdio.h>
int main(void){
    char ch;
    int i,j,k,m,n;
    int x=3;
    int y=5;
    scanf("%c",&ch);
    for(i=0;i<=4;i++){
        for(k=0;k<=x;k++)
        printf("*");
        for(m=x+1;m<y;m++)
        printf("%c",ch);
        for(n=y;n<=8;n++)
        printf("*");
        printf("\n");
        x-=1;
        y+=1;
    }
    return 0;
}