// for each 반복문 (C++/CLI)
// for 반복문을 사용하는 또 다른 방법
// for each는 비쥬얼 스튜디오에서만 사용 가능

#include <iostream>

using namespace std;

int main()
{
    int data[] = { 10, 20 , 30, 40 };

    for each (int &i in data)
        i += 10;

    cout << "==  for each ==" << endl;

    for each (const int i in data1)
        cout << i << ", ";

    cout << endl;

    return 0;
}
