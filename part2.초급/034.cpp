// 중첩 순환문 이해하기 (for~continue~break)
// 반복문 사이에 조건을 두어 순환하는 방법
// 순환문에서 continue는 건너뛰기, break는 종료

#include <iostream>

using namespace std;

int main()
{
    int number = 7;

    for (int i = 0; i < 10; i++)
    {
        if (i % 3 == 0)
            continue;
        else if (i == number)
            break;
        else
            cout << "현재 i 값: " << i << endl;
    }
    return 0;
}
