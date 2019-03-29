//
// Created by 刘鹏 on 2019-03-27.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly12() {
    int n = 0;
    cin >> n;
    int t = 1;
    for (int i=0;i<n;i++) {
        t = t * 2;
    }
    cout << "2^"<< n << " = " << t << endl;
}
