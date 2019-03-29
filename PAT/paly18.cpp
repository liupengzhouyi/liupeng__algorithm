//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int getNumber18(string str) {

    int number = 0;

    for (int i=0;i<str.length();i++) {
        int num = (int)(str[i] - '0');
        number = number * 10 + num;
    }
    return number;

}

void paly18() {


    string str ;
    cin >> str;
    //cout << str << endl;
    string say1 = "Only hh:mm.  Too early to Dang.";

    string say2 = "Dang";

    string time1 ="";
    string time2 = "";

    bool key =false;

    for (int i=0;i<str.length();i++) {
        if (key == true) {
            time2 = time2 + str[i];
        }
        if (str[i] == ':') {
            key = true;
        }
        if (key == false) {
            time1 = time1 + str[i];
        }
    }

    int t1 = getNumber18(time1);
    int t2 = getNumber18(time2);

    //cout << t1 << endl;
    //cout << t2 << endl;

    if (t1 <=11) {
        cout << "Only " << time1 << ":" << time2 << ".  Too early to Dang.";
    } else if (t1 == 12) {
        if (t2 == 0) {
            cout << "Only " << time1 << ":" << time2 << ".  Too early to Dang.";
        } else {
            cout << say2 << endl;
        }
    } else {
        for (int i=0;i<t1-12;i++) {
            cout << say2 ;
        }
        if (t2 > 0) {
            cout << say2 << endl;
        }
    }

}

