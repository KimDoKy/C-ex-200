// array 삽입, 수정, 복사하기 (fill, at, copy)
// array 컨테이너에 데이터를 삽입하고 수정하는 방법
// 벡터와 비슷한 컨테이너지만, 크기가 고정되어 있음

#include <iostream>
#include <array>

using namespace std;

void Print(const array<int, 3> &data)
{
    cout << "== Print == " << endl;

    for (auto iter = data.begin();
            iter != data.end();
            ++iter)
        cout << *iter << ", ";

    cout << endl;
}

int main()
{
    array<int, 3> data1 { 10, 2, 5 };
    array<int, 3> data2;
    data2.fill(0);   // 전체를 특정 값으로 설정
    data2.at(1) = 200; // idx 1의 값으로 교체

    Print(data2);

    copy(data1.begin(), data1.end(), data2.begin());

    Print(data1);
    Print(data2);

    return 0;
}
