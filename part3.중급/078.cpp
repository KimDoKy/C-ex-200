// const 포인터 이해하기

#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;

    // 가리키는 대상은 변경할 수 있지만 값을 직접 변경할 수 없음
    int const *ptr1;
    ptr1 = &num1;
    // ptr1 = num1;
    ptr1 = &num2;

    // int를 가리키는 const 포인터로 초기값이 반드시 필요하며 가리키는 대상을 바꿀 수 없음
    int *const ptr2 = &num1;
    *ptr2 = num2;
    // *ptr2 = &num2;

    return 0;
}
