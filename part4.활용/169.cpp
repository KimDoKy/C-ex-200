// 구간 지정 for문
// 리스트 순회를 편리한 구간 지정 for문
// 반복자를 리턴할 수 있는 begin, end이 멤버 함수이어야 함. 그러한 자료형만 인자로 사용 가능

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data({ 10, 20, 30, 40 });

    cout << "== for, iterator ==" << endl;

    for (auto i = data.begin(); i != data.end(); ++i)
        cout << *i << ", ";

    cout << endl << "== range based for loop ==" << endl;

    for (const auto i : data)
        cout << i << ", ";

    cout << endl << "== range based for loop ==" << endl;

    for (auto &i : data)
        cout << i + 2 << ", ";

    cout << endl;
    
    return 0;
}
