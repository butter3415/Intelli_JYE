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

// * 02. 3���� ������ �Է¹ް�, ���� ���� ���� ����ϴ� ���α׷��� ���弼��.
    int num1, num2, num3, minNum;

    cout << "ù ��° ���� :";
    cin >> num1;
    cout << "�� ��° ���� :";
    cin >> num2;
    cout << "�� ��° ���� :";
    cin >> num3;

    if ((num1 < num2) && (num1 < num3)){
        minNum = num1;
        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
    } else if ((num2 < num1) && (num2 < num3)){
        minNum = num2;
        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
    } else if ((num3 < num1) && (num3 < num2)){
        minNum = num3;
        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
    } else {
        cout << "���� �ٽ� �Է��ϼ���.";
    }









}