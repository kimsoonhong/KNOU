// /*이 프로그램은 두 수를 키보드로 입력받아 곱의 결과를 출력하는 프로그램이다.*/

// /*도입부*/
// #include <stdint.h>  //printf와 sacnf를 사용하기 위한 헤더 파일 포암
// #pragma warning(disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메시지 무시

// int a,b,c;
// int product(int x, int y);

// /*메인함수*/
// void main(){

//     //첫번쨰 수 입력
//     printf("enter a number between 1 and 100 : ");
//     scanf("%d",&a);

//     //두번쨰 수 입력
//     printf("enter a number between 1 and 100 : ");
//     scanf("%d",&b);

//     /* 함수 호출에 의해 두 수를 곱하고 결과를 출력*/
//     c = product(a,b);
//     printf("%d * %d = %d \n", a,b,c);

// }

// /*두 수의 곱을 계산하여 돌려주는 사용자 함수.*/
// int product (int x, int y ){
//     return (x*y);
// }




/*
main 함수의 반환형이 void인데, C 표준에 따르면 main 함수의 반환형은 int여야 합니다.
변수 c를 전역 변수로 선언하지 않고 main 함수 내에서 지역 변수로 선언하는 것이 더 권장됩니다.
함수 호출시에는 괄호 안에 인수를 전달해야 합니다. product(a,b)를 product(a, b)로 수정해야 합니다.


아래 수정본
*/





#include <stdio.h>

int product(int x, int y);

int main(){
    int a,b,c;

    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    printf("Enter a number between 1 and 100: ");
    scanf("%d", &b);

    c = product(a, b);
    printf("%d * %d = %d\n", a, b, c);

    return 0;
}

int product(int x, int y){
    return x * y;
}
