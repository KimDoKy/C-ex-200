// 중첩 조건문으로 가장 큰 수 찾기(if~else)
// if 문을 이용하여 가장 큰 수 찾는 방법
// 3개의 정수를 비교하여 가장 큰 정수를 찾음

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number1 = 100;
    int number2 = 200;
    int number3 = 300;

    if (number1 > number2 && number1 > number3)
        cout << "가장 큰 수 number1 : " << number1 << endl;
    else if (number2 > number1 && number2 > number3)
        cout << "가장 큰 수 number2 : " << number2 << endl;
    else if (number3 > number1 && number3 > number2)
        cout << "가장 큰 수 number3 : " << number3 << endl;
    else
        cout << "찾을 수 없습니다." << endl;

    return 0;
}
