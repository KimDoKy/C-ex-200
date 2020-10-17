// vector 사용하기 (벡터 수정)
// 벡터가 보유한 정보를 자유롭게 수정하는 방법
// swap, insert, erase, pop_back, push_back

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data1({ 1, 2, 3 });
    vector<int> data2 = { 10, 20, 40 };

    // swap은 벡터 데이터를 서로 바꿈
    data1.swap(data2);
    data1.insert(data1.begin() + 1, 20);

    cout << "== data1 ==" << endl;

    for (int i = 0; i < data1.size(); i++)
        cout << "data1 (" << i << ") : " << data1.at(i) << endl;

    cout << endl << "== data2 ==" << endl;

    for (int i = 0; i < data2.size(); i++)
        cout << "data2 (" << i << ") : " << data2.at(i) << endl;

    // erase 는 지정한 범위 데이터를 삭제
    // 2개 삭제
    data2.erase(data2.begin(), data2.begin() + 2);

    data2.push_back(100);
    data2.push_back(200);
    data2.push_back(300);
    data2.pop_back();


    // 첫번째 인자는 벡터에 삽입될 위치
    // 두번째 인자는 복사할 벡터의 시작위치
    // 세번째 인자는 복사할 벡터의 종료 위치
    data2.insert(data2.end(), data1.begin(), data1.end());

    cout << endl << "== data2 ==" << endl;

    for (int i = 0; i < data2.size(); i++)
        cout << "data2 (" << i << ") : " << data2.at(i) << endl;

    return 0;
}
