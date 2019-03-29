//
// Created by 刘鹏 on 2019-03-26.
//

#include <iostream>
#include <string>
using namespace std;

/**
 * 计算每一层消耗的个数
 * @param i
 * @return
 */
int addNumber(int i) {
    int number =  0;
    if (i == 1) {
        number = 1;
    } else {
        number = (i * 2) - 1;
        number = number * 2;
    }
    return number;
}

int paly02(int yourNumber, string str) {

    int numbers[1000];

    for (int i=0;i<1000;i++) {
        numbers[i] = 0;
    }

    bool key = true;

    int num = 1;

    while(key){
        int number = addNumber(num);
        if (number <= yourNumber) {
            yourNumber = yourNumber - number;
            //cout << number << endl;
            num = num + 1;
        } else {
            break;
        }
    }

    num = num - 1;

    //cout << num << endl;

    int tempNum = num;
    int kk = 0;

    for (int i=0;i<num;i++) {
        //tempNum = tempNum * 2 - 1;
        for (int k=0;k<kk;k++) {
            cout << " ";
        }
        kk = kk + 1;
        for (int j=0;j<tempNum * 2 - 1;j++) {
            cout << str ;
        }
        tempNum = tempNum - 1;
        cout << endl;
    }

    tempNum = 1;
    kk = kk - 1;
    for (int i=0;i<num-1;i++) {
        kk = kk - 1;
        for (int k=0;k<kk;k++) {
            cout << " ";
        }
        for (int j=0;j<(tempNum + 1 ) * 2 -1;j++) {
            cout << str;
        }
        cout << endl;
        tempNum = tempNum + 1;
    }

    return yourNumber;
}
