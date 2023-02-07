//
// Created by 82104 on 2023-02-07.
// 04 자료형 - 문자 자료형,

// 문자 자료형(character type)
// char (문자 자료형을 나타냄)
// ASCII 테이블 정의된 글자를 작은 따옴표 안에 넣어 사용하기 ex) 'a', 'A', 'H', 'I', 'g', 'h'
// ASCII 테이블에 정의된 정수 값을 사용하기 ex) 65, 66, 67

# include <iostream>
using namespace std;

int main(){
    /* char 자료형의 변수를 선언하고 초기화하는 프로그램 */
    // 변수 선언 및 초기화
    char first = 'A';   // 문자 리터럴
    char second = 65;   // 정수 리터럴
    char third = 'B';   // 문자 리터럴
    char fourth = 66;   // 정수 리터럴

    cout << "first의 값 : " << first << endl;
    cout << "second의 값 : " << second << endl;
    cout << "third의 값 : " << third << endl;
    cout << "fourth의 값 : " << fourth << endl;

    // ----------------------------------------------------------------------------------------------------------------
    /* 이스케이프 문자 사용 */
    cout << "Hello~~~ \n";
    cout << "HI! \t 헬로우 안녕?\n";
    cout << "HIGH  \bLIGHT";    // HIGH LIGHT 중간에 2칸 띄어쓰기
    cout << "Hello! \r 안녕하세요~ \n";
    cout << "이것은 바로~!!!!!!\' 작은 따옴표입니다~! \n";
    cout << "이것이야 말로~!!!!\" 큰 따옴표입니다~ \n";
    cout << "굉장히 많이 이용하는 부호죠? \\ 바로 이것 입니다! \\ 역 슬래시~!";



    return 0;
}