// 04 조건문
// Created by 82104 on 2023-02-15.
// 02 논리 표현식

// 복잡한 결정을 만들 때 활용할 수 있는 3가지 논리 표현식
// 논리 표현식 : 피연산자 하나 이상이 불 자료형이고 최종적으로 불 자료형을 생성하는 표현식
// NOT(!, 논리 부정) - 우선순위가 높으나 결합 방향이 오른쪽에서 왼쪽
// AND(&&, 논리곱), OR(||, 논리합) - 우선순위가 굉장히 낮다

// NOT 표현식 : 피연산자 하나, 불 자료형으로 변환 후 연산
// AND 표현식 : 피연산자 2개 모두 true일 때만 결과 true, 이외의 경우 모두 false.
// OR 표현식 : 피연산자 2개 모두 false일 때만 결과 false, 이외의 경우 모두 true.
// * 결과를 쉽게 이해하려면 괄호 사용

# include <iostream>
using namespace std;

int main() {

//// [2] 논리 표현식 사용
//// : 관계 표현식과 일치 표현식을 논리 표현식으로 조합하면 복잡한 조건을 만들 수 있다.
//
//// - AND 표현식 사용 (조건1 && 조건2)
//    int age;
//    bool ageLimit;
//
//    cout << "나이 :";
//    cin >> age;
//
//    if ((age >= 25) && (age <= 100)) {
//        cout << "자동차를 대여할 수 있습니다.";
//    } else {
//        cout << "죄송합니다. 자동차 대여가 어렵습니다.";
//    }

// - OR 표현식 사용 (조건1 || 조건2)
// * 특정한 온도 범위에 따라 에어컨을 냉방 또는 난방으로 가동하는 프로그램

    int temperature;
    bool hotTemp, coolTemp;

    cout << "현재 온도 :";
    cin >> temperature;

    if ((temperature >= 23) || (temperature <= 15)){
        cout << "에어컨이 켜집니다." << endl;
        if (temperature >= 23){
            cout << "냉방 모드로 작동합니다.";
        } else if (temperature <= 15){
            cout << "난방 모드로 작동합니다.";
        }
    } else {
        cout << "에어컨이 꺼집니다.";
    }





}