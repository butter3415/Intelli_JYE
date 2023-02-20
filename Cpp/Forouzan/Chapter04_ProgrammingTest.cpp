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

//// * 03. 사용자로부터 1 ~ 12 사이의 숫자를 입력받고 해당 월을 January, February, ... , December 와 같은 형태의 영어로 출력하는 프로그램을 만드세요.
//    int num1To12;
//    string monthEnglish;
//
//    cout << "숫자 입력(1~12) :";
//    cin >> num1To12;
//
//    switch (num1To12) {
//        case 1 : monthEnglish = "January"; break;
//        case 2 : monthEnglish = "February"; break;
//        case 3 : monthEnglish = "March"; break;
//        case 4 : monthEnglish = "April"; break;
//        case 5 : monthEnglish = "May"; break;
//        case 6 : monthEnglish = "June"; break;
//        case 7 : monthEnglish = "July"; break;
//        case 8 : monthEnglish = "August"; break;
//        case 9 : monthEnglish = "September"; break;
//        case 10 : monthEnglish = "October"; break;
//        case 11 : monthEnglish = "November"; break;
//        case 12 : monthEnglish = "December"; break;
//    }
//
//    cout << num1To12 << "월: " << monthEnglish << ".";

//// * 04. 차량의 종류(일반 승용차 'c', 버스 'b', 트럭 't')와 주차장에서 차량이 있던 시간을 입력받은 뒤,
//// *     다음과 같은 주차 요금에 따라서 요금을 계산하는 프로그램을 작성하세요.
//
//    int parkingHour, parkingPay;
//    char carKind;
//
//    cout << "차량의 종류(일반 승용차 - c, 버스 - b, 트럭 - t) :";
//    cin >> carKind;
//    cout << "주차장에서 차량이 있던 시간 :";
//    cin >> parkingHour;
//
//    if ((carKind == 'c') || (carKind == 'b') || (carKind == 't')) {
//        if (carKind == 'c') {
//            parkingPay = parkingHour * 2;
//        } else if (carKind == 'b') {
//            parkingPay = parkingHour * 3;
//        } else if (carKind == 't') {
//            parkingPay = parkingHour * 4;
//        }
//        cout << "해당 차량의 주차 요금은 " << parkingPay << "달러입니다.";
//    } else {
//        cout << "다시 입력 하세요.";
//    }

// * 05. 학생의 점수를 기반으로 학점을 구하는 프로그램을 만드세요.
// *     점수(0~100점 기준)를 3개 읽어 들이고, 다음과 같은 기준에 따라서 학점을 계산합니다.

    int num1, num2, num3;
    int average;
    char grade;

    cout << "첫번째 과목 점수 :";
    cin >> num1;
    cout << "두번째 과목 점수 :";
    cin >> num2;
    cout << "세번째 과목 점수 :";
    cin >> num3;

    average = (num1 + num2 + num3) / 3;

    if (average >= 90){
        grade = 'A';
    } else if ((average < 90) && (average >= 80)){
        if (num3 > 90){
            grade = 'A';
        } else if (num3 <= 90){
            grade = 'B';
        }
    } else if ((average < 80) && (average >= 70)){
        if (num3 > 80){
            grade = 'B';
        } else if (num3 <= 80){
            grade = 'C';
        }
    } else if ((average < 70) && (average >= 60)){
        if (num3 > 70){
            grade = 'C';
        } else if (num3 <= 70){
            grade = 'D';
        }
    } else if ((average < 60)){
        if (num3 > 60){
            grade = 'D';
        } else if (num3 <= 60){
            grade = 'F';
        }
    }

    cout << "해당 학생의 점수 평균은 " << average << "점이며, " << endl;
    cout << "세번째 과목 점수는 " << num3 << "점이므로, " << endl;
    cout << "해당 학생의 학점은 '" << grade << "'이다." ;




}