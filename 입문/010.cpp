// 배열 배우기([크기])
// 같은 자료형 데이터를 여러개 저장하는 방법
// 각괄호[]를 사용해 개수를 지정

#include <iostream>

using namespace std;

int main()
{
    const int kArraySize = 3;

    int founding[kArraySize];
    founding[0] = 918;
    founding[1] = 1392;
    founding[2] = 1948;

    cout << "고려 건국 연도: " << founding[0] << endl;
    cout << "조선 건국 연도: " << founding[1] << endl;
    cout << "한국 건국 연도: " << founding[2] << endl;

    return 0;
}
