//
// Created by 82104 on 2023-02-11.
// 04 오버플로우와 언더플로우

// 컴퓨터의 시스템에서 숫자를 사용할 경우 자료형에 따라 사용 가능한 메모리가 한정되어 있다.
// 자료형의 최대값보다 크거나 최소값보다 작은 값을 저장하려고 하면 문제가 발생하는데 이 문제를 '오버플로우와 언더플로우' 라고 한다.

# include <iostream>
# include <limits>
using namespace std;

int main() {

// [2] 정수의 오버플로우와 언더플로우
// - 부호 없는 정수의 오버플로우와 언더플로우
//   오버플로우, 언더플로우 발생하면 한바퀴를 돌아 범위를 지키려고 한다.
//   <오버플로우(범위보다 큰 값 입력) : 시계 방향 >
//   <언더플로우(범위보다 작은 값 입력) : 시계 반대 방향>

//  * 부호 없는 정수 자료형의 오버플로우와 언더플로우 확인하기
//    unsigned int num1 = numeric_limits<unsigned int>::max();
//    unsigned int num2 = numeric_limits<unsigned int>::min();
//    cout << "부호 X 정수 최대값 : " << num1 << endl;   // 4294967295
//    cout << "부호 X 정수 최소값 : " << num2 << endl;   // 0
//
//    num1 += 1;  // 4294967295 + 1
//    num2 -= 1;  // 0 - 1
//
//    cout << "오버플로우가 일어난 num1 +1 값 : " << num1 << endl;  // 0 (시계 방향)
//    cout << "언더플로우가 일어난 num2 -1 값 : " << num2 << endl;  // 4294967295 (시계 반대 방향)

// 부호 있는 정수의 오버플로우와 언더플로우
// 양수 최대값보다 큰 값 -> 음수 최대값
// 음수 최소값보다 작은 값 -> 양수 최대값

// * 부호 있는 정수 자료형의 오버플로우와 언더플로우 확인하기

//    int num1 = numeric_limits<int>::max();
//    int num2 = numeric_limits<int>::min();
//
//    cout << "부호 O 정수 최대값 : " << num1 << endl;
//    cout << "부호 O 정수 최소값 : " << num2 << endl;
//
//    num1 += 1;  // 2147483647
//    num2 -= 1;  // -2147483648
//
//    cout << "오버플로우 발생 num1 : " << num1 << endl; // -2147483648
//    cout << "언더플로우 발생 num2 : " << num2 << endl; // 2147483647

// [3] 부동 소수점의 오버플로우와 언더플로우
// ! 부동 소수점 자료형은 무조건 부호가 있다
// ! 범위 한 바퀴 도는 현상 x
// ! 오버플로우는 양의 무한대로 수렴 / 언더플로우는 음의 무한대로 수렴
// ! 부동 소수점에서 최소값 : 0에 가장 가까운 숫자
// ! 부동 소수점에서 최대값 : 표현할 수 있는 가장 작은 수와 가장 큰 수(양쪽 끝)
// ! 최대값에서 더 작아지거나 증가하면 양의 무한대(+inf) or 음의 무한대(-inf) 발생

// * double 자료형의 오버플로우와 언더플로우 확인하기

    double num1 = +numeric_limits<double>::max();
    double num2 = -numeric_limits<double>::max();

    cout << "double 최대값 : " << num1 << endl;
    cout << "double 최소값 : " << num2 << endl;

    num1 *= 1000.00;
    num2 *= 1000.00;

    cout << "오버플로우 발생 num1 * 1000.00 : " << num1 << endl;
    cout << "언더플로우 발생 num2 * 1000.00 : " << num2 << endl;




}