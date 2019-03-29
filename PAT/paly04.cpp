//
// Created by 刘鹏 on 2019-03-26.
//
#include <iostream>
#include <string>
using namespace std;

void pat_paly004() {
    int number = 0;
    cin >> number;
    int num = 5 * (number - 32) / 9;
    cout << "Celsius = " ;
    cout << num << endl;
}

