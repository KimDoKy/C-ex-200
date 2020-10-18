// 반복자 iterator 사용하기
// 반복자라 부르는 컨테이너 iterator
// 반복자는 컨테이너의 특정 위치를 가리키는 포인터
// * : 현재 위치
// ++ : 다음 위치
// -- : 이전 위치
// ==, != : 같은 위치인지 비교
// = : 반복자 설정
// vector.begin은 벡터의 첫 번째 위치,
// vector.end는 마지막 위치를 가리키며 반복문에서 반복자를 사용할 때
// 전위보다 후위를 사용합니다. 후위 처리 속도가 더 빠르기 때문
// 전위 증가를 사용하면 새로운 객체를 반환하지만, 후위 증가를 사용하면 이전 객체를 참조하기 때문

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data({ 1, 2, 3 });

    for (vector<int>::iterator iter = data.begin();
            iter != data.end();
            ++iter)
    {
        cout << *iter << ", ";
    }

    for (auto iter = data.cbegin();
            iter != data.cend();
            ++iter)
    {
        cout << *iter << ", ";
    }

    for (auto iter = data.rbegin();
            iter != data.rend();
            ++iter)
    {
        cout << *iter << ", ";
    }

    data.clear();

    return 0;
}
