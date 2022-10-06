#include <stdio.h>
#include <stdlib.h>

void cambia(int *a, int *b, int *c);

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    cambia(&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
}

void cambia(int *a, int *b, int *c){
    if(a>b){
        *b=*b*2;
    }else if(a<b){
        *c=*c-*a;
    }else if(c<0){
        *c=*c*-1;
    }
}
