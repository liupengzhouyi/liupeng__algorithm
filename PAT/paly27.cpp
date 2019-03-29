//
// Created by 刘鹏 on 2019-03-28.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;



void paly27() {

    string str = "";
    cin >> str;

    char chars[12];
    int k=0;
    bool key = true;
    for (int i=0;i<str.length();i++) {
        for (int j=0;j<k;j++) {
            if (str[i] == chars[j]) {
                key = false;
                //cout << "发现重复字符：" << str[i] << endl;
            }
        }
        if (key) {
            //cout << str[i] << endl;
            chars[k] = str[i];
            k++;
        }
        key = true;
    }
    for (int i=0;i<k;i++) {
        for (int j=i;j<k;j++) {
            if (chars[i] < chars[j]) {
                char temp = chars[j];
                chars[j] = chars[i];
                chars[i] = temp;
            }
        }
    }
    cout << "int[] arr = new int[]{";
    for (int i=0;i<k;i++) {
        cout << chars[i] ;
        if (i != k -1) {
            cout << ",";
        } else {
            cout << "};";
        }
    }

    cout << endl << "int[] index = new int[]{";
    for (int i=0;i<str.length();i++) {
        char c = str[i];
        for (int j=0;j<k;j++) {
            if (chars[j] == c) {
                cout << j ;
                break;
            }
        }
        if (i != str.length() - 1) {
            cout << ",";
        } else {
            cout << "};";
        }
    }
}


