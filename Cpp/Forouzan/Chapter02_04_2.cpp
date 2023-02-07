//
// Created by 82104 on 2023-02-07.
// 04 자료형 - 문자 자료형, 불 자료형

# include <iostream>
# include <string>
using namespace std;

int main(){

// 문자 자료형(character type)
// char (문자 자료형을 나타냄)
// ASCII 테이블 정의된 글자를 작은 따옴표 안에 넣어 사용하기 ex) 'a', 'A', 'H', 'I', 'g', 'h'
// ASCII 테이블에 정의된 정수 값을 사용하기 ex) 65, 66, 67

//    /* char 자료형의 변수를 선언하고 초기화하는 프로그램 */
//    // 변수 선언 및 초기화
//    char first = 'A';   // 문자 리터럴
//    char second = 65;   // 정수 리터럴
//    char third = 'B';   // 문자 리터럴
//    char fourth = 66;   // 정수 리터럴
//
//    cout << "first의 값 : " << first << endl;
//    cout << "second의 값 : " << second << endl;
//    cout << "third의 값 : " << third << endl;
//    cout << "fourth의 값 : " << fourth << endl;
//
//    // ----------------------------------------------------------------------------------------------------------------
//    /* 이스케이프 문자 사용 */
//    cout << "Hello~~~ \n";
//    cout << "HI! \t 헬로우 안녕?\n";
//    cout << "HIGH  \bLIGHT";    // HIGH LIGHT 중간에 2칸 띄어쓰기
//    cout << "Hello! \r 안녕하세요~ \n";
//    cout << "이것은 바로~!!!!!!\' 작은 따옴표입니다~! \n";
//    cout << "이것이야 말로~!!!!\" 큰 따옴표입니다~ \n";
//    cout << "굉장히 많이 이용하는 부호죠? \\ 바로 이것 입니다! \\ 역 슬래시~!";
//
//// 불 자료형(boolean type)
//    /* 불 변수와 값을 사용하는 프로그램 */
//    bool x = 123;
//    bool y = -8;
//    bool z = 0;
//    bool t = -0;
//    bool u = true;
//    bool v = false;
//
//    cout << "x의 값은? "<< x << endl;
//    cout << "y의 값은? "<< y << endl;
//    cout << "z의 값은? "<< z << endl;
//    cout << "t의 값은? "<< t << endl;
//    cout << "u의 값은? "<< u << endl;
//    cout << "v의 값은? "<< v << endl;
//    // * 0이 아닌 값은 양수와 음수를 포함해서 모두 true로 변환

// 부동 소수점 자료형(floating-point)
// 소수점을 갖는 숫자 : 부동 소수점 => 모두 부호가 있는 숫자이다
// float <= double <= long double

//    /* 원의 반지름을 기반으로 둘레와 면적을 구하는 프로그램 */
//    const double PI = 3.14159;
//    double radius;
//    double perimeter;
//    double area;
//
//    cout << "원의 반지름 입력:";
//    cin >> radius;
//
//    perimeter = 2 * PI * radius;    // 둘레
//    area = PI * PI * radius;
//
//    cout << "반지름: " << radius << endl;
//    cout << "둘레: " << perimeter << endl;
//    cout << "면적: " << area << endl;

// void 자료형
// void 자료형은 값이 없음을 나타내는 특별한 자료형

// 문자열 자료형
// C언어로부터 이어진 자료형 널 문자로 끝나는 문자의 집합
// 사용자 정의 자료형인 클래스로 새로운 문자열 자료형을 제공

    string first;
    string initial;
    string last;
    string space = " ";
    string dot = ".";
    string fullName;

    cout << "성(first name) 입력하기 :";
    cin >> first;
    cout << "이름(last name) 입력하기 :";
    cin >> last;
    cout << "이니셜(initial) 입력하기 :";
    cin >> initial;

    fullName = first + space + last + dot + space + initial;

    cout << "전체 이름(full name): " << fullName;



    return 0;
}