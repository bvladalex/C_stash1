#include <stdio.h>
int compute_size(int, char);
int main(void){
    int i,n,length,sum=0,c=0;
    char tip;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d %c", &length, &tip);
        if(tip!='c'&&tip!='d'&&tip!='i')
        c=1;
        sum=sum+compute_size(length,tip);
    }
    if(c==0)
    printf("%d bytes",sum);
    else
    printf("Invalid tracking code type");
    return 0;
}
int compute_size(int size, char type){
    int total_size=0,c=0;
    if(type=='c')
    total_size=size;
    else if(type=='i')
    total_size=size*4;
    else if(type=='d')
    total_size=size*8;
    return total_size;
}