// 04 ���ǹ�
// Created by 82104 on 2023-02-17.
// 05 [Lab] ���� ������Ʈ

# include <iostream>
using namespace std;

int main() {

///* �л� ������ 3�� �Է¹ް� �ּҰ��� �ִ밪�� ������� ����� ���ؼ� �л��� ������ ã�� ���α׷�
// */
//    int score1, score2, score3;
//    int maxNum, minNum, averageNum;
//
//    cout << "����1(����)�� ������?";
//    cin >> score1;
//    cout << "����2(����)�� ������?";
//    cin >> score2;
//    cout << "����3(����)�� ������?";
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
//    cout << "�� �л��� ����� " << averageNum << "�� �Դϴ�.";


// * 4���� ���� �ٸ� �ҵ� ������ ������� ������ ����ؼ� ����ϴ� ���α׷�

    double tax, income;

    double limit1 = 5000, limit2 = 10000, limit3 = 15000, limit4 = 20000;
    double incomeTax1 = 0.05, incomeTax2 = 0.10, incomeTax3 = 0.15, incomeTax4 = 0.20;

    cout << "����� �ҵ���?";
    cin >> income;

    if ((income < limit1) && (income >= 0)){
        tax = income * incomeTax1;
    } else if ((income >= limit1) && (income < limit2)){
        tax = (limit1 * incomeTax1) + ((income - limit1) * incomeTax2);
    } else if ((income >= limit2) && (income < limit3)){
        tax = (limit1 * incomeTax1) + (limit2 * incomeTax2) + ((income - limit2) * incomeTax3);
    } else if ((income >= limit3) && (income < limit4)){
        tax = (limit1 * incomeTax1) + (limit2 * incomeTax2) + (limit3 * incomeTax3) + ((income - limit3) * incomeTax4);
    } else {
        cout << "�Է� ������ ������ �ֽ��ϴ�.";
        return 0;
    }

    cout << "�ҵ� :" << income << endl;
    cout << "���� :" << tax;


}