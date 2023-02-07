//
// Created by 82104 on 2023-02-07.
// 04 자료형 - 정수 자료형

/* 자료를 형태에 따라 구분하고, 구분해서 인식하는 자료의 형태를 '자료형'이라고 한다.
 * 자료형 - 내장 자료형 - 기본 자료형 : 정수(int), 문자(char), 불(bool), 부동소수점(float), void
 *                   - 복합 자료형
 *       - 사용자 정의 자료형
 */

/*  정수 자료형
 *  - 소수점이 없는 숫자(정수)
 *  - 부호 o 자료형(보통 부호가 있음) / 부호 x 자료형(unsigned 접두사 사용), 양수만 사용
 *  short int <= int <= long int
 */

// 동전과 지폐들의 금액 합계를 구하는 프로그램
# include <iostream>
using namespace std;

int main()
{
//    // 상수 정의 (const)
//    const unsigned int _1000WonValue = 1000;
//    const unsigned int _5000WonValue = 5000;
//    const unsigned int _10000WonValue = 10000;
//    const unsigned int _50000WonValue = 50000;
//
//    // 변수 정의(지폐의 수)
//    unsigned int _1000Won;
//    unsigned int _5000Won;
//    unsigned int _10000Won;
//    unsigned int _50000Won;
//
//    // 변수 정의(갖고 있는 총 금액)
//    unsigned long totalValue;
//
//    // 입력받기(지폐 입력)
//    cout << "천원 지폐 :" ;
//    cin >> _1000Won;
//    cout << "오천원 지폐 :" ;
//    cin >> _5000Won;
//    cout << "만원 지폐 :" ;
//    cin >> _10000Won;
//    cout << "오만원 지폐 :" ;
//    cin >> _50000Won;
//
//    totalValue = _1000Won * _1000WonValue + _5000Won * _5000WonValue + _10000Won * _10000WonValue + _50000Won * _50000WonValue;
//
//    cout << "전체 나의 전재산은 " << totalValue << "원입니다^^" << endl;
//
//    // ----------------------------------------------------------------------------------------------------------------
//    // 변수 선언
//    int balance = totalValue;
//    int transaction;
//
//    // 첫번째 거래 후 잔액 조정
//    cout << "첫 번째 거래 금액 입력 :";
//    cin >> transaction;
//    balance = balance + transaction;
//
//    // 두번째 거래 후 잔액 조정
//    cout << "두 번째 거래 금액 입력 :";
//    cin >> transaction;
//    balance = balance + transaction;
//
//    // 세번째 거래 후 잔액 조정
//    cout << "세 번째 거래 금액 입력 :";
//    cin >> transaction;
//    balance = balance + transaction;
//
//    // 최종 잔액 출력
//    cout << "지혜님 국민은행 계좌의 총 잔액은 " << balance << "원입니다 분발하셔야겠습니다 ^^" << endl;
//
//
//    // ----------------------------------------------------------------------------------------------------------------
//    cout << "short int의 크기는 " << sizeof(short int) << "바이트입니다." << endl;
//    cout << "int의 크기는 " << sizeof(int) << "바이트입니다." << endl;
//    cout << "long int의 크기는 " << sizeof(long int) << "바이트입니다." << endl;

//    // ----------------------------------------------------------------------------------------------------------------
//    /* 변수를 초기화할 때 리터럴을 사용하는 프로그램 */
//    int x = -1245;
//    unsigned int y = 1245;
//    unsigned int z = -2367;
//    unsigned int t = 14.56;
//
//    cout << x << endl;  // -1245
//    cout << y << endl;  // 1245
//    cout << z << endl;  // 4294964929 / 음수값이 양수로 바뀜 (unsigned 로 설정하여 양수 밖에 없기 때문) => 논리 오류
//    cout << t << endl;  // 14 / 정수를 입력해야 하는데 실수 입력, 소수점 모두 잘림 => 논리 오류

    // ----------------------------------------------------------------------------------------------------------------
    /* 리터럴 값을 단독으로 사용하는 프로그램 */

    int x;
    unsigned long int y;
    x = 1456;
    y = -14567;

    cout << x << endl;          // 1456
    cout << y << endl;          // 4294952729
    cout << 1456 << endl;       // 1456
    cout << 163267L << endl;    // 163267   => long int(L) 로 표현
    cout << -14567UL << endl;   // 4294952729   => 부호 없음(U) long int(L)

}
