#include <stdio.h>

int main(){
    int i = 813;
    float f= 123.1245;
    char s[] = "shong";

    printf("정수형 자료의 출력 \n");
    printf("\t %04d \n \t %09d \n\n", i,i); 
    printf("실수형 자료의 출력 \n");
    printf("\t %.3f \n \t %3e \n\n", f,f); 
    printf("문자형 자료의 출력 \n");
    printf("\t %.4s \n", s);

}