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

//// 06. �� �ڸ����� ������ �־����� ��, �ش� ���ڸ� �������� �ϴ� ������ �����ϰ� ����ϴ� ���α׷��� ���弼��.
////     (���� ��� 372�� �־����� 273�� ���).
//    int number, firstNum, secondNum, thirdNum, resultNum;
//
//    cout << "int �ڷ��� ���� �Է� :";
//    cin >> number;
//
//    firstNum = number % 10;
//    secondNum = (number % 100) / 10 ;
//    thirdNum = (number % 1000) / 100 ;
//    resultNum = (firstNum * 100) + (secondNum * 10) + (thirdNum * 1);
//
//    cout << "�Է��� ���� : " << number << endl;
//    cout << "ù��° �ڸ��� : " << firstNum << endl;
//    cout << "�ι�° �ڸ��� : " << secondNum << endl;
//    cout << "����° �ڸ��� : " << thirdNum << endl;
//    cout << "����� ���� : " << resultNum << endl;

//// 07. �ð��� �Է����� �޾��� ��, �̸� ��, ��(0~6�� ������ ��), �ð�(0~23�� ������ ��)���� ��ȯ�ϴ� ���α׷��� ���弼��.
//
//    int number, dayNum, hourNum, weekNum;
//
//    cout << "�� �ð��ΰ���? :";
//    cin >> number;
//
//    weekNum = ((number / 24) / 7) ;
//    dayNum = (number - (weekNum * 7 * 24)) / 24;
//    hourNum =(number - (weekNum * 7 * 24)) - (dayNum * 24);
//
//    cout << number << "�ð��� " << weekNum << "�� " << dayNum << "�� " << hourNum << "�ð� " << endl;

//// 08. �ð��� ��, ��, �� ������ �Է¹޾��� ��, �̸� �� ������ ��ȯ�ϴ� ���α׷��� ���弼��.
//    int number, hourNum, minuteNum, secondNum;
//
//    cout << "�ð���? (��, ��, �� ���ʷ� �Է�)" << endl;
//    cout << "�ð� :";
//    cin >> hourNum;
//    cout << "�� :";
//    cin >> minuteNum;
//    cout << "�� :";
//    cin >> secondNum;
//
//    number = (hourNum * 3600) + (minuteNum * 60) + secondNum;
//
//    cout << hourNum << "�ð� " << minuteNum << "�� " << secondNum << "�ʸ� �ʷ� ȯ���ϸ� ";
//    cout << number  << "���̴�.";

//// 09. �� ����(long �ڷ���)�� �Է¹޾��� ��, �̸� ��, ��, �� ������ ��ȯ�ϴ� ���α׷��� ���弼��.
//    long number;
//    int hourNum, minuteNum, secondNum;
//
//    cout << "�� ����(long �ڷ���) �Է� :";
//    cin >> number;
//
//    hourNum = number / 3600L;
//    minuteNum = (number - (hourNum * 3600)) / 60;
//    secondNum = (number - (hourNum * 3600)) - (minuteNum * 60) ;
//
//    cout << number << "�� ��, ��, �� ������ ��Ÿ���� ";
//    cout << hourNum << "�ð� " << minuteNum << "�� " << secondNum << "��." << endl;

//// 10. 4���� ����(int �ڷ���)�� �Է¹ް�, �̸� ������� ��� ����(double �ڷ���)�� ã�� ����ϴ� ���α׷��� ���弼��.
//    int num1, num2, num3, num4;
//    double sumNum, averageNum;
//
//    cout << "4�� ���� �Է� :" << endl;
//    cout << "���� 1 :" ;
//    cin >> num1;
//    cout << "���� 2 :" ;
//    cin >> num2;
//    cout << "���� 3 :" ;
//    cin >> num3;
//    cout << "���� 4 :" ;
//    cin >> num4;
//
//    sumNum = num1 + num2 + num3 + num4;
//    averageNum = sumNum / 4;
//
//    cout << "���� ��� : " << averageNum << endl;

//// 11. �־��� ���� �µ�(Celsius)�� ȭ�� �µ�(Fahrenheit)�� ��ȯ�ؼ� ����ϴ� ���α׷��� ���弼��.
////     ���� �µ��� ȭ�� �µ��� ��ȯ�ϴ� ������ F = (9/5)C + 32 �Դϴ�.
//
//    double cTem;
//    double fTem;
//
//    cout << "���� �µ� �Է� : " ;
//    cin >> cTem;
//
//    fTem = (9.0/5.0) * cTem + 32.0;
//
//    cout << "���� �µ� " << cTem << "�ɴ� ȭ���µ� " << fTem << "�� �̴�.";

//// 12. �־��� ȭ�� �µ�(Fahrenheit)�� ���� �µ�(Celsius)�� ��ȯ�ؼ� ����ϴ� ���α׷����� ���弼��.
////     ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ������ C = (F-32) * 5/9 �Դϴ�.
//
//    double cTem, fTem;
//
//    cout << "ȭ�� �µ� �Է� :" ;
//    cin >> fTem;
//
//    cTem = (fTem - 32.0) * 5.0 / 9.0;
//
//    cout << "ȭ�� �µ� " << fTem << "���� ���� �µ� " << cTem << "�� �̴�.";

// 13. �Ƹ�����Ʈ�� �����Ͽ� �⺻ 40�ð��� ���Ѵٰ� �����մϴ�. �׸��� 40�ð��� �Ѱ� ���� �ϴ� ���, �Ѵ� �ñ��� 60%�� �߰��� ���޵˴ϴ�.
//     �������� �⺻ �޿��� �߰��� ���� �ð��� �Է����� ��, ��ü �޿��� ���ϴ� ���α׷��� �ۼ��ϼ���.
    int payMoney, workHour, hourPay;
    long salary;

    cout << "�⺻�� :" ;
    cin >> payMoney;
    cout << "���� �ð� :" ;
    cin >> workHour;

    hourPay = payMoney / 40;

    salary = payMoney + ((workHour % 40) * hourPay * 1.6);

    cout << "��ü �޿��� " << salary << "�Դϴ�.";



}
