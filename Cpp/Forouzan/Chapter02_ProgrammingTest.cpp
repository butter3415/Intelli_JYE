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
//    cout << "��ð� ?";
//    cin >> hourNum;
//    cout << "��� ?";
//    cin >> minuteNum;
//    cout << "���� ?";
//    cin >> secondNum;
//
//    totalSecond = hourNum * 360 + minuteNum * 60 + secondNum;
//
//    cout << "�� " << totalSecond << "���Դϴ�~";

//    // 05
//    int num1, num2, num3, num4;
//    int sumNum;
//
//    cout << "�� ���� ���ڸ� �Է��Ͻÿ�." << endl;
//    cin >> num1;
//    cin >> num2;
//    cin >> num3;
//    cin >> num4;
//
//    sumNum = num1 + num2 + num3 + num4;
//    cout << "�� ���� ���� ���հ�� " << sumNum << " �Դϴ�!";

//    // 06
//    int side;
//    int perimeter;
//    int area;
//
//    cout << "���簢�� ���� ���̴� ?" ;
//    cin >> side;
//
//    perimeter = side * 4;
//    area = side * side;
//
//    cout << "���簢���� �ѷ��� : " << perimeter << "cm �Դϴ�." << endl;
//    cout << "���簢���� ���̴� : " << area  << "�� �Դϴ�." << endl;

//    // 07
//    string firstName;
//    string lastName;
//    string comma = ",";
//    string totalName;
//
//    cout << "����� ���� �����Դϱ� ?";
//    cin >> firstName;
//    cout << "����� �̸��� �����Դϱ� ?";
//    cin >> lastName;
//    totalName = lastName + comma + firstName;
//
//    cout << "��! ����� �̸��� " << totalName << "�̱���!";

//    // 08
//    int num1;
//    int num2;
//    int sumNum1;
//
//    cout << "�� ���� �Է��ϼ���(����) :" << endl;
//    cin >> num1;
//    cin >> num2;
//
//    sumNum1 = num1 + num2;
//
//    cout << "�� ���� ���� " << sumNum1 << "�Դϴ�!" << endl;
//
//    cout << "----------------------------------------" << endl;
//
//    float num3;
//    float num4;
//    float sumNum2;
//
//    cout << "�� ���� �Է��ϼ���(�ε��Ҽ���) :" << endl;
//    cin >> num3;
//    cin >> num4;
//
//    sumNum2= num3 + num4;
//    cout << "�� ���� ���� " << sumNum2 << "�Դϴ�!" << endl;

//    // 09   +++ �߰� ���� �ʿ�(ū �� �Է� �� ���� �������� ǥ��)
//    const double tax = 0.09;
//    float saleCost;
//    double resultCost;
//
//    cout << "�� ��ǰ�� �Ǹ� �ݾ���?";
//    cin >> saleCost;
//
//    resultCost = saleCost + (saleCost * tax);
//
//    cout << "�Ǹűݾ� : " << saleCost << endl;
//    cout << "�Һ� : " << tax * 100 << "%" << endl;
//    cout << "��ü �ݾ� : " << resultCost << endl;

    // 10
    string cityName = "��õ��";
    string middleCityName = "����Ȧ��";
    string streetName = "���η�85����";
    string streetNumber = "775";
    string mailNumber = "N/A";
    string comma = ",";
    string space = " ";
    string totalCityName;

    totalCityName = cityName + comma + space + middleCityName + comma + space + streetName + comma + space + streetNumber
                    + comma + space + mailNumber;

    cout << "������ �� �ּҴ� " << totalCityName << "�Դϴ�~" << endl;



}