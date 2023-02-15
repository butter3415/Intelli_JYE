// 04 조건문
// Created by 82104 on 2023-02-15.
// 03 switch 조건문

// 특정 값을 기반으로 조건 분기를 해야 하는 경우에 사용
// switch 조건문은 특정한 값을 기반으로 조건을 분기할 때 사용

# include <iostream>
using namespace std;

int main() {

//// [2] switch 조건문 (기본적으로 폭포처럼 물이 떨어지는 형태)
//
//// * switch 조건문을 사용해서 특정 요일부터 마지막 요일까지 출력하는 프로그램
//    int day;
//
//    cout << "0~6 까지의 정수 입력 :" ;
//    cin >> day;
//
//    switch (day){
//        case 0: cout << "일요일" << endl;
//        case 1: cout << "월요일" << endl;
//        case 2: cout << "화요일" << endl;
//        case 3: cout << "수요일" << endl;
//        case 4: cout << "목요일" << endl;
//        case 5: cout << "금요일" << endl;
//        case 6: cout << "토요일" << endl;
//    }
    // 4 입력하면 4, 5, 6 출력
    // 정수 4 입력 시 case 4 부분으로 진입하고 나머지 문장 모두 실행함.
// 어떤 case 분기와도 맞지 않으면 어떤 문장도 실행하지 않음.

//// break 구문
//// : switch 조건문을 여러 방향 조건 분기에 사용하려면 break 구문을 사용해야 한다.
//// : break 구문은 프로그램의 흐름을 중지하고 switch 조건문을 끝마치게 하는 구문
//
//// * switch 조건문과 break 구문을 조합해서 요일을 출력하는 프로그램
//    int day;
//
//    cout << "0~6 까지의 정수 입력 :" ;
//    cin >> day;
//
//    switch (day){
//        case 0: cout << "일요일" << endl;
//                cout << "한주의 시작!" << endl;
//                break;
//        case 1: cout << "월요일" << endl;
//            break;
//        case 2: cout << "화요일" << endl;
//            break;
//        case 3: cout << "수요일" << endl;
//            break;
//        case 4: cout << "목요일" << endl;
//            break;
//        case 5: cout << "금요일" << endl;
//            break;
//        case 6: cout << "토요일" << endl;
//                cout << "한주의 마지막!" << endl;
//            break;
//    }

// - default 분기
//   : switch 구문의 모든 case 분기에도 진입하지 못 한 경우 특정 문장을 실행하고 싶을때 default 구문 실행

// * switch 조건을 사용해서 점수를 기반으로 학접 출력하기
    int score;
    char grade;

    cout << "점수(1~100) :";
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

    cout << "점수는 " << score << "점이며, " ;
    cout << "학점은 " << grade << "입니다!" << endl;








}