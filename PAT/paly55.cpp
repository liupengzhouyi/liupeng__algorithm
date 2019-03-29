//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;



void paly55() {

    int numberA, numberB;
    cin >> numberA >> numberB;

    string a, b, c;
    cin >> a >> b >> c;


    if (a == b && b == c) {
        if (a == "1") {
            cout << "The winner is b: " << numberB << " + 3" << endl;
        } else {
            cout << "The winner is a: " << numberA << " + 3" << endl;
        }
    } else {
        int p = -1;
        int AA = -1;
        int BB = -1;
        if (a == b) {
            if (a == "1") {
                BB = 2;
                AA = 1;
                //b 2

            } else {
                //a 2
                AA = 2;
                BB = 1;
            }
        }
        if (a == c) {
            if (a == "1") {
                BB = 2;
                AA = 1;
            } else {
                AA = 2;
                BB = 1;
            }
        }
        if (b == c) {
            if (b == "1") {
                AA = 1;
                BB = 2;
            } else {
                AA = 2;
                BB = 1;
            }
        }
        if (numberA > numberB) {
            cout << "The winner is a: " << numberA << " + " << AA << endl;
        } else {
            cout << "The winner is b: " << numberB << " + " << BB << endl;
        };
    }

}
