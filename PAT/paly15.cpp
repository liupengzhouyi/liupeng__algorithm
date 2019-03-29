//
// Created by 刘鹏 on 2019-03-27.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly15() {

    int n;
    string str;
    cin >> n >> str;

    for (int i=0;i<n/2;i++) {
        for (int j=0;j<n;j++) {
            cout << str ;
        }
        cout << endl;
    }

    if (n%2==1) {
        for (int j=0;j<n;j++) {
            cout << str ;
        }
        cout << endl;
    }

}

