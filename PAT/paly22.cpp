//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly22() {

    int n; cin >> n;
    int n1=0;int n2 =0;
    for (int i=0;i<n;i++) {
        int number; cin >> number;
        if (number%2==0) {
            n2 = n2 + 1;
        } else {
            n1 = n1 + 1;
        }
    }
    cout << n1 << " " << n2 << endl;
}

