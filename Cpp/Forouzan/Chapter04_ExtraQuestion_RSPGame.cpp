//
// Created by 82104 on 2023-02-23.
// 조건문 이용한 가위바위보 게임

# include <iostream>
using namespace std;

int main(){
    int p1RSP, p2RSP, resultP1, resultP2;
    string nameP1, nameP2;

    cout << "P1 선택 [가위 : 1, 바위 : 2, 보 : 3] :";
    cin >> p1RSP;
    cout << "P2 선택 [가위 : 1, 바위 : 2, 보 : 3] :";
    cin >> p2RSP;

    if (p1RSP == 1){    // p1이 가위를 냈을 때
        nameP1 = "가위";

        if (p2RSP == 1){ // p1 : 가위 / p2 : 가위 => p1, p2 무숭부
            nameP2 = "가위";
            resultP1 = 0;
            resultP2 = 0;
        } else if (p2RSP == 2){ // p1 : 가위 / p2 : 바위 => p2 승리
            nameP2 = "바위";
            resultP1 = -1;
            resultP2 = 1;
        } else if (p2RSP == 3){ // p1 : 가위 / p2 :  보 => p1 승리
            nameP2 = "보";
            resultP1 = 1;
            resultP2 = -1;
        }
    } else if (p1RSP == 2){ // p1이 바위를 냈을 때
        nameP1 = "바위";

        if (p2RSP == 1){    // p1 : 바위 / p2 : 가위 => p1 승리
            nameP2 = "가위";
            resultP1 = 1;
            resultP2 = -1;
        } else if (p2RSP == 2){ // p1 : 바위 / p2 : 바위 => p1, p2 무숭부
            nameP2 = "바위";
            resultP1 = 0;
            resultP2 = 0;
        } else if (p2RSP == 3){ // p1 : 바위 / p2 :  보 => p2 승리
            nameP2 = "보";
            resultP1 = -1;
            resultP2 = 1;
        }
    } else if (p1RSP == 3){ // p1이 보를 냈을 때
        nameP1 = "보";

        if (p2RSP == 1){    // p1 : 보 / p2 : 가위 => p2 승리
            nameP2 = "가위";
            resultP1 = -1;
            resultP2 = 1;
        } else if (p2RSP == 2){ // p1 : 보 / p2 : 바위 => p1 승리
            nameP2 = "바위";
            resultP1 = 1;
            resultP2 = -1;
        } else if (p2RSP == 3){ // p1 : 보 / p2 :  보 => p1, p2 무숭부
            nameP2 = "보";
            resultP1 = 0;
            resultP2 = 0;
        }
    }

    cout << "P1의 선택: " << nameP1 << endl;
    cout << "P2의 선택: " << nameP2 << endl;

    if (resultP1 > resultP2){
        cout << "P1 승리!";
    } else if (resultP1 == resultP2){
        cout << "P1 & P2 무승부!";
    } else if (resultP1 < resultP2){
        cout << "P2 승리!";
    }
    






}
