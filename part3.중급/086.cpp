// 배열 일부 변경하기 (fill)
// 배열 중간의 일부 영역을 특정 값으로 변경하는 fill 함수
// 일정 영역을 일괄적으로 변경하는데 유용

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int data1[10] { 0, };
    fill(data1, data1 + 3, 10);
    fill(data1 + 4, data1 + 8, 20);

    cout << "== data1 결과 ==" << endl;

    for (int i = 0; i < 10; i++)
        cout << data1[i] << ", ";

    vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7 });
    fill(data2.begin(), data2.begin() + 3, 30);

    cout << endl << endl << "== data2 결과 ==" << endl;

    for (int i = 0; i < data2.size(); i++)
        cout << data2.at(i) << ", ";

    return 0;
}
