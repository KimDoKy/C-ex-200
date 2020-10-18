// 분할한 영역 저장하기 (partition_copy)
// 데이터를 분할하고 다른 컨테이너에 바로 저장하는 방법
// partition_copy를 사용하여 분할된 영역을 다른 컨테이너로 바로 저장

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i){ return (i % 2) == 1; }

int main()
{
    vector<int> data1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    vector<int> odd;
    vector<int> even;

    // back_inserter는 크기를 지정할 수 없는 상황에서 컨테이너의 맨 뒤에 요소를 추가할 때 사용
    partition_copy(data1.begin(), data1.end(), back_inserter(odd), back_inserter(even), IsOdd);

    cout << "== 홀수 ==" << endl;
    for (int x : odd)
        cout << x << ", ";

    cout << endl << "== 짝수 ==" << endl;
    for (int x : even)
        cout << x << ", ";

    return 0;
}
