//
// Created by 82104 on 2023-02-07.
// 02 변수, 값, 상수

/*
 * 키보드로부터 2개의 숫자 값을 입력받은 뒤에 두 값을 더한 후 출력하는 프로그램
 */
# include <iostream>
using namespace std;

int main(){
//    int num1;
//    int num2;
//    int sum;
//    // 변수 선언(특정 이름으로 메모리 공간 예약하기)
//
//    cout << "첫번째 숫자를 입력해주세용 :" ;
//    cin >> num1;
//    cout << "두번째 숫자를 입력해주세용 :";
//    cin >> num2;
//    // cin(주어) >>(동사_읽는다)
//    // cin >> : 읽는다 / 입력(소스), 데이터가 오른쪽으로 이동
//    // count << : 출력한다 / 출력(목적지), 데이터가 왼쪽으로 이동
//    sum = num1 + num2;
//
//    cout << "두 숫자의 합은 : " << sum << " 입니다!" << endl;
//
//    int x;
//
//    cin >> x;
//    cout << x;
//    cout << 4;  // 4 출력
//    // cin >> 4; // 오류남

    int x = 0, y = 0;
    cout << x << " " << y << endl;
    x = y;
    cout << x << " " << y << endl;
    x = 5;
    x = y + 6;
    cout << x << " " << y << endl;
    x = x + 3;
    cout << x << " " << y << endl;
    x = x + y;
    cout << x << " " << y << endl;

    const int HIGHLIGHT = 20091016;
    cout << HIGHLIGHT << endl;
    // HIGHLIGHT = 180224;
    // const : 상수로 선언하기 위한 한정자, 언제나 값이 고정이다. 절대로 안 바뀜

    return 0;
}