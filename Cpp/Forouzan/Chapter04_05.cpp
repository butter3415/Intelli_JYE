// 04 조건문
// Created by 82104 on 2023-02-17.
// 05 [Lab] 응용 프로젝트

# include <iostream>
using namespace std;

int main() {

///* 학생 점수를 3개 입력받고 최소값과 최대값을 기반으로 평균을 구해서 학생의 성적을 찾는 프로그램
// */
//    int score1, score2, score3;
//    int maxNum, minNum, averageNum;
//
//    cout << "시험1(국어)의 성적은?";
//    cin >> score1;
//    cout << "시험2(수학)의 성적은?";
//    cin >> score2;
//    cout << "시험3(영어)의 성적은?";
//    cin >> score3;
//
//    if ((score1 > score2) && (score1 > score3)){
//        maxNum = score1;
//    }
//    if ((score2 > score1) && (score2 > score3)){
//        maxNum = score2;
//    }
//    if ((score3 > score1) && (score3 > score2)){
//        maxNum = score3;
//    }
//
//    if ((score1 < score2) && (score1 < score3)){
//        minNum = score1;
//    }
//    if ((score2 < score1) && (score2 < score3)){
//        minNum = score2;
//    }
//    if ((score3 < score1) && (score3 < score2)){
//        minNum = score3;
//    }
//
//    averageNum = (maxNum + minNum) / 2 ;
//
//    cout << "이 학생의 평균은 " << averageNum << "점 입니다.";


//// * 4가지 서로 다른 소득 범위를 기반으로 세금을 계산해서 출력하는 프로그램
//
//    double tax, income;
//
//    double limit1 = 5000, limit2 = 10000, limit3 = 15000, limit4 = 20000;
//    double incomeTax1 = 0.05, incomeTax2 = 0.10, incomeTax3 = 0.15, incomeTax4 = 0.20;
//
//    cout << "당신의 소득은?";
//    cin >> income;
//
//    if ((income < limit1) && (income >= 0)){
//        tax = income * incomeTax1;
//    } else if ((income >= limit1) && (income < limit2)){
//        tax = (limit1 * incomeTax1) + ((income - limit1) * incomeTax2);
//    } else if ((income >= limit2) && (income < limit3)){
//        tax = (limit1 * incomeTax1) + (limit2 * incomeTax2) + ((income - limit2) * incomeTax3);
//    } else if ((income >= limit3) && (income < limit4)){
//        tax = (limit1 * incomeTax1) + (limit2 * incomeTax2) + (limit3 * incomeTax3) + ((income - limit3) * incomeTax4);
//    } else {
//        cout << "입력 범위에 문제가 있습니다.";
//        return 0;
//    }
//
//    cout << "소득 :" << income << endl;
//    cout << "세금 :" << tax;


// * 날짜 번호 구하기
    int month, day;
    int totalDays = 0;

    cout << "몇 월 :";
    cin >> month;
    cout << "몇 일 :";
    cin >> day;

    int m01 = 31, m03 = 31, m05 = 31, m07 = 31, m08 = 31, m10 = 31, m12 = 31;
    int m02 = 28, m04 = 30, m06 = 30, m09 = 30, m11 = 30;

    switch (month){
        case 12 : totalDays += m11;
        case 11 : totalDays += m10;
        case 10 : totalDays += m09;
        case 9 : totalDays += m08;
        case 8 : totalDays += m07;
        case 7 : totalDays += m06;
        case 6 : totalDays += m05;
        case 5 : totalDays += m04;
        case 4 : totalDays += m03;
        case 3 : totalDays += m02;
        case 2 : totalDays += m01;
        case 1 : totalDays += 0;
    }

    totalDays += day;

    cout << "올해의 " << totalDays << "번째 날입니다." << endl;

}