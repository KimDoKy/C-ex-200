// 조건 순환문 이해하기 (while~continue~break)
// 조건에 맞으면 반복함
// for 문은 특정 범위, while은 특정 조건에서 반복

#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    while (number < 10)
    {
        number++;

        if (number % 3 == 0)
            continue;
        else
            cout << "number 값: " << number << endl;
    }

    return 0;
}
