// 예외 처리 응용하기 (사용자 정의, runtime_error)
// 예외 처리 용도의 클래스를 정의하려 사용
// runtime_error를 상속 받아 사용자 정의 예외 처리 클래스를 만들 수 있음

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// runtime_error를 상속받아야 try catch에서 사용 가능
// runtime_error는 메시지를 출력하는 요소
class InputError : public runtime_error
{
public:
    InputError(int idx, string msg)
        : runtime_error("")
    {
        cout << idx << "번 인덱스에 잘못된 입력값: " << msg << endl;
    }
};

int main()
{
    vector<int> data;
    data.push_back(1);

    int idx = 10;
    int value = 20;

    try
    {
        if (idx >= data.size())
            throw InputError(idx, to_string(value));
        data.at(idx) = 99;
    }
    catch (InputError e)
    {
        cout << e.what();
    }

    return 0;
}
