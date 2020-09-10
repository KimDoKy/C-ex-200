// 반복문을 이용하여 피보나치 수열 출력하기

#include <iostream>

using namespace std;

int main()
{
    int p = 0;
    int n = 1;
    int t = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            cout << n << ", ";

            t = n;
            n += p;
            p = t;
        }

        cout << endl;
    }

    return 0;
}
