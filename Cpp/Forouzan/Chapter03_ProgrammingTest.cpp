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

// 06. 세 자릿수의 정수가 주어졌을 때, 해당 숫자를 역순으로 하는 정수를 구성하고 출력하는 프로그램을 만드세요.
//     (예를 들어 372가 주어지면 273을 출력).
    int number, firstNum, secondNum, thirdNum, resultNum;

    cout << "int 자료형 정수 입력 :";
    cin >> number;

    firstNum = number % 10;
    secondNum = (number % 100) / 10 ;
    thirdNum = (number % 1000) / 100 ;
    resultNum = (firstNum * 100) + (secondNum * 10) + (thirdNum * 1);

    cout << "입력한 정수 : " << number << endl;
    cout << "첫번째 자릿수 : " << firstNum << endl;
    cout << "두번째 자릿수 : " << secondNum << endl;
    cout << "세번째 자릿수 : " << thirdNum << endl;
    cout << "결과값 정수 : " << resultNum << endl;





}
