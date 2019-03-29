//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly17() {

    string str;
    cin >> str;
    bool key1 = false;
    bool key2 = false;
    double length = str.length();

    if (((int)(str[length-1]-'0'))%2==0) {
        key1 = true;
    }
    if (str[0] == '-') {
        key2 = true;
    }

    double count = 0;
    for (int i=0;i<length;i++) {
        if (str[i] == '2') {
            count ++;
        }
    }

    //cout << count << endl;
    double num;
    if (key2) {
        num = count/(length-1);
        num = num * 1.5;
        if (key1) {
            num = num * 2;
        }
        cout << num << endl;
    } else {
        double num = count/length;
        if (key1) {
            num = num * 2;
        }
        cout << num << endl;
    }

    num = num * 100;

    cout<<setiosflags(ios::fixed)<<setprecision(2);
    //需要头文件#include <iomanip>

    cout << num << "%" << endl;
}

