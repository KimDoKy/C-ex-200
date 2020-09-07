// 네임스페이스 배우기
// (namespace)
// 같은 이름의 함수, 변수 충돌 문제를 피하기 위해 만들어진 것
// 변수, 함수 범위를 제한

#include <iostream>

using namespace std;

namespace silla
{
    int year = 935;

    void CentralArea()
    {
        cout << "경상도" << endl;
    }
}

namespace baekjae
{
    int year = 660;

    void CentralArea()
    {
        cout << "충청도" << endl;
    }
}

using namespace silla;
using namespace baekjae;

int main()
{
    cout << "신라 중심지: ";
    silla::CentralArea();
    cout << "신라 멸망연도: " << silla::year << endl;
    cout << "백제 중심지: ";
    baekjae::CentralArea();
    cout << "백제 멸망연도: " << baekjae::year << endl;

    return 0;
}
