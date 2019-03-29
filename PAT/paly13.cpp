//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly13() {
    int n = 0;
    cin >> n;
    int num = 0;
    int temp = 1;
    for (int i = 1; i <= n; i++) {
        temp = temp * i;
        num = num + temp;
    }
    cout << num << endl;
}