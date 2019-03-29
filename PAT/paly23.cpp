//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly23() {
    string str; cin >> str;
    int g = 0;
    int p = 0;
    int l = 0;
    int t = 0;
    for (int i=0;i<str.length();i++) {
        if (str[i] == 'g'||str[i] == 'G'){
            g++;
        }
        if (str[i] == 'p'||str[i] == 'P'){
            p++;
        }
        if (str[i] == 'l'||str[i] == 'L'){
            l++;
        }
        if (str[i] == 't'||str[i] == 'T'){
            t++;
        }
    }

    while(!(g==0&&p==0&&l==0&&t==0)) {
        if (g>0) {
            cout << "G";
            g--;
        }
        if (p>0) {
            cout << "P";
            p--;
        }
        if (l>0) {
            cout << "L";
            l--;
        }
        if (t>0) {
            cout << "T";
            t--;
        }
    }



}
