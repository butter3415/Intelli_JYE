// <04 ���ǹ�>
// Created by 82104 on 2023-02-13.
// 01 ���ǹ��� ����

// ���ǹ� : ����ǥ����, ��ġǥ���� ����
// - ����ǥ���� : �� ���� ���ϱ� ���� 4���� ������ ���� ������ ���
// - ��ġǥ���� : �� ��ƼƼ�� �������� �Ǻ�

# include <iostream>
#include <iomanip>

using namespace std;

int main() {

// [3] if ���ǹ� (�ܹ��� ���� �б�)
// : ���ǿ� ���� � �۾��� �� ������ �Ǵ� ���� ���� �������� ǥ���� �� ���
// : ���� �ϳ��� ������ ���� �߰�ȣ�� ������� �ʾƵ� ��� ����.
// : ���ǹ� ��� �κ��̶�� ���� ��Ȯ�ϰ� ��Ÿ�� �� �ֵ��� �߰�ȣ�� ����ϴ� ���� ����.

//// * if ���ǹ��� ����ؼ� ���밪�� ����ϰ� ����ϴ� ���α׷�
//    int number;
//
//    cout << "���� �Է� : " ;
//    cin >> number;
//
//    if(number < 0){
//        number = -number;
//    }
//
//    cout << "�Է��� ������ ���밪 = " << number;
//
//// * if ���ǹ��� ����ؼ� �ʰ� �ٹ� �ð��� �ִ� �޿� ����ϱ�
//
//    long hour, hourpay, basicpay, totalpay, pluspay;
//
//    cout << "���� �ð��� ?";
//    cin >> hour;
//    cout << "�ð��� �޿��� ?";
//    cin >> hourpay;
//
//
//    if (hour > 40.0){
//        basicpay = 40 * hourpay;
//        pluspay = (hour - 40) * hourpay * 1.30 ;
//        totalpay = basicpay + pluspay;
//    }
//    if (hour <= 40.0){
//        basicpay = hour * hourpay;
//        pluspay = 0.0;
//        totalpay = basicpay;
//    }
//
//    cout << showpoint;
//    cout << "�⺻�� = " << setprecision(2) <<basicpay << endl;
//    cout << "���� ���� = " << setprecision(2) << pluspay << endl;
//    cout << "�� �޿� = " << setprecision(2) << totalpay << endl;
//    // �� =======================���� ���======================= ��

    double hours, rate, regularPay, overPay, totalPay;

    cout << "���� �ð��� �Է��ϼ��� :";
    cin >> hours;
    cout << "�ð��� �޿��� �Է��ϼ��� :";
    cin >> rate;

    regularPay = hours * rate;
    overPay = 0.0;

    if(hours > 40.0){
        overPay = (hours - 40.0) * rate * 0.30;
    }

    totalPay = regularPay + overPay;

    cout << fixed << showpoint;
    cout << "�Ϲ� �޿� = " << setprecision(2) << regularPay << endl;
    cout << "�ʰ� �ٹ��� ���� �޿� = " << setprecision(2) << overPay << endl;
    cout << "��ü �޿� = " << setprecision(2) << totalPay << endl;

// ���ǻ���
// - ��ġ �����ڰ� �ƴ϶� �Ҵ� �����ڸ� ����ϴ� ��� : ��ġ ������ (==) / �Ҵ� ������(=) �򰥸��� �ʱ�!
// - ��ȣ ������ ��� : ���ǹ� �ȿ� ���� ���� �ۼ��Ͽ����� �߰�ȣ ������� ������ ���� X!
// - ���ʿ��� �����ݷ��� ���� ��� : if ���ǹ��� ����� ���� �ϳ��� �������� ���� (Ex. if(x==0);{} => �򰥸��� �ʱ�)




}