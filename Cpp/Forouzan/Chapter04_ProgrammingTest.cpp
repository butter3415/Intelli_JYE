// 04 ���ǹ�
// Created by 82104 on 2023-02-19.
// 04. ���α׷��� ����

# include <iostream>
using namespace std;

int main() {
//// *01. ����ڷκ��� ��ȣ ���� �� �ڸ� ������ �Է¹ް�, �ڸ����� ���� �ٲ㼭 ����ϴ� ���α׷��� ����ÿ�.
//    int number, firstNum, secondNum, changeNum;
//
//    cout << "�� �ڸ� ���� �Է� :";
//    cin >> number;
//
//    firstNum = number / 10;
//    secondNum = number % 10;
//
//    changeNum = (secondNum * 10) + (firstNum * 1);
//
//    cout << "�ڸ��� ���� �ٲ� ���� : " << changeNum ;

//// * 02. 3���� ������ �Է¹ް�, ���� ���� ���� ����ϴ� ���α׷��� ���弼��.
//    int num1, num2, num3, minNum;
//
//    cout << "ù ��° ���� :";
//    cin >> num1;
//    cout << "�� ��° ���� :";
//    cin >> num2;
//    cout << "�� ��° ���� :";
//    cin >> num3;
//
//    if ((num1 < num2) && (num1 < num3)){
//        minNum = num1;
//        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
//    } else if ((num2 < num1) && (num2 < num3)){
//        minNum = num2;
//        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
//    } else if ((num3 < num1) && (num3 < num2)){
//        minNum = num3;
//        cout << "3���� �� �� ���� ���� ���� " << minNum << "�̴�." << endl;
//    } else {
//        cout << "���� �ٽ� �Է��ϼ���.";
//    }

//// * 03. ����ڷκ��� 1 ~ 12 ������ ���ڸ� �Է¹ް� �ش� ���� January, February, ... , December �� ���� ������ ����� ����ϴ� ���α׷��� ���弼��.
//    int num1To12;
//    string monthEnglish;
//
//    cout << "���� �Է�(1~12) :";
//    cin >> num1To12;
//
//    switch (num1To12) {
//        case 1 : monthEnglish = "January"; break;
//        case 2 : monthEnglish = "February"; break;
//        case 3 : monthEnglish = "March"; break;
//        case 4 : monthEnglish = "April"; break;
//        case 5 : monthEnglish = "May"; break;
//        case 6 : monthEnglish = "June"; break;
//        case 7 : monthEnglish = "July"; break;
//        case 8 : monthEnglish = "August"; break;
//        case 9 : monthEnglish = "September"; break;
//        case 10 : monthEnglish = "October"; break;
//        case 11 : monthEnglish = "November"; break;
//        case 12 : monthEnglish = "December"; break;
//    }
//
//    cout << num1To12 << "��: " << monthEnglish << ".";

//// * 04. ������ ����(�Ϲ� �¿��� 'c', ���� 'b', Ʈ�� 't')�� �����忡�� ������ �ִ� �ð��� �Է¹��� ��,
//// *     ������ ���� ���� ��ݿ� ���� ����� ����ϴ� ���α׷��� �ۼ��ϼ���.
//
//    int parkingHour, parkingPay;
//    char carKind;
//
//    cout << "������ ����(�Ϲ� �¿��� - c, ���� - b, Ʈ�� - t) :";
//    cin >> carKind;
//    cout << "�����忡�� ������ �ִ� �ð� :";
//    cin >> parkingHour;
//
//    if ((carKind == 'c') || (carKind == 'b') || (carKind == 't')) {
//        if (carKind == 'c') {
//            parkingPay = parkingHour * 2;
//        } else if (carKind == 'b') {
//            parkingPay = parkingHour * 3;
//        } else if (carKind == 't') {
//            parkingPay = parkingHour * 4;
//        }
//        cout << "�ش� ������ ���� ����� " << parkingPay << "�޷��Դϴ�.";
//    } else {
//        cout << "�ٽ� �Է� �ϼ���.";
//    }

//// * 05. �л��� ������ ������� ������ ���ϴ� ���α׷��� ���弼��.
//// *     ����(0~100�� ����)�� 3�� �о� ���̰�, ������ ���� ���ؿ� ���� ������ ����մϴ�.
//
//    int num1, num2, num3;
//    int average;
//    char grade;
//
//    cout << "ù��° ���� ���� :";
//    cin >> num1;
//    cout << "�ι�° ���� ���� :";
//    cin >> num2;
//    cout << "����° ���� ���� :";
//    cin >> num3;
//
//    average = (num1 + num2 + num3) / 3;
//
//    if (average >= 90){
//        grade = 'A';
//    } else if ((average < 90) && (average >= 80)){
//        if (num3 > 90){
//            grade = 'A';
//        } else if (num3 <= 90){
//            grade = 'B';
//        }
//    } else if ((average < 80) && (average >= 70)){
//        if (num3 > 80){
//            grade = 'B';
//        } else if (num3 <= 80){
//            grade = 'C';
//        }
//    } else if ((average < 70) && (average >= 60)){
//        if (num3 > 70){
//            grade = 'C';
//        } else if (num3 <= 70){
//            grade = 'D';
//        }
//    } else if ((average < 60)){
//        if (num3 > 60){
//            grade = 'D';
//        } else if (num3 <= 60){
//            grade = 'F';
//        }
//    }
//
//    cout << "�ش� �л��� ���� ����� " << average << "���̸�, " << endl;
//    cout << "����° ���� ������ " << num3 << "���̹Ƿ�, " << endl;
//    cout << "�ش� �л��� ������ '" << grade << "'�̴�." ;

// * 06. ���б����� �л��� �� �����Ḧ ����ϰ� ����ϴ� ���α׷��� ���弼��. �л����� 12������ ���� ������ 10�޷��� �����Ḧ �����մϴ�.
// *     12������ �Ѵ� �з��� �����ᰡ �����ϴ�. ��Ϻ�� �л� �� 10�޷���� �����մϴ�.
//       <���� ���� �Ұ�...>

//// * 07. ���������� ������ ������ ��, ������ ���� ������ ���� �߰����� ������ ���ϴ�. ���� �ϳ��� ���ݰ� ���� ������ �Է� �ް�,
//// *     ������ ����� ��ü ������ ����ϴ� ���α׷��� �ۼ��ϼ���.
//// *     1-9�� : 0% | 10-49�� : 3% | 50-99�� : 5% | 100�� �̻� : 10%
//    int quantity;
//    double prize, basePrize, totalPrize;
//
//    cout << "���� �ϳ��� ���� :";
//    cin >> prize;
//    cout << "���� ���� :";
//    cin >> quantity;
//
//    basePrize = quantity * prize;
//
//    if ((quantity >= 1) && (quantity < 10)){
//        totalPrize = basePrize - (basePrize * 0.0);
//    } else if ((quantity >= 10) && (quantity < 50)){
//        totalPrize = basePrize - (basePrize * 0.03);
//    } else if ((quantity >= 50) && (quantity < 100)){
//        totalPrize = basePrize - (basePrize * 0.05);
//    } else if ((quantity >= 100)){
//        totalPrize = basePrize - (basePrize * 0.10);
//    }
//
//    cout << "�ش� ������ " << quantity << "�� �������� �� �ݾ� : " << totalPrize << endl;

//// * 08. ����ڷκ��� ���� ��ǥ x�� y�� �Է¹ް�, ���� ��ǥ��(��ī��Ʈ ��ǥ��)���� ���� �� ��и鿡 ��ġ�ϴ����� ����ϴ� ���α׷��� ���弼��.
//// *     ���� �� x�� y�� ��� ������ ���� 1-��и鿡 ��ġ�ϸ�, ��� ������� ���� 3-��и鿡 ��ġ�մϴ�.
//    int x, y;
//    string coordinate;
//
//    cout << "x �� :";
//    cin >> x;
//    cout << "y �� :";
//    cin >> y;
//
//    if ((x > 0) && (y > 0)){
//        coordinate = "1-��и�";
//    } else if ((x < 0) && (y > 0)){
//        coordinate = "2-��и�";
//    } else if ((x < 0) && (y < 0)){
//        coordinate = "3-��и�";
//    } else if ((x > 0) && (y < 0)){
//        coordinate = "4-��и�";
//    }
//
//    cout << "��ǥ ( " << x << ", " << y << " ) �� " << coordinate << "�̴�.";

//// * 09. [���α׷� 4-17]�� ������ ����(2���� 28���� �ƴ϶� 29���� ���)�� �߰��ؼ� ���α׷��� �����ϼ���.
//// *     ���α׷��� ����ڷκ��� �߰� ������ �Է¹޾ƾ� �ϸ�, ������ ������ ���� ������ ���� �� �ֽ��ϴ�.
//// *     leapYear = (year * 400) || (year % 4 && ! (year % 100))
//
//    int year, month, day;
//    int totalDays = 0;
//    bool leapYear;
//
//    cout << "�� �� :";
//    cin >> year;
//    cout << "�� �� :";
//    cin >> month;
//    cout << "�� �� :";
//    cin >> day;
//
//    leapYear = (year * 400) || (year % 4 && ! (year % 100));
//
//    int m01 = 31, m03 = 31, m05 = 31, m07 = 31, m08 = 31, m10 = 31, m12 = 31;
//    int m02 = 28, m04 = 30, m06 = 30, m09 = 30, m11 = 30;
//
//    if (leapYear) {
//        m02 = 29;
//        switch (month) {
//            case 12 :
//                totalDays += m11;
//            case 11 :
//                totalDays += m10;
//            case 10 :
//                totalDays += m09;
//            case 9 :
//                totalDays += m08;
//            case 8 :
//                totalDays += m07;
//            case 7 :
//                totalDays += m06;
//            case 6 :
//                totalDays += m05;
//            case 5 :
//                totalDays += m04;
//            case 4 :
//                totalDays += m03;
//            case 3 :
//                totalDays += m02;
//            case 2 :
//                totalDays += m01;
//            case 1 :
//                totalDays += 0;
//        }
//    } else if (!leapYear){
//        switch (month) {
//            case 12 :
//                totalDays += m11;
//            case 11 :
//                totalDays += m10;
//            case 10 :
//                totalDays += m09;
//            case 9 :
//                totalDays += m08;
//            case 8 :
//                totalDays += m07;
//            case 7 :
//                totalDays += m06;
//            case 6 :
//                totalDays += m05;
//            case 5 :
//                totalDays += m04;
//            case 4 :
//                totalDays += m03;
//            case 3 :
//                totalDays += m02;
//            case 2 :
//                totalDays += m01;
//            case 1 :
//                totalDays += 0;
//        }
//    }
//
//    totalDays += day;
//
//    cout << "������ " << totalDays << "��° ���Դϴ�." << endl;

// * 10. Ư�� ��¥�� ������ ���ߴ� ÿ���� ���� (Zeller's congruence)�� Ȱ���ؼ� ����ڷκ��� ����, ��, ���� �Է¹޾��� ��
// *     ������ ����ϴ� ���α׷��� ���弼��. ÿ���� ������ ������ �����ϴ�.
// *     weekday = (day + 26 * (monoth - 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7
// *     ... �̰� ����

// * 11. ����ڷκ��� �޷� ���� �Է¹ް�, �޷� ����� �̸� ������ �� ������ ������ �ּҰ� �Ǵ� ��츦 ����ϴ� ���α׷��� ���弼��.
// *     0�� �ƴ� ���� ���� ���� ����ϸ� �˴ϴ�. ����� �޷��� 100�޷�, 50�޷�, 20�޷�, 10�޷�, 5�޷�, 1�޷� ���� �ֽ��ϴ�.


}