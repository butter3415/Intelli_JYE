//
// Created by 82104 on 2023-02-23.
// ���ǹ� �̿��� ���������� ����

# include <iostream>
using namespace std;

int main(){
    int p1RSP, p2RSP, resultP1, resultP2;
    string nameP1, nameP2;

    cout << "P1 ���� [���� : 1, ���� : 2, �� : 3] :";
    cin >> p1RSP;
    cout << "P2 ���� [���� : 1, ���� : 2, �� : 3] :";
    cin >> p2RSP;

    if (p1RSP == 1){    // p1�� ������ ���� ��
        nameP1 = "����";

        if (p2RSP == 1){ // p1 : ���� / p2 : ���� => p1, p2 ������
            nameP2 = "����";
            resultP1 = 0;
            resultP2 = 0;
        } else if (p2RSP == 2){ // p1 : ���� / p2 : ���� => p2 �¸�
            nameP2 = "����";
            resultP1 = -1;
            resultP2 = 1;
        } else if (p2RSP == 3){ // p1 : ���� / p2 :  �� => p1 �¸�
            nameP2 = "��";
            resultP1 = 1;
            resultP2 = -1;
        }
    } else if (p1RSP == 2){ // p1�� ������ ���� ��
        nameP1 = "����";

        if (p2RSP == 1){    // p1 : ���� / p2 : ���� => p1 �¸�
            nameP2 = "����";
            resultP1 = 1;
            resultP2 = -1;
        } else if (p2RSP == 2){ // p1 : ���� / p2 : ���� => p1, p2 ������
            nameP2 = "����";
            resultP1 = 0;
            resultP2 = 0;
        } else if (p2RSP == 3){ // p1 : ���� / p2 :  �� => p2 �¸�
            nameP2 = "��";
            resultP1 = -1;
            resultP2 = 1;
        }
    } else if (p1RSP == 3){ // p1�� ���� ���� ��
        nameP1 = "��";

        if (p2RSP == 1){    // p1 : �� / p2 : ���� => p2 �¸�
            nameP2 = "����";
            resultP1 = -1;
            resultP2 = 1;
        } else if (p2RSP == 2){ // p1 : �� / p2 : ���� => p1 �¸�
            nameP2 = "����";
            resultP1 = 1;
            resultP2 = -1;
        } else if (p2RSP == 3){ // p1 : �� / p2 :  �� => p1, p2 ������
            nameP2 = "��";
            resultP1 = 0;
            resultP2 = 0;
        }
    }

    cout << "P1�� ����: " << nameP1 << endl;
    cout << "P2�� ����: " << nameP2 << endl;

    if (resultP1 > resultP2){
        cout << "P1 �¸�!";
    } else if (resultP1 == resultP2){
        cout << "P1 & P2 ���º�!";
    } else if (resultP1 < resultP2){
        cout << "P2 �¸�!";
    }
    






}
