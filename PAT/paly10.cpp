//
// Created by 刘鹏 on 2019-03-27.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly10() {
    int numbers[3];
    for (int i=0;i<3;i++) {
        cin >> numbers[i];
    }

    for (int i=0;i<3;i++) {
        for (int j=i;j<3;j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }

    for (int i=0;i<3;i++) {
        cout << numbers[i] ;
        if (i < 2) {
            cout << "->";
        }
    }
    cout << endl;
}
