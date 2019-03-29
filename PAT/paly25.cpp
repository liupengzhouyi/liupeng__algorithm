//
// Created by 刘鹏 on 2019-03-28.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int knumber(string str) {
    int number = 0;
    if (str[0] == '-') {
        return -1;
    } else {
        for (int i=0;i<str.length();i++) {
            if (((int)(str[i] - '0') >= 0) && ((int)(str[i] - '0') <= 9)) {
                number = number * 10 + (int)(str[i] - '0');
            } else {
                number = -1;
                break;
            }
        }
    }
    //cout << number;
    return number;
}


void paly25() {

    string str1, str2;cin >> str1 >> str2;

    int numA = knumber(str1);
    int numB = knumber(str2);

    if (numA != -1 && numB != -1) {
        cout << numA << " + " << numB << " = " << numA + numB << endl;
    } else {
        if (numA == -1) {
            cout << "? + ";
            if (numB == -1) {
                cout << "? = ?" << endl;
            } else {
                cout << numB << " = ?" << endl;
            }
        } else {
            cout << numA << " + ";
            if (numB == -1) {
                cout << "? = ?" << endl;
            }
        }
    }
}


