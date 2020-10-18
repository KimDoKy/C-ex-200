// 두 영역의 차집합 구하기(set_diffrence)
// 두 개의 컨테이너를 비교하여 차집합을 구함

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> data1 = { 1, 3, 5, 7, 9 };
    vector<int> data2 = { 2, 4, 6, 7, 9 };
    vector<int> diff1;
    vector<int> diff2;

    set_difference(data1.begin(), data1.end(), data2.begin(), data2.end(), inserter(diff1, diff1.begin()));


    set_difference(data1.begin() + 2, data1.end(), data2.begin() + 2, data2.end(), inserter(diff2, diff2.end()));

    cout << "== diff1 ==" << endl;
    for (auto i : diff1)
        cout << i << ", ";

    cout << endl << "== diff2 ==" << endl;
    for (auto i : diff2)
        cout << i << ", ";

    return 0;
}
