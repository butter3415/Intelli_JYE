// 04 ���ǹ�
// Created by 82104 on 2023-02-17.
// 05 [Lab] ���� ������Ʈ

# include <iostream>
using namespace std;

int main() {

/* �л� ������ 3�� �Է¹ް� �ּҰ��� �ִ밪�� ������� ����� ���ؼ� �л��� ������ ã�� ���α׷�
 */
    int score1, score2, score3;
    int maxNum, minNum, averageNum;

    cout << "����1(����)�� ������?";
    cin >> score1;
    cout << "����2(����)�� ������?";
    cin >> score2;
    cout << "����3(����)�� ������?";
    cin >> score3;

    if ((score1 > score2) && (score1 > score3)){
        maxNum = score1;
    }
    if ((score2 > score1) && (score2 > score3)){
        maxNum = score2;
    }
    if ((score3 > score1) && (score3 > score2)){
        maxNum = score3;
    }

    if ((score1 < score2) && (score1 < score3)){
        minNum = score1;
    }
    if ((score2 < score1) && (score2 < score3)){
        minNum = score2;
    }
    if ((score3 < score1) && (score3 < score2)){
        minNum = score3;
    }

    averageNum = (maxNum + minNum) / 2 ;

    cout << "�� �л��� ����� " << averageNum << "�� �Դϴ�.";


}