// 자변이 우변보다 큰지 확인하기 (isgreater)
// 두 수를 비교하여 어느 구사 더 큰지 알아내는 방법
// isgreater 함수는 좌변을 기준으로 결과를 반환

#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    double a = 12.2;
    double b = 5.6;

    cout << boolalpha;
    cout << isgreater(20, 11) << endl;
    cout << isgreater(x, y) << endl;
    cout << isgreater(a, b) << endl;
    cout << isgreater(x, b) << endl;

    return 0;
}
