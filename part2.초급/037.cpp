// 조건 선택문 이해하기 (switch~case|default)
// 조건 선택문을 사용하는 방법
// 중첩 조건문이 길이저면 조건 선택문을 사용

#include <iostream>

using namespace std;

int main()
{
    int number = 3;

    switch (number)
    {
        case 1:
            cout << "nubmer 값은 1입니다." << endl;
            break;
        case 2:
            cout << "nubmer 값은 2입니다." << endl;
            break;
        case 3:
            cout << "nubmer 값은 3입니다." << endl;
            break;
        default:
            cout << "nubmer 값을 알 수 없습니다." << endl;
            break;
    }

    return 0;
}
