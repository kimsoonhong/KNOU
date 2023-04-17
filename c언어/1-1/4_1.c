#include <stdio.h>

#pragma warning(disable:4996)

void main(){
    int a,b,c,n;
    printf("maximum value = ?");
    scanf("%d",&n);
    printf("A\tB\tc \n");
    for(a=1;a<=n;a++){
        for(b=1 ;b<=n;b++){
            for(c=1;c<=n;c++){
                if(a*a == b*b +c*c)
                printf("%d\t%d\t%d\t \n",a,b,c);
            }

        }
    }
}


//정수 n을 입력받아 n보다 작은 정수변을 갖는 직각삼각형을 구하는 프로그램