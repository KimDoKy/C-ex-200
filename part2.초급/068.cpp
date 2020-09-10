// 정수와 문자의 최대/최소값 알아내기 (min, max)
// 정수나 문자의 최대, 최소값을 알아내기
// auto는 반환형이 무엇인지 모를때 사용하는 키워드
// min()은 인자중 제일 작은 값을 리턴
// max()는 인자중 제일 큰 값을 리턴
// minmax()는 인자중 제일 작은 값(first)과 큰 값(second)을 리턴

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    auto result1 = min(1,5);
    auto result2 = max('a', 'z');

    cout << result1 << ", " << result2 << endl;

    auto result3 = minmax({ 'a', 'n', 'z' });
    auto result4 = minmax({ 1, 2, 3 });

    cout << result3.first << ", " << result3.second << endl;
    cout << result4.first << ", " << result4.second << endl;

    return 0;
}
