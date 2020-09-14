// 가변인자 함수 사용하기 (C언어 스타일)
// C언어 스타일의 가변인자 함수 사용방법
// 개발환경에 따라 C++ 스타일의 가변인자 함수가 적용되지 않는 경우가 있으니 C언어 스타일도 알아두는 것이 좋음

// va_start(va_list, lastfix) : 첫 번째 가변인수 위치를 찾아 시작 번지를 알아낸다. 포인터 형태
// va_arg(va_list, type) : va_list가 가리키는 위치의 값을 읽어내 리턴
// ve_end(va_list) : va_list를 초기화하여 가변인자 사용이 끝났음을 알림

#include <iostream>
#include <stdarg.h>

using namespace std;

int Sum(int arg, ...)
{
    // va_list는 가변인자의 주소를 가리킴
    // ap는 포인터 형태, va_start에 인자로 전달되어야 실제 주소값을 가짐
    va_list ap;
    // arg는 함수 호출에서 보내는 5의 값으로 가변인자가 총 5개라는 것을 명시적으로 알려주는 용도.
    // 즉, ap는 5개 인자의 주소를 할당한다는 의미
    va_start(ap, arg);

    int sum = 0;

    for (int i = 0; i < arg; i++)
        // va_arg함수를 이용해 순차적으로 int형 데이터를 불러오는데
        // ap의 주소를 참조한다.
        sum += va_arg(ap, int);

    // 가변 인자 사용이 끝남을 알림
    va_end(ap);

    return sum;
}

int main()
{
    int number = Sum(5, 1, 2, 3, 4, 5);

    cout << "1에서 5까지 합: " << number << endl;

    return 0;
}
