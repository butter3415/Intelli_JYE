// 04 조건문
// Created by 82104 on 2023-02-19.
// 04. 프로그래밍 문제

# include <iostream>
using namespace std;

int main() {
//// *01. 사용자로부터 부호 없는 두 자리 정수를 입력받고, 자리수의 값을 바꿔서 출력하는 프로그램을 만드시오.
//    int number, firstNum, secondNum, changeNum;
//
//    cout << "두 자리 정수 입력 :";
//    cin >> number;
//
//    firstNum = number / 10;
//    secondNum = number % 10;
//
//    changeNum = (secondNum * 10) + (firstNum * 1);
//
//    cout << "자릿수 값을 바꾼 정수 : " << changeNum ;

//// * 02. 3개의 정수를 입력받고, 가장 작은 것을 출력하는 프로그램을 만드세요.
//    int num1, num2, num3, minNum;
//
//    cout << "첫 번째 정수 :";
//    cin >> num1;
//    cout << "두 번째 정수 :";
//    cin >> num2;
//    cout << "세 번째 정수 :";
//    cin >> num3;
//
//    if ((num1 < num2) && (num1 < num3)){
//        minNum = num1;
//        cout << "3개의 값 중 가장 작은 수는 " << minNum << "이다." << endl;
//    } else if ((num2 < num1) && (num2 < num3)){
//        minNum = num2;
//        cout << "3개의 값 중 가장 작은 수는 " << minNum << "이다." << endl;
//    } else if ((num3 < num1) && (num3 < num2)){
//        minNum = num3;
//        cout << "3개의 값 중 가장 작은 수는 " << minNum << "이다." << endl;
//    } else {
//        cout << "값을 다시 입력하세요.";
//    }

// * 03. 사용자로부터 1 ~ 12 사이의 숫자를 입력받고 해당 월을 January, February, ... , December 와 같은 형태의 영어로 출력하는 프로그램을 만드세요.
    int num1To12;
    string monthEnglish;

    cout << "숫자 입력(1~12) :";
    cin >> num1To12;

    switch (num1To12) {
        case 1 : monthEnglish = "January"; break;
        case 2 : monthEnglish = "February"; break;
        case 3 : monthEnglish = "March"; break;
        case 4 : monthEnglish = "April"; break;
        case 5 : monthEnglish = "May"; break;
        case 6 : monthEnglish = "June"; break;
        case 7 : monthEnglish = "July"; break;
        case 8 : monthEnglish = "August"; break;
        case 9 : monthEnglish = "September"; break;
        case 10 : monthEnglish = "October"; break;
        case 11 : monthEnglish = "November"; break;
        case 12 : monthEnglish = "December"; break;
    }

    cout << num1To12 << "월: " << monthEnglish << ".";







}