#include <stdio.h>
#define SIZE 10
#pragma warning(disable:4996)

void bubble(int *, const int, int(*)(const int,const int));
int ascending(const int, const int);
int descending(const int, const int);


void main() {
int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
int counter, order;
printf("오름차순 정렬은 1, 내림차순 정렬은 2를 누르세요 :");
scanf("%d",&order);
printf("\n 원래 데이터 \n");
    for(counter =0; counter<=SIZE-1;counter++)
        printf("%4d",a[counter]);
    if(order==1){
        bubble(a,SIZE,ascending);
        printf("\n 오름 차순으로 정렬된 테이터 \n");
    }else{
        bubble(a,SIZE,descending);
        printf("\n 내림 차순으로 정렬된 테이터 \n");
    }
    for(counter=0; counter <= SIZE-1; counter++)
        printf("%4d",a[counter]);
    printf("\n");

    
}



