#pragma once
#pragma once
#include <iostream>
#include "Item.h"

using namespace std;

#pragma region 템플릿
// 함수나 크래스를 다시 작성하지 않아도
// 수 많은 자료형에서 동작할 수 있도록 해주는 기능입니다.

template<typename T>
void DataType(T value)
{
    std::cout << value << std::endl;
}

#pragma endregion

#pragma region 템플릿의 특수화
// 템플릿 함수를 사용하지만, 특정 매개변수에 대해서는
// 별도 처리를 하기 위해 사용하는 기능입니다.

template<typename T>
int DataSize(T data)
{
    return sizeof(data);
}

template<>
int DataSize(const char* data)
{
    return strlen(data) + 1;
}

#pragma endregion

template <typename T1, typename T2>
class Dictionary
{
private:
    T1 key;
    T2 value;

public:
    Dictionary(T1 key, T2 value)
    {
        this->key = key;
        this->value = value;
    }

    void ContainsKey()
    {
        std::cout << key << std::endl;
    }

    void ContainsValue()
    {
        std::cout << value << std::endl;
    }
};

int main()
{
#pragma region 템플릿
    // DataType('A');
    // DataType(10);
    // DataType(3.141592f);
    // DataType(4.75);   
#pragma endregion

#pragma region 템플릿 특수화
    // int integer = 10;
    // double decimal = 6.75;
    // const char * content = "She is Happy";
    // 
    // std::cout << "integer 변수의 크기 : " << DataSize(integer) << std::endl;
    // std::cout << "decimal 변수의 크기 : " << DataSize(decimal) << std::endl;
    // std::cout << "content 변수의 크기 : " << DataSize(content) << std::endl;
#pragma endregion

#pragma region 클래스 템플릿
    // Dictionary<char, int> dictionary1('A', 100);

    // dictionary1.ContainsKey();
    // dictionary1.ContainsValue();

    // Dictionary<const char *, double> dictionary2("Table", 99.65);

    // dictionary2.ContainsKey();
    // dictionary2.ContainsValue();
#pragma endregion

    // Item item;

    // item.Search(100);

    Item::Upgrade();

    return 0;
}
