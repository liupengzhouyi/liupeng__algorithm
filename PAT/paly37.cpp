//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly37() {

    double a, b;
    cin >> a >> b;
    double c = a / b ;

    cout<<setiosflags(ios::fixed)<<setprecision(2);

    int aa = a;
    int bb = b;

    cout << aa << "/" << bb << "=" << c << endl;


}

