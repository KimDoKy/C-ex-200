// constexpr 사용하기
// 상수를 더 유연하기 사용할 수 있음
// 컴파일 타임에 값이 결정되기 때문에 기존의 const보다 유연하게 사용 할 수 있음

#include <iostream>

using namespace std;

constexpr int GetNumber1()
{
    return 2;
}

constexpr int GetNumber2(int x, int y)
{
    return x + y;
}

int main()
{
    // 고정된 크기가 필요할 때 사용하면 됨
    int array1[GetNumber1()];
    int array2[GetNumber2(1, 2)];

    // 4바이트 2개 = 8 / 4바이트 3개를 저장할 수 있어서 12
    cout << sizeof(array1) << ", " << sizeof(array2) << endl;

    return 0;
}

// const는 선언과 함께 값을 결정해야하는 장점이나 단덤이 존재
// constexpr은 컴파일 시점에 값을 결정하기 때문에 const보다 유연
