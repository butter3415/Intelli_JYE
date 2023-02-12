//
// Created by 82104 on 2023-02-12.
// 03. 프로그래밍 문제

# include <iostream>
# include <limits>
using namespace std;

int main(){
//// * 01. short 자료형과 unsigned int 자료형의 최대값과 최소값을 찾는 프로그램을 작성하시오.
//// * 02. long 자료형과 long long 자료형의 최대값과 최소값을 찾는 프로그램을 작성하시오.
//// * 03. float 자료형과 double 자료형의 최대값과 최소값을 찾는 프로그램을 작성하시오.
//
//    unsigned int maxI = numeric_limits<unsigned int>::max();
//    unsigned int minI = numeric_limits<unsigned int>::min();
//
//    cout << "int형의 최대값 : " << maxI << endl;
//    cout << "int형의 최소값 : " << minI << endl;
//
//    short maxS = numeric_limits<short>::max();
//    short minS = numeric_limits<short>::min();
//
//    cout << "short형의 최대값 : " << maxS << endl;
//    cout << "short형의 최소값 : " << minS << endl;
//
//    long maxl = numeric_limits<long>::max();
//    long minl = numeric_limits<long>::min();
//
//    cout << "long형의 최대값 : " << maxl << endl;
//    cout << "long형의 최소값 : " << minl << endl;
//
//    long long maxll = numeric_limits<long long>::max();
//    long long minll = numeric_limits<long long>::min();
//
//    cout << "long long형의 최대값 : " << maxll << endl;
//    cout << "long long형의 최소값 : " << minll << endl;
//
//    float maxf = numeric_limits<float>::max();
//    float minf = numeric_limits<float>::min();
//
//    cout << "float형의 최대값 : " << maxf << endl;
//    cout << "float형의 최소값 : " << minf << endl;
//
//    double maxd = numeric_limits<double>::max();
//    double mind = numeric_limits<double>::min();
//
//    cout << "double형의 최대값 : " << maxd << endl;
//    cout << "double형의 최소값 : " << mind << endl;

//// 04. int 자료형의 정수를 입력받아서, 두 번째 자릿수를 추출한 뒤 출력하는 프로그램을 만드세요.
//    int number, secondNum;
//
//    cout << "int 자료형의 정수 입력 :";
//    cin >> number;
//
//    secondNum = (number % 100) / 10 ;
//
//    cout << "정수의 두 번째 자릿수 : " << secondNum << endl ;

//// 05. int 자료형의 정수를 입력받아서, 첫 번째부터 세 번째 자릿수를 각각 출력하는 프로그램을 만드세요.
//    int number, firstNum, secondNum, thirdNum;
//
//    cout << "int 자료형 정수 입력 :";
//    cin >> number;
//
//    firstNum = number % 10;
//    secondNum = (number % 100) / 10 ;
//    thirdNum = (number % 1000) / 100 ;
//
//    cout << "입력한 정수 : " << number << endl;
//    cout << "첫번째 자릿수 : " << firstNum << endl;
//    cout << "두번째 자릿수 : " << secondNum << endl;
//    cout << "세번째 자릿수 : " << thirdNum << endl;

//// 06. 세 자릿수의 정수가 주어졌을 때, 해당 숫자를 역순으로 하는 정수를 구성하고 출력하는 프로그램을 만드세요.
////     (예를 들어 372가 주어지면 273을 출력).
//    int number, firstNum, secondNum, thirdNum, resultNum;
//
//    cout << "int 자료형 정수 입력 :";
//    cin >> number;
//
//    firstNum = number % 10;
//    secondNum = (number % 100) / 10 ;
//    thirdNum = (number % 1000) / 100 ;
//    resultNum = (firstNum * 100) + (secondNum * 10) + (thirdNum * 1);
//
//    cout << "입력한 정수 : " << number << endl;
//    cout << "첫번째 자릿수 : " << firstNum << endl;
//    cout << "두번째 자릿수 : " << secondNum << endl;
//    cout << "세번째 자릿수 : " << thirdNum << endl;
//    cout << "결과값 정수 : " << resultNum << endl;

//// 07. 시간을 입력으로 받았을 때, 이를 주, 일(0~6일 사이의 값), 시간(0~23시 사이의 값)으로 변환하는 프로그램을 만드세요.
//
//    int number, dayNum, hourNum, weekNum;
//
//    cout << "몇 시간인가요? :";
//    cin >> number;
//
//    weekNum = ((number / 24) / 7) ;
//    dayNum = (number - (weekNum * 7 * 24)) / 24;
//    hourNum =(number - (weekNum * 7 * 24)) - (dayNum * 24);
//
//    cout << number << "시간은 " << weekNum << "주 " << dayNum << "일 " << hourNum << "시간 " << endl;

//// 08. 시간을 시, 분, 초 단위로 입력받았을 때, 이를 초 단위로 변환하는 프로그램을 만드세요.
//    int number, hourNum, minuteNum, secondNum;
//
//    cout << "시간은? (시, 분, 초 차례로 입력)" << endl;
//    cout << "시간 :";
//    cin >> hourNum;
//    cout << "분 :";
//    cin >> minuteNum;
//    cout << "초 :";
//    cin >> secondNum;
//
//    number = (hourNum * 3600) + (minuteNum * 60) + secondNum;
//
//    cout << hourNum << "시간 " << minuteNum << "분 " << secondNum << "초를 초로 환산하면 ";
//    cout << number  << "초이다.";

//// 09. 초 단위(long 자료형)를 입력받았을 때, 이를 시, 분, 초 단위로 변환하는 프로그램을 만드세요.
//    long number;
//    int hourNum, minuteNum, secondNum;
//
//    cout << "초 단위(long 자료형) 입력 :";
//    cin >> number;
//
//    hourNum = number / 3600L;
//    minuteNum = (number - (hourNum * 3600)) / 60;
//    secondNum = (number - (hourNum * 3600)) - (minuteNum * 60) ;
//
//    cout << number << "을 시, 분, 초 단위로 나타내면 ";
//    cout << hourNum << "시간 " << minuteNum << "분 " << secondNum << "초." << endl;

//// 10. 4개의 점수(int 자료형)를 입력받고, 이를 기반으로 평균 점수(double 자료형)를 찾아 출력하는 프로그램을 만드세요.
//    int num1, num2, num3, num4;
//    double sumNum, averageNum;
//
//    cout << "4개 점수 입력 :" << endl;
//    cout << "점수 1 :" ;
//    cin >> num1;
//    cout << "점수 2 :" ;
//    cin >> num2;
//    cout << "점수 3 :" ;
//    cin >> num3;
//    cout << "점수 4 :" ;
//    cin >> num4;
//
//    sumNum = num1 + num2 + num3 + num4;
//    averageNum = sumNum / 4;
//
//    cout << "점수 평균 : " << averageNum << endl;

//// 11. 주어진 섭씨 온도(Celsius)를 화씨 온도(Fahrenheit)로 변환해서 출력하는 프로그램을 만드세요.
////     섭씨 온도를 화씨 온도로 변환하는 공식은 F = (9/5)C + 32 입니다.
//
//    double cTem;
//    double fTem;
//
//    cout << "섭씨 온도 입력 : " ;
//    cin >> cTem;
//
//    fTem = (9.0/5.0) * cTem + 32.0;
//
//    cout << "섭씨 온도 " << cTem << "℃는 화씨온도 " << fTem << "℉ 이다.";

//// 12. 주어진 화씨 온도(Fahrenheit)를 섭씨 온도(Celsius)로 변환해서 출력하는 프로그램ㅇ르 만드세요.
////     화씨 온도를 섭씨 온도로 변환하는 공식은 C = (F-32) * 5/9 입니다.
//
//    double cTem, fTem;
//
//    cout << "화씨 온도 입력 :" ;
//    cin >> fTem;
//
//    cTem = (fTem - 32.0) * 5.0 / 9.0;
//
//    cout << "화씨 온도 " << fTem << "℉는 섭씨 온도 " << cTem << "℃ 이다.";

// 13. 아르바이트로 일주일에 기본 40시간을 일한다고 가정합니다. 그리고 40시간을 넘게 일을 하는 경우, 넘는 시급은 60%가 추가로 지급됩니다.
//     일주일의 기본 급여와 추가로 일한 시간을 입력했을 때, 전체 급여를 구하는 프로그램을 작성하세요.
    int payMoney, workHour, hourPay;
    long salary;

    cout << "기본급 :" ;
    cin >> payMoney;
    cout << "일한 시간 :" ;
    cin >> workHour;

    hourPay = payMoney / 40;

    salary = payMoney + ((workHour % 40) * hourPay * 1.6);

    cout << "전체 급여는 " << salary << "입니다.";



}
