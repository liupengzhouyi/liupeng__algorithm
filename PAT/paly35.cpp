//
// Created by 刘鹏 on 2019-03-28.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;



void paly35() {

    string a, b;

    a = "";
    b = "";
    int i=0;
    bool key = true;
    while(key) {

        i ++ ;

        string str;
        cin >> str;

        if (str == ".") {
            key = false;
        } else {
            if (i == 2) {
                a = str;
            }
            if (i == 14) {
                b = str;
            }
        }
    }

    if (a == "") {
        cout << "Momo... No one is for you ..." << endl;
    } else {
        if (b == "") {
            cout << a << " is the only one for you..." << endl;
        } else {
            cout << a << " and " << b << " are inviting you to dinner..." << endl;
        }
    }

}
