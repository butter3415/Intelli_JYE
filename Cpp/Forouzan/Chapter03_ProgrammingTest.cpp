//
// Created by 82104 on 2023-02-12.
// 03. ���α׷��� ����

# include <iostream>
# include <limits>
using namespace std;

int main(){
//// * 01. short �ڷ����� unsigned int �ڷ����� �ִ밪�� �ּҰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.
//// * 02. long �ڷ����� long long �ڷ����� �ִ밪�� �ּҰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.
//// * 03. float �ڷ����� double �ڷ����� �ִ밪�� �ּҰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.
//
//    unsigned int maxI = numeric_limits<unsigned int>::max();
//    unsigned int minI = numeric_limits<unsigned int>::min();
//
//    cout << "int���� �ִ밪 : " << maxI << endl;
//    cout << "int���� �ּҰ� : " << minI << endl;
//
//    short maxS = numeric_limits<short>::max();
//    short minS = numeric_limits<short>::min();
//
//    cout << "short���� �ִ밪 : " << maxS << endl;
//    cout << "short���� �ּҰ� : " << minS << endl;
//
//    long maxl = numeric_limits<long>::max();
//    long minl = numeric_limits<long>::min();
//
//    cout << "long���� �ִ밪 : " << maxl << endl;
//    cout << "long���� �ּҰ� : " << minl << endl;
//
//    long long maxll = numeric_limits<long long>::max();
//    long long minll = numeric_limits<long long>::min();
//
//    cout << "long long���� �ִ밪 : " << maxll << endl;
//    cout << "long long���� �ּҰ� : " << minll << endl;
//
//    float maxf = numeric_limits<float>::max();
//    float minf = numeric_limits<float>::min();
//
//    cout << "float���� �ִ밪 : " << maxf << endl;
//    cout << "float���� �ּҰ� : " << minf << endl;
//
//    double maxd = numeric_limits<double>::max();
//    double mind = numeric_limits<double>::min();
//
//    cout << "double���� �ִ밪 : " << maxd << endl;
//    cout << "double���� �ּҰ� : " << mind << endl;

//// 04. int �ڷ����� ������ �Է¹޾Ƽ�, �� ��° �ڸ����� ������ �� ����ϴ� ���α׷��� ���弼��.
//    int number, secondNum;
//
//    cout << "int �ڷ����� ���� �Է� :";
//    cin >> number;
//
//    secondNum = (number % 100) / 10 ;
//
//    cout << "������ �� ��° �ڸ��� : " << secondNum << endl ;

//// 05. int �ڷ����� ������ �Է¹޾Ƽ�, ù ��°���� �� ��° �ڸ����� ���� ����ϴ� ���α׷��� ���弼��.
//    int number, firstNum, secondNum, thirdNum;
//
//    cout << "int �ڷ��� ���� �Է� :";
//    cin >> number;
//
//    firstNum = number % 10;
//    secondNum = (number % 100) / 10 ;
//    thirdNum = (number % 1000) / 100 ;
//
//    cout << "�Է��� ���� : " << number << endl;
//    cout << "ù��° �ڸ��� : " << firstNum << endl;
//    cout << "�ι�° �ڸ��� : " << secondNum << endl;
//    cout << "����° �ڸ��� : " << thirdNum << endl;

// 06. �� �ڸ����� ������ �־����� ��, �ش� ���ڸ� �������� �ϴ� ������ �����ϰ� ����ϴ� ���α׷��� ���弼��.
//     (���� ��� 372�� �־����� 273�� ���).
    int number, firstNum, secondNum, thirdNum, resultNum;

    cout << "int �ڷ��� ���� �Է� :";
    cin >> number;

    firstNum = number % 10;
    secondNum = (number % 100) / 10 ;
    thirdNum = (number % 1000) / 100 ;
    resultNum = (firstNum * 100) + (secondNum * 10) + (thirdNum * 1);

    cout << "�Է��� ���� : " << number << endl;
    cout << "ù��° �ڸ��� : " << firstNum << endl;
    cout << "�ι�° �ڸ��� : " << secondNum << endl;
    cout << "����° �ڸ��� : " << thirdNum << endl;
    cout << "����� ���� : " << resultNum << endl;





}
