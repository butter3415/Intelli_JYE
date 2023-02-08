//
// Created by 82104 on 2023-02-08.
//

# include <iostream>
# include <string>
using namespace std;

int main()
{
//    // 01
//    cout << "*" << endl;
//    cout << "**" << endl;
//    cout << "***" << endl;

//    // 02
//    cout << "*" << endl;
//    cout << "**" << endl;
//    cout << "***" << endl;
//    cout << "**" << endl;
//    cout << "*" << endl;

//    // 03
//    cout << "H\tH" << endl;
//    cout << "H\tH" << endl;
//    cout << "HHHHHHHHH" << endl;
//    cout << "H\tH" << endl;
//    cout << "H\tH" << endl;

//    // 04
//    int secondNum;
//    int minuteNum;
//    int hourNum;
//    int totalSecond;
//
//    cout << "몇시간 ?";
//    cin >> hourNum;
//    cout << "몇분 ?";
//    cin >> minuteNum;
//    cout << "몇초 ?";
//    cin >> secondNum;
//
//    totalSecond = hourNum * 360 + minuteNum * 60 + secondNum;
//
//    cout << "총 " << totalSecond << "초입니다~";

//    // 05
//    int num1, num2, num3, num4;
//    int sumNum;
//
//    cout << "네 개의 숫자를 입력하시오." << endl;
//    cin >> num1;
//    cin >> num2;
//    cin >> num3;
//    cin >> num4;
//
//    sumNum = num1 + num2 + num3 + num4;
//    cout << "네 개의 숫자 총합계는 " << sumNum << " 입니다!";

//    // 06
//    int side;
//    int perimeter;
//    int area;
//
//    cout << "정사각형 변의 길이는 ?" ;
//    cin >> side;
//
//    perimeter = side * 4;
//    area = side * side;
//
//    cout << "정사각형의 둘레는 : " << perimeter << "cm 입니다." << endl;
//    cout << "정사각형의 넓이는 : " << area  << "㎠ 입니다." << endl;

//    // 07
//    string firstName;
//    string lastName;
//    string comma = ",";
//    string totalName;
//
//    cout << "당신의 성은 무엇입니까 ?";
//    cin >> firstName;
//    cout << "당신의 이름은 무엇입니까 ?";
//    cin >> lastName;
//    totalName = lastName + comma + firstName;
//
//    cout << "네! 당신의 이름은 " << totalName << "이군요!";

//    // 08
//    int num1;
//    int num2;
//    int sumNum1;
//
//    cout << "두 수를 입력하세요(정수) :" << endl;
//    cin >> num1;
//    cin >> num2;
//
//    sumNum1 = num1 + num2;
//
//    cout << "두 수의 합은 " << sumNum1 << "입니다!" << endl;
//
//    cout << "----------------------------------------" << endl;
//
//    float num3;
//    float num4;
//    float sumNum2;
//
//    cout << "두 수를 입력하세요(부동소수점) :" << endl;
//    cin >> num3;
//    cin >> num4;
//
//    sumNum2= num3 + num4;
//    cout << "두 수의 합은 " << sumNum2 << "입니다!" << endl;

//    // 09   +++ 추가 보완 필요(큰 수 입력 시 지수 형식으로 표시)
//    const double tax = 0.09;
//    float saleCost;
//    double resultCost;
//
//    cout << "이 상품의 판매 금액은?";
//    cin >> saleCost;
//
//    resultCost = saleCost + (saleCost * tax);
//
//    cout << "판매금액 : " << saleCost << endl;
//    cout << "소비세 : " << tax * 100 << "%" << endl;
//    cout << "전체 금액 : " << resultCost << endl;

    // 10
    string cityName = "인천시";
    string middleCityName = "미추홀구";
    string streetName = "경인로85번길";
    string streetNumber = "775";
    string mailNumber = "N/A";
    string comma = ",";
    string space = " ";
    string totalCityName;

    totalCityName = cityName + comma + space + middleCityName + comma + space + streetName + comma + space + streetNumber
                    + comma + space + mailNumber;

    cout << "지혜의 집 주소는 " << totalCityName << "입니다~" << endl;



}