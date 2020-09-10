// 난수 생성하기 (srand, rand)

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < 5; i++)
        cout << "난수 : " << rand() << endl;

    return 0;
}

// C++에서 제공하는 난수 엔진 템플릿
// 1. random_device
// 2. linear_congruenial_engine
// 3. mersenne_twister_engine
// 4. subtract_carry_engine
