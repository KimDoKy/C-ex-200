// 반복자 iterator 거리 구하기 (distance)
// 컨테이너 요소의 거리 차이를 알아내는 방법
// distance 함수를 사용하여 확인
// 비교하는 요소에 따라 결과에서 1차이가 발생

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> data{5, 9, 7, 4, 3, 8, 6};
    cout << "distance1: " << distance(data.begin(), data.end()) << endl;

    vector<int>::iterator end_it = data.end() - 1;
    cout << "distance2: " << distance(data.begin(), end_it) << endl;

    vector<int>::iterator max_it = max_element(data.begin(), data.end());
    cout << "distance3: " << distance(data.begin(), max_it) << endl;

    vector<int>::iterator min_it = min_element(data.begin(), data.end());
    cout << "distance4: " << distance(data.begin(), min_it) << endl;

    cout << "distance5: " << distance(max_it, min_it) << endl;

    return 0;
}
