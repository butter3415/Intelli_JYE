// 04 조건문
// Created by 82104 on 2023-02-17.
// 05 [Lab] 응용 프로젝트

# include <iostream>
using namespace std;

int main() {

/* 학생 점수를 3개 입력받고 최소값과 최대값을 기반으로 평균을 구해서 학생의 성적을 찾는 프로그램
 */
    int score1, score2, score3;
    int maxNum, minNum, averageNum;

    cout << "시험1(국어)의 성적은?";
    cin >> score1;
    cout << "시험2(수학)의 성적은?";
    cin >> score2;
    cout << "시험3(영어)의 성적은?";
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

    cout << "이 학생의 평균은 " << averageNum << "점 입니다.";


}