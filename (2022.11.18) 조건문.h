#pragma once
#include <stdio.h>

void main()
{
    // 조건문
    // 어떤 조건이 주어질 때 해당 조건에 따라
    // 동작을 수행하도록 실행하는 명령문입니다.

    // if문
    /*
    // if문의 조건이 틀리면 조건문 안에 있는 내용이
    // 실행되지 않습니다.

    // if문과 else if문의 조건이 모두 다 같다면
    // if문의 조건만 실행됩니다.

    if (100 >= 0) // 참
    {
        printf("Game Over.");
    }
    // else if문은 if문과 else문 사이에 계속
    // 선언할 수 있습니다.
    else if (100 > 50)
    {
        printf("Game Pause");
    }
    else if (100 == 100) // 참
    {
        printf("Game Play");
    }
    else
    {
        printf("Game Error");
    }

    // else문 밑에 더 이상 else if의 조건을 설정할
    // 수 없습니다.
    */

    // else if문
    /*
    // else if와 else로 if문 없이 조건문을 만들 수 없습니다.
    int signal = 1;

    if (signal == signal)
    {

    }

    if  (signal != signal)
    {

    }

    if (signal == 1)
    {
        printf("초록불");
    }
    else if (signal == 2)
    {
        printf("노란불");
    }
    else if (signal == 3)
    {
        printf("빨간불");
    }

    // if는 독립적인 조건문이기 때문에
    // if문과 else if 밑에 if를 사용하게 되면 서로 다른
    // 조건문으로 인식하게 됩니다.

    if (signal == 1)
    {
        printf("하얀불");
    }
    else
    {
        printf("error");
    }

    // if을 선언할 때 else if문과 else이 없어도 선언할 수 있습니다.
    */
}