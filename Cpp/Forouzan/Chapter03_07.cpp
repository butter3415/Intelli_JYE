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


// [2] ������ ù ��° �ڸ��� �����ϱ�
    unsigned int num1, firstNum;

    cout << "���� �Է� :";
    cin >> num1;

    firstNum = num1 % 10;

    cout << "�Է��� ���� : " << num1 << endl;
    cout << "������ ù ��° �ڸ��� : " << firstNum << endl;



}