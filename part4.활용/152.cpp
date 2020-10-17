// vector 사용하기
// (assign, at, front, back, empty, size)
// 벡터는 리스트와 함께 가장 많이 사용하는 컨테이너

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data;

    // assign은 일괄적으로 특정 영역에 데이터를 설정
    // 기존 데이터는 삭제
    data.assign(5, 100);

    for (int i = 0; i < data.size(); i++)
        // at은 벡터 내부 인덱스
        cout << "data " << i << " : " << data.at(i) << endl;

    data.front() = 1;
    data.back() = 2;

    if (data.empty() == true)
    {
        cout << "벡터가 비어 있습니다." << endl;
    }
    else
    {
        for (int i = 0; i < data.size(); i++)
            cout << "data " << i << " : " << data.at(i) << endl;
    }
    
    return 0;
}
