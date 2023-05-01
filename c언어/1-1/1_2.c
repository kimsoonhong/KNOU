// // /*이 프로그램은 두 수를 키보드로 입력받아 곱의 결과를 출력하는 프로그램이다.*/

// // /*도입부*/
// #include <stdint.h>  //printf와 sacnf를 사용하기 위한 헤더 파일 포암
// #pragma warning(disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메시지 무시

// int a,b,c;
// int product(int x, int y);

// /*메인함수*/
// int main(){
//     int a,b,c;

//     printf("Enter a number between 1 and 100: ");
//     scanf("%d", &a);

//     printf("Enter a number between 1 and 100: ");
//     scanf("%d", &b);

//     c = product(a, b);
//     printf("%d * %d = %d\n", a, b, c);

//     return 0;
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





#include <stdio.h>  // 도입부에 프로그램 전체에 적용되는 사항을 불러온다.
#pragma warning(disable:4996)  // 도입부에 권장하지 않는 함수사용에 대한 경고 메시지 무시를 위한 사항을 불러온다

int product(int x, int y);  // 사용자 함수를 선언한다.
int a,b,c;  // int 저장하는 변수를 선언한다.
void main(){

    printf("Enter a number between 1 and 100: ");  // 첫번쨰 수를 입력 받기위해 사용자에게 보여줄 문구
    scanf("%d", &a);  // 사용자에게 첫번째 수를 입력 받아 a 번수에 할당한다.

    printf("Enter a number between 1 and 100: ");  // 두번쨰 수를 입력 받기위해 사용자에게 보여줄 문구
    scanf("%d", &b); // 사용자에게 두번째 수를 입력 받아 b번수에 할당한다.

    c = product(a, b);  // 사용자 함수  product에 파라미터로 a와b를 입력하여 리턴값을 c에 할당한다.
    printf("%d * %d = %d\n", a, b, c);  // 사용자에게 결과값을 보여준다.

    
}

int product(int x, int y){  // 파라미터를 2개 받는다.
    return x * y;  // 두개의 파라미터를 곱한값을 리턴해준다.
}
