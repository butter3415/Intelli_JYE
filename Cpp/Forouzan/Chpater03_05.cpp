//
// Created by 82104 on 2023-02-11.
// 05 데이터 형식 조정

# include <iostream>
# include <iomanip>

using namespace std;

int main() {
//// [1] 조정자 : 자료형은 표준 형식으로 값이 입출력되는데 상황에 따라 입출력 형식을 바꿔야 할때 사용
//
//// [2] 출력 조정자
//// - 매개변수가 없는 조정자 : endl 제외한 모든 조정자는 1회만 지정하면 계속해서 적용.
//
//// 불 리터럴 조정자 (noboolalpha, boolalpha)
//// ! noboolalpha : 0 or 1 출력
//// ! boolalpha : true or false 출력
//
//// * 불 자료형 boolalpha 조정자 사용
//    bool x = true;
//    bool y = false;
//
//    cout << "기본적인 x 출력 : " << x << endl;    // 1
//    cout << "기본적인 y 출력 : " << y << endl;    // 0
//
//    cout << "조정자 사용 x 값 : " << boolalpha << x << endl;  // true
//    cout << "y 값 : " << y << endl;  // false / 위에서 boolalpha 사용하여 사용하지 않아도 계속 적용
//
//// 숫자 진법 변경 조정자 (dec, oct, hex)
//// - 출력할 때 10진법, 8진법, 16진법 등 다른 진법으로 출력할 때
//
//// 진법의 접두사를 붙이는 조정자 (noshowbase, showbase)
//// - 10 진수 :  아무것도 붙지 않음  / 8진수 : 0 붙음 / 16진수 : 0x붙음
//
//// * 정수를 여러 진법(10진법, 8진법, 16진법)으로 출력
//    int x = 1237;
//
//    cout << "x 10진수 값 : " << x << endl;
//    cout << "x 8진수 값 : " << oct << x << endl;
//    cout << "x 16진수 값 : " << hex << x << endl;
//
//    cout << "x 10진수 값 : " << showbase << dec << x << endl;
//    cout << "x 8진수 값 : " << showbase << oct << x << endl;
//    cout << "x 16진수 값 : " << showbase << hex << x << endl;
//
//// 고정 소수점 출력 조정자, 과학 표기법 출력 조정자 (fixed, scientific)
//
//// 소수점 아래 부분 출력 조정자 (showpoint)
//
//// * 부동 소수점 자료형과 관련된 몇 가지 조정자 사용
//    double x = 1237;
//    double y = 12376745.5623;
//
//    cout << "x 고정 소수점 형식 : " << x << endl;  // 1237
//    cout << "y 고정 소수점 형식 : " << showpoint << x << endl; // 1237.00
//
//    cout << "y 과학적 표기법 형식 : " << y << scientific << endl; // 1.23767e+007
//
//// 양수 부호를 붙이는 조정자 (showpos)
//
//// 숫자 관련 문자를 대문자로 출력하는 조정자 (uppercase)
//
//// 숫자의 배치를 조정하는 조정자 (left, internal, right)
//
//
//// 매개변수가 있는 조정자 <iostream> 헤더 & <iomanip> 헤더 필요
//
//// setprecision(n) 조정자 - 괄호 안 정수(n)로 소수점 뒤 몇 자리까지 출력할지 지정
//// setw(n) 조정자 - 괄호 안 정수(n)는 전체 필드 크기, 필드 크기는 정수 부분, 소수점, 소수점 아래 부분 모두 합친 길이
////               - 필요할 때마다 사용
//// setfill(ch) 조정자 - 필드의 크기가 실체 출력 내용보다 클 때 발생하는 패딩을 어던 문자로 채울지 지정할 때 사용
////                   - 괄호 안에는 리터럴 문자넣기

// * 부동 소수점 관련 조정자 사용
    double x = 1237234.1235;
    cout << fixed << setprecision(2) << showpos << setfill('*') << endl;
    cout << setw(15) << left << x << endl;  // +1237234.12****
    cout << setw(15) << internal << x << endl;  // +****1237234.12
    cout << setw(15) << right << x << endl; //****+1237234.12



}