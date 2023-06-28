#pragma once
#pragma once
#include <iostream>
#include <memory>
#include "Item.h"

using namespace std;

#pragma region 스마트 포인터
// 포인터처럼 동작하는 클래스 템플릿으로
// 사용이 끝난 메모리를 자동으로 해제하는 포인터입니다.
#pragma endregion


int main()
{
#pragma region unique_ptr 포인터
    // 하나의 메모리 공간만 가리킬 수 있는 포인터입니다.

    // ex) 초기화하는 방법
    // std::unique_ptr<int> uniquePtr(new int(5)); 
    //
    // // // uniquePtr이 가지고 있던 메모리 소유권(동적으로 할당한 메모리)를
    // // // uniquePtr1에게 메모리 소유권을 넘겨주는 과정입니다.
    // std::unique_ptr<int> uniquePtr1 = std::move(uniquePtr);
    // 
    // // std::move( ) 함수로 객체에 대한 소유권을 이전할 수 있지만,
    // // 객체를 이전한 유니크 포인터는 아무것도 가리킬 수 없으며, 소멸한 포인터로
    // // 처리됩니다.
    // std::cout << *uniquePtr1 << std::endl;
    // 
    // *uniquePtr1 = 300;
    // 
    // std::cout << *uniquePtr1 << std::endl;

    //  ex 2)
    //  std::unique_ptr<int> uniquePtr = std::make_unique<int>(new int(5));
#pragma endregion

#pragma region shared_ptr 포인터
    // 어떤 하나의 객체를 참조하는 스마트 포인터의 갯수를
    // 참조하는 포인터입니다.

    // 참조하고 있는 스마트 포인터의 수를 참조 카운트라고 합니다.

    // 참조 카운트(Reference Counting)
    // 해당 메모리를 참조하는 포인터가 몇 개가 있는 지 나타내는 값입니다.

    // 첫 번째 초기화 방법
    // shared_ptr<int> shared_ptr(new int(999));

    // 두 번째 초기화 방법
    // shared_ptr<Item> shared_ptr1 = std::make_shared<Item>();
    // 
    // {
    //     shared_ptr<Item> shared_ptr2 = shared_ptr1;
    //     std::cout << shared_ptr1.use_count() << std::endl;
    // }
    // 
    // std::cout << shared_ptr1.use_count() << std::endl;

#pragma endregion

#pragma region weak_ptr 포인터
    // 하나 이상의 shared_ptr 인스턴스가 소유하는 객체에
    // 대한 접근을 제공하지만, 참조 카운트에 포함되지 않는
    // 스마트 포인터입니다.

    shared_ptr<Item> ptr1(new Item);
    shared_ptr<Item> ptr2(new Item);

    std::cout << "ptr1의 " << ptr1.use_count() << std::endl;
    std::cout << "ptr2의 " << ptr2.use_count() << std::endl;

    ptr1->ptr = ptr2;
    ptr2->ptr = ptr1;

    std::cout << "ptr1의 " << ptr1.use_count() << std::endl;
    std::cout << "ptr2의 " << ptr2.use_count() << std::endl;

#pragma endregion

    return 0;
}
