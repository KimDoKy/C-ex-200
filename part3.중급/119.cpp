// Friend 함수 사용하기
// private, protected 영역에 접근할 함수를 지정하는 방법
// friend는 외부의 모든 접근을 허용하기 때문에 매우 제한적으로 사용하거나 사용하지 않는 것이 좋음
// friend는 객제지향 특성 중 하나인 정보은닉을 깨뜨림

#include <iostream>
#include <string>

using namespace std;

class Ondal {
public:
    friend void GetYear(Ondal ondal)
    {
        cout << "아단성 전투 연도: " << ondal.year_ << endl;
    }

    void SetYear(int year) { year_ = year; }

private:
    int year_;
};

int main()
{
    Ondal ondal;
    ondal.SetYear(590);

    GetYear(ondal);

    return 0;
}
