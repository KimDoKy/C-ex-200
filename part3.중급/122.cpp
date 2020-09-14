// 디폴트 매개변수 이해하기
// 함수의 인자를 초기화하여 사용
// 함수를 호출할 때 인자를 모두 채우지 않아도 됨

#include <iostream>

using namespace std;

int GetOne() { return 1; }

int Plus(int x, int y = GetOne(), int z = 1)
{
    return x + y + z;
}

int main()
{
    int number1 = Plus(1);
    int number2 = Plus(1, 2);
    int number3 = Plus(1, 2, 3);

    cout << "결과값 : " << number1 << ", " << number2 << ", " << number3 << endl;

    return 0;
}
