#include <stdio.h>

void main()	
{
  	// 2진수를 10진수로 나타내는 방법
    // 1 byte에 2 진수로 저장된 값을 2의 제곱으로 나타냅니다.

    // 비트 연산자란?
    // 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.
    int x = 10; // 0000 1010
    int y = 3;  // 0000 0011

    printf("x와 y를 AND 연산한 결과 : %d\n", x & y);
    printf("x와 y를 OR 연산한 결과 : %d\n", x | y);
    printf("x와 y를 XOR 연산한 결과 : %d\n", x ^ y);

    printf("x의 NOT 연산한 결과 : %d\n", ~x);

    // 자료형     메모리 크기    값의 범위
    // char        1 byte    -128 ~ 127
    // short       2 byte   -32768 ~ 32767
    // int         4 byte   -2,147,483,648 ~ 2,147,483,647

    // float       4 byte   3.4E-38(-3.4*10^38) ~ 3.4E+38(3.4*10^38) (7digits)
    // double      8 byte   1.79E-308(-1.79*10^308) ~ 1.79E+308(1.79*10^308) (15digits)



} 
