//
// Created by 82104 on 2023-02-10.
// 02 자료형 변환

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

// 01 자료형 변환의 필요성
// {산술 자료형이 아닌 자료형에 산술 연산자를 더하면 ??? ex. bool타입 자료형 + 산술 자료형 = ???}
// {이항 연산자 사용 시 피연산자의 자료형이 다르면 ???}
// 이때 필요한 것이 [암묵적 자료형 변환(자동 변환) & 명시적 자료형 변환(강제 변환)]

// 02 암묵적 자료형 변환 - 암묵적 자료형 승격/ 암묵적 자료형 변경 존재
// 암묵적 자료형 승격 : 자료형의 피연산자를 더 큰 자료형으로 승격시킴.
// 암묵적 자료형 변경 : 이항 연산자 사용 시 두 자료형의 자료형 맞춤.

// - 암묵적 자료형 승격 [ bool -> int / char -> int / short -> int / unsigned short -> unsigned int / float -> double ]

// * 산술 연산자가 없는 자료형(bool, char, short, float)에 산술 연산자 적용하여 암묵적 자료형 변환하기
    bool b1 = true;
    char c1 = 'A';
    short s1 = 14;
    float f1 = 34.15;

    cout << "b1 + 100 자료형 : " << typeid(b1 + 100).name() << endl;      // int
    cout << "b1 + 100 값 : " << b1 + 100 << endl;                        // 101
    cout << "c1 + 1000 자료형 : " << typeid(c1 + 1000).name() << endl;    // int
    cout << "c1 + 1000 값 : " << c1 + 1000 << endl;                      // 1065
    cout << "s1 * 100 자료형 : " << typeid(s1 * 100).name() << endl;      // int
    cout << "s1 * 100 값 : " << s1 * 100 << endl;                        // 1400
    cout << "f1 + 150.25 자료형 : " << typeid(f1 + 150.25).name() << endl;// double
    cout << "f1 + 150.25 값 : " << f1 + 150.25 << endl << endl;                  // 184.4


// - 암묵적 자로형 변경
//      부가 작용 없는 경우 [ (낮음) int -> unsigned int -> long -> unsigned long -> double -> long double (높음) ]

// * 부가 작용이 없는 여러 자료형이 사용된 표현식의 암묵적 자료형 변환 *

    int i1 = 103;
    long l1 = 140;
    double d1 = 114.330;

    cout << "int + long 자료형 : " << typeid(i1 + l1).name() << endl;              // long
    cout << "int + long 값 : " << i1 + l1 << endl;                                // 243
    cout << "int + long + double 자료형 : " << typeid(i1 + l1 + d1).name() << endl;// double
    cout << "int + long + double 값 : " << i1 + l1 + d1 << endl << endl;          // 357.33

//      부가 작용 있는 경우
//      [ int 변수 = float 값 -> float 값을 int로 변환해서 저장 / float 변수 = int 값 -> int 값을 float으로 변환해서 저장]

// * 자료형이 섞인 표현식의 자료형 변환 확인 *

    int i2;
    double d2;

    i2 = 2248.34;
    d2 = 2231;
    float f2;

    cout << "i2 = 2248.34 자료형 : " << typeid(i2 = 2248.34).name() << endl;   // int
    cout << "할당 후 i2 값 : " << i2 << endl << endl;                          // 2248
    cout << "d2 = 2231 자료형 : " << typeid(d2 = 2231).name() << endl;         // double
    cout << "할당 후 d2 값 : " << d2 << endl;                                   // 2231
    cout << "float 변수 = int 값 : " << typeid(f2 = 152).name() << endl;       // float
    cout << "float 변수 = int 값 : " << f2 << endl;                            // 8.99945e-039



}