//
// Created by 刘鹏 on 2019-03-28.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;



void paly28() {

    int n; cin >> n;
    int a[10];
    for (int i=0;i<10;i++) {
        a[i] = 0;
    }

    bool key = false;

    for (int i=0;i<n;i++) {

        int number; cin >> number;

        // 2 0

        bool isPrime = true;
        for (int j=2;j<=sqrt(number);j++) {
            if ( (number%j) == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            a[i] = 1;
        }

        if (number == 0 || number == 1) {
            isPrime = false;
        }
    }



    for(int i=0;i<n;i++) {
        if (a[i] != 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }

}


