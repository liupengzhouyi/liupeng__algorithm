//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void print(string str, string string1) {
    for (int i=0;i<string1.length();i++) {
        if (string1[i] == '@') {
            cout << str;
        } else {
            cout << string1[i];
        }
    }
    cout << endl;
}


void paly54() {

    string string1[100];
    int n;
    string str;
    cin >> str >> n;
    getchar();
    for (int i=0;i<n;i++){
        getline(cin, string1[i]);
    }
    bool key = false;
    if (n % 2 == 0) {
        //4
        for (int i=0;i<n;i++) {
            //cout << string1[i] << ":" << string1[n-1-i] << endl;
            if (string1[i] == string1[n-1-i]) {
                continue;
            } else {
                key = true;
                break;
            }
        }
    } else {
        for (int i=0;i<n;i++) {
            //cout << string1[i] << ":" << string1[n-1-i] << endl;
            if (string1[i] == string1[n-1-i]) {
                continue;
            } else {
                key = true;
                break;
            }
        }
    }

    if (key == false) {
        cout << "bu yong dao le" << endl;
    }

    for (int i=n-1;i>=0;i--) {
        //cout << i << endl;
        print(str, string1[i]);
        //cout << string1[i] << endl;
    }
};

