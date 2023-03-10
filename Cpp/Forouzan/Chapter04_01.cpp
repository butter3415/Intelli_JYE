// <04 조건문>
// Created by 82104 on 2023-02-13.
// 01 조건문의 개요

// 조건문 : 관계표현식, 일치표현식 존재
// - 관계표현식 : 두 값을 비교하기 위해 4가지 종류의 관계 연산자 사용
// - 일치표현식 : 두 엔티티가 동일한지 판별

# include <iostream>
#include <iomanip>

using namespace std;

int main() {

// [3] if 조건문 (단방향 조건 분기)
// : 조건에 따라 어떤 작업을 할 것인지 또는 하지 않을 것인지를 표현할 때 사용
// : 문장 하나만 실행할 때는 중괄호를 사용하지 않아도 상관 없음.
// : 조건문 사용 부분이라는 것은 명확하게 나타낼 수 있도록 중괄호를 사용하는 것이 좋음.

//// * if 조건문을 사용해서 절대값을 계산하고 출력하는 프로그램
//    int number;
//
//    cout << "정수 입력 : " ;
//    cin >> number;
//
//    if(number < 0){
//        number = -number;
//    }
//
//    cout << "입력한 숫자의 절대값 = " << number;
//
//// * if 조건문을 사용해서 초과 근무 시간이 있는 급여 계산하기
//
//    long hour, hourpay, basicpay, totalpay, pluspay;
//
//    cout << "일한 시간은 ?";
//    cin >> hour;
//    cout << "시간당 급여는 ?";
//    cin >> hourpay;
//
//
//    if (hour > 40.0){
//        basicpay = 40 * hourpay;
//        pluspay = (hour - 40) * hourpay * 1.30 ;
//        totalpay = basicpay + pluspay;
//    }
//    if (hour <= 40.0){
//        basicpay = hour * hourpay;
//        pluspay = 0.0;
//        totalpay = basicpay;
//    }
//
//    cout << showpoint;
//    cout << "기본급 = " << setprecision(2) <<basicpay << endl;
//    cout << "연장 수당 = " << setprecision(2) << pluspay << endl;
//    cout << "총 급여 = " << setprecision(2) << totalpay << endl;
//    // ↑ =======================지혜 방식======================= ↑

//    double hours, rate, regularPay, overPay, totalPay;
//
//    cout << "업무 시간을 입력하세요 :";
//    cin >> hours;
//    cout << "시간당 급여를 입력하세요 :";
//    cin >> rate;
//
//    regularPay = hours * rate;
//    overPay = 0.0;
//
//    if(hours > 40.0){
//        overPay = (hours - 40.0) * rate * 0.30;
//    }
//
//    totalPay = regularPay + overPay;
//
//    cout << fixed << showpoint;
//    cout << "일반 급여 = " << setprecision(2) << regularPay << endl;
//    cout << "초과 근무에 대한 급여 = " << setprecision(2) << overPay << endl;
//    cout << "전체 급여 = " << setprecision(2) << totalPay << endl;

// 주의사항
// - 일치 연산자가 아니라 할당 연산자를 사용하는 경우 : 일치 연산자 (==) / 할당 연산자(=) 헷갈리지 않기!
// - 괄호 생략한 경우 : 조건문 안에 여러 문장 작성하였으나 중괄호 사용하지 않으면 실행 X!
// - 불필요한 세미콜론을 붙인 경우 : if 조건문은 헤더와 문장 하나를 본문으로 가짐 (Ex. if(x==0);{} => 헷갈리지 않기)

// [4] if-else 조건문(양방향 조건 분기)
// : 조건 표현식이 true라면 문장1 실행,  문장2 무시 / 조건 표현식이 false라면 문장2 실행, 문장1 무시
// : 문장1과 문장2는 절대 동시에 실행될 수 없다.

//// * if-else 조건문 사용해서 합격/ 불합격 학점 찾기
//    int score;
//
//    cout << "점수 :" ;
//    cin >> score;
//
//    if (score >= 70){
//        cout << "pass!";
//    } else if (score < 70){
//        cout << "fail!";
//    }

//// * if-else 조건문을 사용해서 입력받은 더 큰 숫자 또는 숫자가 같을 경우 첫 번째 숫자를 출력하는 프로그램
//    int num1, num2, maxNum;
//
//    cout << "첫 번째 수 :";
//    cin >> num1;
//    cout << "두 번째 수 :";
//    cin >> num2;
//
//    if (num1 > num2){
//        maxNum = num1;
//    } else if (num2 > num1){
//        maxNum = num2;
//    } else if (num1 == num2){
//        maxNum = num1;
//    }
//
//    cout << "더 큰 숫자는 " << maxNum << "이다!" << endl;
// 깃은 너무 어렵다..

//// 중첩 if-else 조건문
//
//// * 입력받은 두 숫자가 왼쪽이 더 큰지, 같은지, 더 작은지 출력하는 프로그램
//    long num1, num2;
//
//    cout << "첫 번째 숫자 :";
//    cin >> num1;
//    cout << "두 번째 숫자 :";
//    cin >> num2;
//
//    if (num1 > num2){
//        cout << num1 << "이 더 큽니다(첫번째 수)" << endl;
//    } else if (num1 == num2){
//        cout << num1 << "과(와) " << num2 << "은(는) 같습니다." << endl;
//    } else if (num1 < num2){
//        cout << num2 << "이 더 큽니다(두번째 수)" << endl;
//    }
//// * 복합 구문을 사용해서 명확하게 짝을 맞춰야 합니다.

// [5] if-else 조건문(여러 방향 조건 분기)
// if-else 조건문을 중첩해서 사용하면 이와 같은 여러 방향 조건 분기를 구현할 수 있습니다.
/* 만약 조건1이 true라면 -> 문장1 실행
 * 만약 조건2가 true라면 -> 문장2 실행
 * ...
 * 위의 조건이 모두 false라면 -> 문장5 실행
 * ====================================
 * if(조건1)
 *      문장1;
 * else if(조건2)
 *      문장2;
 * else if(조건3)
 *      문장3;
 * else if(조건4)
 *      문장4;
 * else
 *      문장5;
 */

// * 여러 방항 조건 분기를 사용해서 학점을 구하는 프로그램
// * 90 이상 - A, 80 이상 - B, 70 이상 - C, 60 이상 - D, 나머지 F

    int score;
    char grade;

    cout << "점수 :" ;
    cin >> score;

    if (score <= 100) {
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        cout << "두둥! 당신의 학점은!? [ " << grade << " ] 입니다!";

    } else if (score > 100){
        cout << "점수는 100점 이상 받을 수 없습니다.";
    }

}