//
// Created by 82104 on 2023-02-10.
// 02 �ڷ��� ��ȯ

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

// 01 �ڷ��� ��ȯ�� �ʿ伺
// {��� �ڷ����� �ƴ� �ڷ����� ��� �����ڸ� ���ϸ� ??? ex. boolŸ�� �ڷ��� + ��� �ڷ��� = ???}
// {���� ������ ��� �� �ǿ������� �ڷ����� �ٸ��� ???}
// �̶� �ʿ��� ���� [�Ϲ��� �ڷ��� ��ȯ(�ڵ� ��ȯ) & ����� �ڷ��� ��ȯ(���� ��ȯ)]

// 02 �Ϲ��� �ڷ��� ��ȯ - �Ϲ��� �ڷ��� �°�/ �Ϲ��� �ڷ��� ���� ����
// �Ϲ��� �ڷ��� �°� : �ڷ����� �ǿ����ڸ� �� ū �ڷ������� �°ݽ�Ŵ.
// �Ϲ��� �ڷ��� ���� : ���� ������ ��� �� �� �ڷ����� �ڷ��� ����.

// - �Ϲ��� �ڷ��� �°� [ bool -> int / char -> int / short -> int / unsigned short -> unsigned int / float -> double ]

// * ��� �����ڰ� ���� �ڷ���(bool, char, short, float)�� ��� ������ �����Ͽ� �Ϲ��� �ڷ��� ��ȯ�ϱ�
    bool b1 = true;
    char c1 = 'A';
    short s1 = 14;
    float f1 = 34.15;

    cout << "b1 + 100 �ڷ��� : " << typeid(b1 + 100).name() << endl;      // int
    cout << "b1 + 100 �� : " << b1 + 100 << endl;                        // 101
    cout << "c1 + 1000 �ڷ��� : " << typeid(c1 + 1000).name() << endl;    // int
    cout << "c1 + 1000 �� : " << c1 + 1000 << endl;                      // 1065
    cout << "s1 * 100 �ڷ��� : " << typeid(s1 * 100).name() << endl;      // int
    cout << "s1 * 100 �� : " << s1 * 100 << endl;                        // 1400
    cout << "f1 + 150.25 �ڷ��� : " << typeid(f1 + 150.25).name() << endl;// double
    cout << "f1 + 150.25 �� : " << f1 + 150.25 << endl << endl;                  // 184.4


// - �Ϲ��� �ڷ��� ����
//      �ΰ� �ۿ� ���� ��� [ (����) int -> unsigned int -> long -> unsigned long -> double -> long double (����) ]

// * �ΰ� �ۿ��� ���� ���� �ڷ����� ���� ǥ������ �Ϲ��� �ڷ��� ��ȯ *

    int i1 = 103;
    long l1 = 140;
    double d1 = 114.330;

    cout << "int + long �ڷ��� : " << typeid(i1 + l1).name() << endl;              // long
    cout << "int + long �� : " << i1 + l1 << endl;                                // 243
    cout << "int + long + double �ڷ��� : " << typeid(i1 + l1 + d1).name() << endl;// double
    cout << "int + long + double �� : " << i1 + l1 + d1 << endl << endl;          // 357.33

//      �ΰ� �ۿ� �ִ� ���
//      [ int ���� = float �� -> float ���� int�� ��ȯ�ؼ� ���� / float ���� = int �� -> int ���� float���� ��ȯ�ؼ� ����]

// * �ڷ����� ���� ǥ������ �ڷ��� ��ȯ Ȯ�� *

    int i2;
    double d2;

    i2 = 2248.34;
    d2 = 2231;
    float f2;

    cout << "i2 = 2248.34 �ڷ��� : " << typeid(i2 = 2248.34).name() << endl;   // int
    cout << "�Ҵ� �� i2 �� : " << i2 << endl << endl;                          // 2248
    cout << "d2 = 2231 �ڷ��� : " << typeid(d2 = 2231).name() << endl;         // double
    cout << "�Ҵ� �� d2 �� : " << d2 << endl;                                   // 2231
    cout << "float ���� = int �� : " << typeid(f2 = 152).name() << endl;       // float
    cout << "float ���� = int �� : " << f2 << endl;                            // 8.99945e-039



}