//
// Created by 82104 on 2023-02-11.
// 07 [Lab] 응용 프로젝트
// 소프트웨어 개발 프로세스
// 1) 문제 이해 : 문제를 제대로 이해했는지 확인하기.
// 2) 알고리즘 개발 : 프로그램을 위한 알고리즘 개발하기. 개발할 때는 여러가지 도구 사용 가능
// 3) 코드 작성 : 개발한 알고리즘을 기반으로 C++ 코드 작성

# include <iostream>
#include <iomanip>

using namespace std;

int main() {
//// [1] 부동 소수점 분해하기 - 부동 소수점이 주어졌을 때 정수와 소수점 아래 부분을 추출하느 프로그램
//
//    double fPart;
//    int iPart;
//    double number;
//
//    cout << "부동 소수점 입력 :";
//    cin >> number;
//
//    iPart = static_cast<int>(number);
//    fPart = number - iPart;
//
//    // cout << fixed << showpoint << setprecision(2);
//    cout << "정수 부분 : " << iPart << endl;
//    cout << "소수점 아래 부분 : " << fPart << endl;


//// [2] 정수의 첫 번째 자릿수 추출하기
//    unsigned int num1, firstNum;
//
//    cout << "정수 입력 :";
//    cin >> num1;
//
//    firstNum = num1 % 10;
//
//    cout << "입력한 정수 : " << num1 << endl;
//    cout << "정수의 첫 번째 자릿수 : " << firstNum << endl;

//// [3] 초 단위의 시간을 시, 분, 초 단위로 나누어서 변환하기
//    unsigned long number, hours, minutes, seconds;
//
//    cout << "초 단위 시간 정수 입력 :";
//    cin >> number;
//
//    hours = number / 3600;
//    minutes = (number - (hours * 3600L)) / 60;
//    seconds = ((number - (hours * 3600L)) - minutes * 60);
//
//    cout << number << " 을 시, 분, 초로 나타내면 ";
//    cout << hours << "시간 " << minutes << "분 " << seconds << "초";

// [4] 평균과 분산 구하기 - 3개의 정수 읽고 전체 평균 구한 뒤, 각각의 분산 구하기
//                       (분산 : 특정 값이 평균에서 얼마나 떨어져있는가)
    int num1, num2, num3, sum;
    double averageNum, bun1, bun2, bun3;

    cout << "숫자1 입력 :";
    cin >> num1;
    cout << "숫자2 입력 :";
    cin >> num2;
    cout << "숫자3 입력 :";
    cin >> num3;

    sum = num1 + num2 + num3;
    averageNum = static_cast<double>(sum) / 3;

    bun1 = num1 - averageNum;
    bun2 = num2 - averageNum;
    bun3 = num3 - averageNum;

    cout << fixed << setprecision(2);
    cout << "숫자1, 2, 3 평균 : " << left << setw(9) << averageNum << endl;
    cout << "숫자1 분산 : " << left << showpos << setw(9) << bun1 << endl;
    cout << "숫자2 분산 : " << left << showpos << setw(9) << bun2 << endl;
    cout << "숫자3 분산 : " << left << showpos << setw(9) << bun3 << endl;
    // setw(9) : 메모리 자릿수가 9자리이다. setfill('*') 하면 나머지 자리 * 로 채워짐
    // showpos : 양수이면 + 표시, 음수이면 - 표시 나타내줌


}