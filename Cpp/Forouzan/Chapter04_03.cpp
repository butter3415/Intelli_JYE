// 04 ���ǹ�
// Created by 82104 on 2023-02-15.
// 03 switch ���ǹ�

// Ư�� ���� ������� ���� �б⸦ �ؾ� �ϴ� ��쿡 ���
// switch ���ǹ��� Ư���� ���� ������� ������ �б��� �� ���

# include <iostream>
using namespace std;

int main() {

//// [2] switch ���ǹ� (�⺻������ ����ó�� ���� �������� ����)
//
//// * switch ���ǹ��� ����ؼ� Ư�� ���Ϻ��� ������ ���ϱ��� ����ϴ� ���α׷�
//    int day;
//
//    cout << "0~6 ������ ���� �Է� :" ;
//    cin >> day;
//
//    switch (day){
//        case 0: cout << "�Ͽ���" << endl;
//        case 1: cout << "������" << endl;
//        case 2: cout << "ȭ����" << endl;
//        case 3: cout << "������" << endl;
//        case 4: cout << "�����" << endl;
//        case 5: cout << "�ݿ���" << endl;
//        case 6: cout << "�����" << endl;
//    }
    // 4 �Է��ϸ� 4, 5, 6 ���
    // ���� 4 �Է� �� case 4 �κ����� �����ϰ� ������ ���� ��� ������.
// � case �б�͵� ���� ������ � ���嵵 �������� ����.

//// break ����
//// : switch ���ǹ��� ���� ���� ���� �б⿡ ����Ϸ��� break ������ ����ؾ� �Ѵ�.
//// : break ������ ���α׷��� �帧�� �����ϰ� switch ���ǹ��� ����ġ�� �ϴ� ����
//
//// * switch ���ǹ��� break ������ �����ؼ� ������ ����ϴ� ���α׷�
//    int day;
//
//    cout << "0~6 ������ ���� �Է� :" ;
//    cin >> day;
//
//    switch (day){
//        case 0: cout << "�Ͽ���" << endl;
//                cout << "������ ����!" << endl;
//                break;
//        case 1: cout << "������" << endl;
//            break;
//        case 2: cout << "ȭ����" << endl;
//            break;
//        case 3: cout << "������" << endl;
//            break;
//        case 4: cout << "�����" << endl;
//            break;
//        case 5: cout << "�ݿ���" << endl;
//            break;
//        case 6: cout << "�����" << endl;
//                cout << "������ ������!" << endl;
//            break;
//    }

// - default �б�
//   : switch ������ ��� case �б⿡�� �������� �� �� ��� Ư�� ������ �����ϰ� ������ default ���� ����

// * switch ������ ����ؼ� ������ ������� ���� ����ϱ�
    int score;
    char grade;

    cout << "����(1~100) :";
    cin >> score;

    if (score > 100){
        score = 100;
    } else if(score < 0){
        score = 0;
    }

    switch(score /10){
        case 10 : grade = 'A';
                  break;
        case 9 : grade = 'A';
                 break;
        case 8 : grade = 'B';
                 break;
        case 7 : grade = 'C';
                 break;
        case 6 : grade = 'D';
                 break;
        default : grade = 'F';
    }

    cout << "������ " << score << "���̸�, " ;
    cout << "������ " << grade << "�Դϴ�!" << endl;








}