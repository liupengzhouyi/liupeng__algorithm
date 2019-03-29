//
// Created by 刘鹏 on 2019-03-26.
//

#include <iostream>
#include <string>
using namespace std;

int countNumber(string strs, char str){
    int count = 0;
    int length = strs.length();
    for (int i=0;i<length;i++) {
        if ((strs[i]) == str) {
            count = count + 1;
        }
    }
    return count ;
}

void play003() {
    string number;
    cin >> number;

    int numbers[10];

    for (int i=0;i<10;i++) {

        numbers[i] = countNumber(number, (char)('0'+i));
    }

    for (int i=0;i<10;i++) {
        if (numbers[i] != 0) {
            cout << i << ":" << numbers[i] << endl;
        }
    }
}