// 조건 순환문 이해하기 (do~while~continue~break)
// 무조건 한 번은 실행한 뒤, 조건이 맞는다면 반복
// 무조건 한 번은 실행한다는 장단점이 있음

#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    do {
        number++;

        if (number % 3 == 0)
            continue;
        else
            cout << "number 값: " << number << endl;
    } while (number < 10);

    return 0;
}
