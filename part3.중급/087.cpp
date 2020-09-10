// 배열 일부 변경하기 (fill_n)
// 배열 중간의 일부 영역을 특정 값을 변경
// fill과 fill_n의 차이점은 두 번째 인자
// fill은 범위, fill_n은 갯수

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int data1[10]{ 0, };
    fill_n(data1, 2, 10);
    fill_n(data1 + 4, 3, 20);

    cout << "== data1 결과 ==" << endl;

    for (int i = 0; i < 10; i++)
        cout << data1[i] << ", ";

    vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7 });
    fill_n(data2.begin(), data2.size()-1, 30);
    fill_n(data2.begin(), 4, 40);

    cout << endl << endl << "== data2 결과 ==" << endl;

    for (int i = 0; i < data2.size(); i++)
        cout << data2.at(i) << ", ";

    return 0;
}
