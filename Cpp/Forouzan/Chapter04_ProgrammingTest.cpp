// 04 ���ǹ�
// Created by 82104 on 2023-02-19.
// 04. ���α׷��� ����

# include <iostream>
using namespace std;

int main() {
//// *01. ����ڷκ��� ��ȣ ���� �� �ڸ� ������ �Է¹ް�, �ڸ����� ���� �ٲ㼭 ����ϴ� ���α׷��� ����ÿ�.
//    int number, firstNum, secondNum, changeNum;
//
//    cout << "�� �ڸ� ���� �Է� :";
//    cin >> number;
//
//    firstNum = number / 10;
//    secondNum = number % 10;
//
//    changeNum = (secondNum * 10) + (firstNum * 1);
//
//    cout << "�ڸ��� ���� �ٲ� ���� : " << changeNum ;

//// * 02. 3���� ������ �Է¹ް�, ���� ���� ���� ����ϴ� ���α׷��� ���弼��.
//    int num1, num2, num3, minNum;
//
//    cout << "ù ��° ���� :";
//    cin >> num1;
//    cout << "�� ��° ���� :";
//    cin >> num2;
//    cout << "�� ��° ���� :";
//    cin >> num3;
//
//    if ((num1 < num2) && (num1 < num3)){
//        minNum = num1;
//        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
//    } else if ((num2 < num1) && (num2 < num3)){
//        minNum = num2;
//        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
//    } else if ((num3 < num1) && (num3 < num2)){
//        minNum = num3;
//        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
//    } else {
//        cout << "���� �ٽ� �Է��ϼ���.";
//    }

// * 03. ����ڷκ��� 1 ~ 12 ������ ���ڸ� �Է¹ް� �ش� ���� January, February, ... , December �� ���� ������ ����� ����ϴ� ���α׷��� ���弼��.
    int num1To12;
    string monthEnglish;

    cout << "���� �Է�(1~12) :";
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

    cout << num1To12 << "��: " << monthEnglish << ".";







}