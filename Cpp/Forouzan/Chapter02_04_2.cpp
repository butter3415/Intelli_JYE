//
// Created by 82104 on 2023-02-07.
// 04 �ڷ��� - ���� �ڷ���, �� �ڷ���

# include <iostream>
# include <string>
using namespace std;

int main(){

// ���� �ڷ���(character type)
// char (���� �ڷ����� ��Ÿ��)
// ASCII ���̺� ���ǵ� ���ڸ� ���� ����ǥ �ȿ� �־� ����ϱ� ex) 'a', 'A', 'H', 'I', 'g', 'h'
// ASCII ���̺� ���ǵ� ���� ���� ����ϱ� ex) 65, 66, 67

//    /* char �ڷ����� ������ �����ϰ� �ʱ�ȭ�ϴ� ���α׷� */
//    // ���� ���� �� �ʱ�ȭ
//    char first = 'A';   // ���� ���ͷ�
//    char second = 65;   // ���� ���ͷ�
//    char third = 'B';   // ���� ���ͷ�
//    char fourth = 66;   // ���� ���ͷ�
//
//    cout << "first�� �� : " << first << endl;
//    cout << "second�� �� : " << second << endl;
//    cout << "third�� �� : " << third << endl;
//    cout << "fourth�� �� : " << fourth << endl;
//
//    // ----------------------------------------------------------------------------------------------------------------
//    /* �̽������� ���� ��� */
//    cout << "Hello~~~ \n";
//    cout << "HI! \t ��ο� �ȳ�?\n";
//    cout << "HIGH  \bLIGHT";    // HIGH LIGHT �߰��� 2ĭ ����
//    cout << "Hello! \r �ȳ��ϼ���~ \n";
//    cout << "�̰��� �ٷ�~!!!!!!\' ���� ����ǥ�Դϴ�~! \n";
//    cout << "�̰��̾� ����~!!!!\" ū ����ǥ�Դϴ�~ \n";
//    cout << "������ ���� �̿��ϴ� ��ȣ��? \\ �ٷ� �̰� �Դϴ�! \\ �� ������~!";
//
//// �� �ڷ���(boolean type)
//    /* �� ������ ���� ����ϴ� ���α׷� */
//    bool x = 123;
//    bool y = -8;
//    bool z = 0;
//    bool t = -0;
//    bool u = true;
//    bool v = false;
//
//    cout << "x�� ����? "<< x << endl;
//    cout << "y�� ����? "<< y << endl;
//    cout << "z�� ����? "<< z << endl;
//    cout << "t�� ����? "<< t << endl;
//    cout << "u�� ����? "<< u << endl;
//    cout << "v�� ����? "<< v << endl;
//    // * 0�� �ƴ� ���� ����� ������ �����ؼ� ��� true�� ��ȯ

// �ε� �Ҽ��� �ڷ���(floating-point)
// �Ҽ����� ���� ���� : �ε� �Ҽ��� => ��� ��ȣ�� �ִ� �����̴�
// float <= double <= long double

//    /* ���� �������� ������� �ѷ��� ������ ���ϴ� ���α׷� */
//    const double PI = 3.14159;
//    double radius;
//    double perimeter;
//    double area;
//
//    cout << "���� ������ �Է�:";
//    cin >> radius;
//
//    perimeter = 2 * PI * radius;    // �ѷ�
//    area = PI * PI * radius;
//
//    cout << "������: " << radius << endl;
//    cout << "�ѷ�: " << perimeter << endl;
//    cout << "����: " << area << endl;

// void �ڷ���
// void �ڷ����� ���� ������ ��Ÿ���� Ư���� �ڷ���

// ���ڿ� �ڷ���
// C���κ��� �̾��� �ڷ��� �� ���ڷ� ������ ������ ����
// ����� ���� �ڷ����� Ŭ������ ���ο� ���ڿ� �ڷ����� ����

    string first;
    string initial;
    string last;
    string space = " ";
    string dot = ".";
    string fullName;

    cout << "��(first name) �Է��ϱ� :";
    cin >> first;
    cout << "�̸�(last name) �Է��ϱ� :";
    cin >> last;
    cout << "�̴ϼ�(initial) �Է��ϱ� :";
    cin >> initial;

    fullName = first + space + last + dot + space + initial;

    cout << "��ü �̸�(full name): " << fullName;



    return 0;
}