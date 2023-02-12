//
// Created by 82104 on 2023-02-12.
// 03. 프로그래밍 문제

# include <iostream>
# include <limits>
using namespace std;

int main(){
    // * 01. short 자료형과 unsigned int 자료형의 최대값과 최소값을 찾는 프로그램을 작성하시오.
    // * 02. long 자료형과 long long 자료형의 최대값과 최소값을 찾는 프로그램을 작성하시오.
    // * 03. float 자료형과 double 자료형의 최대값과 최소값을 찾는 프로그램을 작성하시오.

    unsigned int maxI = numeric_limits<unsigned int>::max();
    unsigned int minI = numeric_limits<unsigned int>::min();

    cout << "int형의 최대값 : " << maxI << endl;
    cout << "int형의 최소값 : " << minI << endl;

    short maxS = numeric_limits<short>::max();
    short minS = numeric_limits<short>::min();

    cout << "short형의 최대값 : " << maxS << endl;
    cout << "short형의 최소값 : " << minS << endl;

    long maxl = numeric_limits<long>::max();
    long minl = numeric_limits<long>::min();

    cout << "long형의 최대값 : " << maxl << endl;
    cout << "long형의 최소값 : " << minl << endl;

    long long maxll = numeric_limits<long long>::max();
    long long minll = numeric_limits<long long>::min();

    cout << "long long형의 최대값 : " << maxll << endl;
    cout << "long long형의 최소값 : " << minll << endl;

    float maxf = numeric_limits<float>::max();
    float minf = numeric_limits<float>::min();

    cout << "float형의 최대값 : " << maxf << endl;
    cout << "float형의 최소값 : " << minf << endl;

    double maxd = numeric_limits<double>::max();
    double mind = numeric_limits<double>::min();

    cout << "double형의 최대값 : " << maxd << endl;
    cout << "double형의 최소값 : " << mind << endl;

}
