#include <stdio.h>  // 도입부에 프로그램 전체에 적용되는 사항을 불러온다.

void main(){

    // 각 자료형의 크기를 표출해준다.

printf("char 자료형 크기 : %d byte\n", sizeof(char));
printf("short 자료형 크기 : %d byte\n", sizeof(short));
printf("short int 자료형 크기 : %d byte\n", sizeof(short int));
printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short));
printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int));
printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short));
printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int));
printf("int 자료형 크기 : %d byte\n", sizeof(int));
printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int));
printf("long 자료형 크기 : %d byte\n", sizeof(long));
printf("long int 자료형 크기 : %d byte\n", sizeof(long int));
printf("long long 자료형 크기 : %d byte\n", sizeof(long long));
printf("float 자료형 크기 : %d byte\n", sizeof(float));
printf("double 자료형 크기 : %d byte\n", sizeof(double));
printf("long double 자료형 크기 : %d byte\n", sizeof(long double));

}