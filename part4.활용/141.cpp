// using 사용하기
// 특정 네임스페이스 사용 선언이나 typedef를 대체할 수 있음

#include <iostream>
#include <vector>

namespace MyArea
{
    int Plus(int x, int y)
    {
        return x + y;
    }
}

using namespace std;
using namespace MyArea;
using MyVector = vector<int>;

int main()
{
    MyVector data;
    data.push_back(1);
    data.push_back(2);

    cout << "Data: " << data.at(0) << ", " << data.at(1) << endl;
    // MyArea를 using namespace로 선언했기 때문에 MyArea 영역의 요소를 사용할 수 있음
    cout << "Plus: " << Plus(2, 4) << endl;

    return 0;
}

// typedef보다는 using이 더 효율적
