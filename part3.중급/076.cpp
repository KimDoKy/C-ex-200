// Call by Address 이해하기
// 주소를 명시적으로 전달받아 4바이트가 할당

#include <iostream>

using namespace std;

void Func1(bool *is_on)
{
    cout << "Call by address: " << sizeof(is_on) << endl;
}

void Func2(bool &is_on)
{
    cout << "Call by reference: " << sizeof(is_on) << endl;
}

int main()
{
    bool is_tmp = true;

    // 함수가 포인터를 인자로 받기 때문에 호출도 주소를 명시해야 함
    Func1(&is_tmp);

    // 함수가 주소를 인자로 받는데, 호출은 값을 그대로 넘겨야 함
    Func2(is_tmp);

    return 0;
}
