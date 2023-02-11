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


// [2] 정수의 첫 번째 자릿수 추출하기
    unsigned int num1, firstNum;

    cout << "정수 입력 :";
    cin >> num1;

    firstNum = num1 % 10;

    cout << "입력한 정수 : " << num1 << endl;
    cout << "정수의 첫 번째 자릿수 : " << firstNum << endl;



}