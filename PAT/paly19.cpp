//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly19() {

    int pa, pb;
    cin >> pa >> pb;
    int n;
    cin >> n;

    int aNumber = 0;
    int bNumber = 0;

    int aa[100];
    int bb[100];
    int cc[100];
    int dd[100];
    int a, b, c, d;

    for (int i=0;i<n;i++) {


        cin >> a >> b >> c >> d;

        aa[i] = a;
        bb[i] = b;
        cc[i] = c;
        dd[i] = d;


    }

    for (int i=0; i<n;i++) {
        a = aa[i];
        b = bb[i];
        c = cc[i];
        d = dd[i];

        int sum = a + c;

        if (b == d) {
            if (b == sum) {
                aNumber = aNumber + 1;
                pa = pa - 1;
                bNumber = bNumber + 1;
                pb = pb - 1;
            } else {
                continue;
            }
        } else {
            if (b == sum) {
                aNumber = aNumber + 1;
                pa = pa - 1;
                if (pa < 0) {
                    cout << "A" << endl;
                    cout << bNumber << endl;
                    break;
                }
            }
            if (d == sum) {
                bNumber = bNumber + 1;
                pb = pb - 1;
                if(pb < 0) {
                    cout << "B" << endl;
                    cout << aNumber << endl;
                    break;
                }
            }
        }
    }
}

