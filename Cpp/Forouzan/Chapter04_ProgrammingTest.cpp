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

//// * 05. 학생의 점수를 기반으로 학점을 구하는 프로그램을 만드세요.
//// *     점수(0~100점 기준)를 3개 읽어 들이고, 다음과 같은 기준에 따라서 학점을 계산합니다.
//
//    int num1, num2, num3;
//    int average;
//    char grade;
//
//    cout << "첫번째 과목 점수 :";
//    cin >> num1;
//    cout << "두번째 과목 점수 :";
//    cin >> num2;
//    cout << "세번째 과목 점수 :";
//    cin >> num3;
//
//    average = (num1 + num2 + num3) / 3;
//
//    if (average >= 90){
//        grade = 'A';
//    } else if ((average < 90) && (average >= 80)){
//        if (num3 > 90){
//            grade = 'A';
//        } else if (num3 <= 90){
//            grade = 'B';
//        }
//    } else if ((average < 80) && (average >= 70)){
//        if (num3 > 80){
//            grade = 'B';
//        } else if (num3 <= 80){
//            grade = 'C';
//        }
//    } else if ((average < 70) && (average >= 60)){
//        if (num3 > 70){
//            grade = 'C';
//        } else if (num3 <= 70){
//            grade = 'D';
//        }
//    } else if ((average < 60)){
//        if (num3 > 60){
//            grade = 'D';
//        } else if (num3 <= 60){
//            grade = 'F';
//        }
//    }
//
//    cout << "해당 학생의 점수 평균은 " << average << "점이며, " << endl;
//    cout << "세번째 과목 점수는 " << num3 << "점이므로, " << endl;
//    cout << "해당 학생의 학점은 '" << grade << "'이다." ;

// * 06. 대학교에서 학생의 총 수업료를 계산하고 출력하는 프로그램을 만드세요. 학생들은 12학점에 대해 학점당 10달러의 수수료를 지불합니다.
// *     12학점을 넘는 분량은 수수료가 없습니다. 등록비는 학생 당 10달러라고 가정합니다.
//       <문제 이해 불가...>

//// * 07. 도매점에서 물건을 구매할 때, 다음과 같이 수량에 따라서 추가적인 할인이 들어갑니다. 물건 하나의 가격과 구매 수량을 입력 받고,
//// *     할인이 적용된 전체 가격을 출력하는 프로그램을 작성하세요.
//// *     1-9개 : 0% | 10-49개 : 3% | 50-99개 : 5% | 100개 이상 : 10%
//    int quantity;
//    double prize, basePrize, totalPrize;
//
//    cout << "물건 하나의 가격 :";
//    cin >> prize;
//    cout << "구매 수량 :";
//    cin >> quantity;
//
//    basePrize = quantity * prize;
//
//    if ((quantity >= 1) && (quantity < 10)){
//        totalPrize = basePrize - (basePrize * 0.0);
//    } else if ((quantity >= 10) && (quantity < 50)){
//        totalPrize = basePrize - (basePrize * 0.03);
//    } else if ((quantity >= 50) && (quantity < 100)){
//        totalPrize = basePrize - (basePrize * 0.05);
//    } else if ((quantity >= 100)){
//        totalPrize = basePrize - (basePrize * 0.10);
//    }
//
//    cout << "해당 물건을 " << quantity << "개 구매했을 때 금액 : " << totalPrize << endl;

//// * 08. 사용자로부터 점의 좌표 x와 y를 입력받고, 직교 좌표계(데카르트 좌표계)에서 점이 몇 사분면에 위치하는지를 출력하는 프로그램을 만드세요.
//// *     예를 들어서 x와 y가 모두 양수라면 점은 1-사분면에 위치하며, 모두 음수라면 점은 3-사분면에 위치합니다.
//    int x, y;
//    string coordinate;
//
//    cout << "x 값 :";
//    cin >> x;
//    cout << "y 값 :";
//    cin >> y;
//
//    if ((x > 0) && (y > 0)){
//        coordinate = "1-사분면";
//    } else if ((x < 0) && (y > 0)){
//        coordinate = "2-사분면";
//    } else if ((x < 0) && (y < 0)){
//        coordinate = "3-사분면";
//    } else if ((x > 0) && (y < 0)){
//        coordinate = "4-사분면";
//    }
//
//    cout << "좌표 ( " << x << ", " << y << " ) 는 " << coordinate << "이다.";

//// * 09. [프로그램 4-17]에 윤년의 개념(2월이 28일이 아니라 29일인 경우)을 추가해서 프로그램을 수정하세요.
//// *     프로그램은 사용자로부터 추가 연도를 입력받아야 하며, 윤년은 다음과 같은 식으로 구할 수 있습니다.
//// *     leapYear = (year * 400) || (year % 4 && ! (year % 100))
//
//    int year, month, day;
//    int totalDays = 0;
//    bool leapYear;
//
//    cout << "몇 년 :";
//    cin >> year;
//    cout << "몇 월 :";
//    cin >> month;
//    cout << "몇 일 :";
//    cin >> day;
//
//    leapYear = (year * 400) || (year % 4 && ! (year % 100));
//
//    int m01 = 31, m03 = 31, m05 = 31, m07 = 31, m08 = 31, m10 = 31, m12 = 31;
//    int m02 = 28, m04 = 30, m06 = 30, m09 = 30, m11 = 30;
//
//    if (leapYear) {
//        m02 = 29;
//        switch (month) {
//            case 12 :
//                totalDays += m11;
//            case 11 :
//                totalDays += m10;
//            case 10 :
//                totalDays += m09;
//            case 9 :
//                totalDays += m08;
//            case 8 :
//                totalDays += m07;
//            case 7 :
//                totalDays += m06;
//            case 6 :
//                totalDays += m05;
//            case 5 :
//                totalDays += m04;
//            case 4 :
//                totalDays += m03;
//            case 3 :
//                totalDays += m02;
//            case 2 :
//                totalDays += m01;
//            case 1 :
//                totalDays += 0;
//        }
//    } else if (!leapYear){
//        switch (month) {
//            case 12 :
//                totalDays += m11;
//            case 11 :
//                totalDays += m10;
//            case 10 :
//                totalDays += m09;
//            case 9 :
//                totalDays += m08;
//            case 8 :
//                totalDays += m07;
//            case 7 :
//                totalDays += m06;
//            case 6 :
//                totalDays += m05;
//            case 5 :
//                totalDays += m04;
//            case 4 :
//                totalDays += m03;
//            case 3 :
//                totalDays += m02;
//            case 2 :
//                totalDays += m01;
//            case 1 :
//                totalDays += 0;
//        }
//    }
//
//    totalDays += day;
//
//    cout << "올해의 " << totalDays << "번째 날입니다." << endl;

// * 10. 특정 날짜의 요일을 맞추는 첼러의 공식 (Zeller's congruence)을 활용해서 사용자로부터 연도, 월, 일을 입력받았을 때
// *     요일을 출력하는 프로그램을 만드세요. 첼러의 공식은 다음과 같습니다.
// *     weekday = (day + 26 * (monoth - 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7
// *     ... 이게 뭐여

// * 11. 사용자로부터 달러 값을 입력받고, 달러 지폐로 이를 지불할 때 지폐의 개수가 최소가 되는 경우를 출력하는 프로그램을 만드세요.
// *     0이 아닌 수의 지폐 수만 출력하면 됩니다. 참고로 달러는 100달러, 50달러, 20달러, 10달러, 5달러, 1달러 지폐가 있습니다.


}