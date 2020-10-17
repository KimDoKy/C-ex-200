// tuple 사용하기 (piecewise_construct)
// 튜플의 요소를 개별로 분할하여 이용하는 방법
// 튜플의 개별 요소를 따로 인자로 받아 pair로 변환

// pair를 생성할 때, 튜플을 인자로 사용하지 않고
// 튜플 내부 요소들을 인자로 사용할 수 있음 (piecewise_construct)

#include <iostream>
#include <tuple>

using namespace std;

struct TupleExam {
    // 튜플을 인자로
    TupleExam(tuple<int, string>) {
        cout << "Tuple로 인자 전달" << endl;
    }

    // 튜플을 구성하는 자료형을 분리하여
    TupleExam(int n, string s) {
        cout << "piecewise_construct로 인자 전달" << endl;
    }
};

int main()
{
    tuple<int, string> data(1, "str");

    // pair를 생성하는데 인자로 data 튜플을 전달
    pair<TupleExam, TupleExam> data1(data, data);
    // 위처럼 data 튜플을 전달하는데
    // piecewise_construct를 주어 튜플을 구성하는 요소들을 분할하여
    // 인자로 전달
    pair<TupleExam, TupleExam> data2(piecewise_construct, data, data);
    // 새로운 2개의 튜플을 전달
    pair<TupleExam, TupleExam> data3(make_tuple(2, "str"), make_tuple(2, "str"));
    pair<TupleExam, TupleExam> data4(piecewise_construct, make_tuple(2, "str"), make_tuple(2, "str"));

    return 0;
}
