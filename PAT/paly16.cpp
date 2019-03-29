//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly16() {

    int n;
    cin >> n;
    string string1[100];
    for (int i=0;i<n;i++) {
        cin >> string1[i];
    }

    int numbers[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};

    string strings[11] = {"1", "0", "X", "9", "8", "7", "6", "5", "4", "3", "2"};

    int sum = 0;

    int canNumbers[100];
    bool key = false;
    for (int i=0;i<n;i++) {
        for(int j=0;j<string1[i].length()-1;j++) {
            int number = (int)(string1[i][j] - '0');
            int number_ = numbers[j] * number;
            sum = sum + number_;
        }
        sum = sum % 11;
        if (string1[i][17] == strings[sum][0]) {
            //cout << string1[i][17] << ":" << strings[sum][0] << endl;
            canNumbers[i] = 100;
        } else {
            key = true;
        }
        sum = 0;
    }

    if (key == false) {
        cout << "All passed" << endl;
    } else {
        for (int i=0;i<n;i++) {
            if (canNumbers[i] != 100) {
                cout << string1[i] << endl;
            }
        }
    }

}

