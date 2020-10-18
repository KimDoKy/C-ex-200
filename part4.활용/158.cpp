// list 합치기, 이어 붙이기 (merge, splice)
// 두 개의 리스트를 합쳐 하나의 컨테이너로 만드는 방법
// merge와 splice는 실행 결과와 사용 방법이 다름

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> data1;
    list<int> data2{ 3, 4, 5 };

    data1.push_back(2);
    data1.push_back(7);

    data1.merge(data2);

    cout << "== List Merge ==" << endl;
    for (list<int>::iterator it = data1.begin();
            it != data1.end();
            ++it)
    cout << endl;

    data2 = { 3, 4, 5 };
    data1.splice(data1.begin(), data2);

    cout << "== List Splice ==" << endl;
    for (auto it = data1.begin();
            it != data1.end();
            ++it)

    return 0;
}
