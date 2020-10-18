// 람다에서 특정 조건 검색하기 (find_if, count_if)
// 특정 조건에 만족하는 값과 개수를 람다로 알아내는 방법
// 만족하는 값은 find_if, 만족하는 개수는 count_if

// find_if(시작, 끝, 함수) / count_if도 동일

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int number = 4;

    vector<int> data{ 4, 1, 3, 5, 2, 3, 1, 7 };
    
    vector<int>::iterator result1 = find_if(data.begin(), data.end(), [number](int i)
            {
            return i > number;
            });

    cout << "4보다 큰 첫 번째 정수 : " << *result1 << endl;

    auto result2 = count_if(data.begin(), data.end(), [number](int i)  // result1과 같지만 auto로 간소화
            {
            return i > number;
            });

    cout << "4보다 큰 정수 개수 : " << result2 << endl;

    return 0;
}

