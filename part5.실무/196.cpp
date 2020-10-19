// Json 파일에 내용 쓰기(Value, StyleWriter)
// Value로 트리를 구성하고 StyleWriter로 Value를 출력

#include <string>
#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
    // json 파일 생성
    ofstream json_file;
    json_file.open("json_exam.json");

    Value main;
    main["Job1"] = "developer";
    main["Job2"] = "author";


    Value sub1;
    sub1["Sub1"] = "Sub1";
    sub1["Sub2"] = "Sub2";
    main["SubItems"] = sub1;

    main["Sub3"] = "blogger";

    // StyleWriter는 value를 출력하도록 도움
    // Write 함수를 이용해 문자열로 변환하여 출력
    StyledWriter writer;
    string str = writer.write(main);
    cout << str << endl << endl;

    // 파일에 json 요소를 저장
    json_file << writer.write(main);
    json_file.close();

    return 0;
}
