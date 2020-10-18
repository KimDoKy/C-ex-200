// for_each 반복문 사용하기(표준)
// C++ 표준에 포함된 for_each 반복문
// for와 each 사이에 _가 있으며, 컨테이너를 사용할 수 있다

#include <iostream>
#include <vector>
#include <algorithm> // for_each 를 사용하기 위해

using namespace std;

int main()
{
    vector<int> data({ 10, 20, 30, 40 });

    cout << "== for_each 람다 ==" << endl;
    
    for_each(data.begin(), data.end(), [](int i){ cout << i << ", "; });

    cout << endl << "== for_each 람다 함수1 ==" << endl;

    auto Print = [](int x){ cout << x + x << ", "; };

    for_each(data.begin(), data.end(), Print);

    cout << endl << "== for_each 람다 함수2 ==" << endl;

    int y = 11;

    for_each(data.begin(), data.end(), [y](int x){ cout << x + y << ", "; });

    cout << endl;

    return 0;
}
