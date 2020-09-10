// enum class 이해하기
// enum의 한계를 극복하기 위해 만들어진 enum class
// enum class는 같은 이름의 요소를 여러 곳에서 사용할 수 있도록 지원하기 때문에 어느 열거형의 어느 요소인지를 명확히 기입해야 한다.

#include <iostream>

using namespace std;

/*
enum Status
{
    normal = 0,
    abnormal,
    disconnect = 100,
    close
};
*/

enum class MachineStatus : char
{
    normal = 'n',
    abnormal,
    disconnect = 100,
    close
};

int main()
{
    MachineStatus machine = MachineStatus::abnormal;

    if (machine == MachineStatus::normal)
        cout << "Stauts : normal" << endl;
    else if (machine == MachineStatus::abnormal)
        cout << "Status : abnormal" << endl;
    else if (machine == MachineStatus::disconnect)
        cout << "Stauts : disconnect" << endl;
    else
        cout << "Status : close" << endl;

    cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

    return 0;
}
