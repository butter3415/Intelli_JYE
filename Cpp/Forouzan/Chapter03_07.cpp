//
// Created by 82104 on 2023-02-11.
// 07 [Lab] ���� ������Ʈ
// ����Ʈ���� ���� ���μ���
// 1) ���� ���� : ������ ����� �����ߴ��� Ȯ���ϱ�.
// 2) �˰��� ���� : ���α׷��� ���� �˰��� �����ϱ�. ������ ���� �������� ���� ��� ����
// 3) �ڵ� �ۼ� : ������ �˰����� ������� C++ �ڵ� �ۼ�

# include <iostream>
#include <iomanip>

using namespace std;

int main() {
//// [1] �ε� �Ҽ��� �����ϱ� - �ε� �Ҽ����� �־����� �� ������ �Ҽ��� �Ʒ� �κ��� �����ϴ� ���α׷�
//
//    double fPart;
//    int iPart;
//    double number;
//
//    cout << "�ε� �Ҽ��� �Է� :";
//    cin >> number;
//
//    iPart = static_cast<int>(number);
//    fPart = number - iPart;
//
//    // cout << fixed << showpoint << setprecision(2);
//    cout << "���� �κ� : " << iPart << endl;
//    cout << "�Ҽ��� �Ʒ� �κ� : " << fPart << endl;


//// [2] ������ ù ��° �ڸ��� �����ϱ�
//    unsigned int num1, firstNum;
//
//    cout << "���� �Է� :";
//    cin >> num1;
//
//    firstNum = num1 % 10;
//
//    cout << "�Է��� ���� : " << num1 << endl;
//    cout << "������ ù ��° �ڸ��� : " << firstNum << endl;

//// [3] �� ������ �ð��� ��, ��, �� ������ ����� ��ȯ�ϱ�
//    unsigned long number, hours, minutes, seconds;
//
//    cout << "�� ���� �ð� ���� �Է� :";
//    cin >> number;
//
//    hours = number / 3600;
//    minutes = (number - (hours * 3600L)) / 60;
//    seconds = ((number - (hours * 3600L)) - minutes * 60);
//
//    cout << number << " �� ��, ��, �ʷ� ��Ÿ���� ";
//    cout << hours << "�ð� " << minutes << "�� " << seconds << "��";

// [4] ��հ� �л� ���ϱ� - 3���� ���� �а� ��ü ��� ���� ��, ������ �л� ���ϱ�
//                       (�л� : Ư�� ���� ��տ��� �󸶳� �������ִ°�)
    int num1, num2, num3, sum;
    double averageNum, bun1, bun2, bun3;

    cout << "����1 �Է� :";
    cin >> num1;
    cout << "����2 �Է� :";
    cin >> num2;
    cout << "����3 �Է� :";
    cin >> num3;

    sum = num1 + num2 + num3;
    averageNum = static_cast<double>(sum) / 3;

    bun1 = num1 - averageNum;
    bun2 = num2 - averageNum;
    bun3 = num3 - averageNum;

    cout << fixed << setprecision(2);
    cout << "����1, 2, 3 ��� : " << left << setw(9) << averageNum << endl;
    cout << "����1 �л� : " << left << showpos << setw(9) << bun1 << endl;
    cout << "����2 �л� : " << left << showpos << setw(9) << bun2 << endl;
    cout << "����3 �л� : " << left << showpos << setw(9) << bun3 << endl;
    // setw(9) : �޸� �ڸ����� 9�ڸ��̴�. setfill('*') �ϸ� ������ �ڸ� * �� ä����
    // showpos : ����̸� + ǥ��, �����̸� - ǥ�� ��Ÿ����


}