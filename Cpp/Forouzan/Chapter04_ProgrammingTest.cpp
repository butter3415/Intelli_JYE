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

// * 02. 3개의 정수를 입력받고, 가장 작은 것을 출력하는 프로그램을 만드세요.
    int num1, num2, num3, minNum;

    cout << "첫 번째 정수 :";
    cin >> num1;
    cout << "두 번째 정수 :";
    cin >> num2;
    cout << "세 번째 정수 :";
    cin >> num3;

    if ((num1 < num2) && (num1 < num3)){
        minNum = num1;
        cout << "3개의 값 중 가장 작은 수는 " << minNum << "이다." << endl;
    } else if ((num2 < num1) && (num2 < num3)){
        minNum = num2;
        cout << "3개의 값 중 가장 작은 수는 " << minNum << "이다." << endl;
    } else if ((num3 < num1) && (num3 < num2)){
        minNum = num3;
        cout << "3개의 값 중 가장 작은 수는 " << minNum << "이다." << endl;
    } else {
        cout << "값을 다시 입력하세요.";
    }









}