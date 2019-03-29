//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly11() {
    string string1;
    string string2;
    getline(cin, string1);

    getline(cin, string2);

    //cout << string1 << endl;
    //cout << string2 << endl;

    for (int i=0;i<string2.length();i++) {
        for (int j=0;j<string1.length();j++) {
            if (string1[j] == string2[i]) {
                string1[j] = '*';
            }
        }
    }
    for (int i=0;i<string1.length();i++) {
        if (string1[i] == '*') {

        } else {
            cout << string1[i];
        }
    }
    cout << endl;
}

