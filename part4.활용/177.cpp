// 조건에 맞춰 영역을 분할하기 (partition, partition_point)
// 데이터를 분할하고 분할된 영역의 위치를 확인
// pratition으로 나누고, partition_point으로 분할된 위치를 얻음

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i){ return (i % 2) == 1; }

int main()
{
    vector<int> data1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    vector<int> data2;

    // 컨테이너 내부의 요소들은 true/false 영역을 기준으로 주소가 변경됨
    partition(data1.begin(), data1.end(), IsOdd);

    // partition으로 분리된 컨테이너이 위치값을 얻으려면 partition_point도 partition 함수와 같은 인자를 사용해야 함
    // 다른 조건을 이용하면 리턴값은 없음. 반드시 값은 조건을 사용해야 함
    auto result = partition_point(data1.begin(), data1.end(), IsOdd);

    // partition 결과를 빈 컨테이너에 삽입
    data2.assign(data1.begin(), result);

    for (int x : data2)
        cout << x << ", ";

    return 0;
}
