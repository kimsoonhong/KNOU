// 입력하는 문자열을 임시로 저장한후 malloc()함수를 이용하여 입력된 크기만큼 메모리를 할당하여 저장한 후 
// 입력된 순서의 반대로 문자열을 출력하는 프로그램이다.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

void main() {

    char* str[3];
    char temp[100];
    int i,j,size;
    printf("문자열을 3개 입력하시오. \n");

    for(i=0;i<3;i++){
        printf("%d 번째 문자열:",i+1);
        gets(temp);
        str[i] = (char*)malloc((sizeof(char)*size)+1);
        strcpy(str[i],temp);
    }

    printf("입력과 반대로 출력 \n");
    for(i=2; i>=0;i--){
        size = strlen(str[i]);
        temp[size]='\0';
        for(j=size-1; j>=0;j--){
            temp[size-1-j]=str[i][j];

            printf("%d : %s \n ", i+1, temp);
        }

    }
for(i=0;i<3;i++){
    free(str[i]);
}
}



