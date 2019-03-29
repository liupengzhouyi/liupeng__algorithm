//
// Created by 刘鹏 on 2019-03-26.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void paly06(int number) {

    int first = 0, len = 0, maxm = sqrt(number)+1;
    for(int i = 2; i <= maxm; i++){
        int j;
        int tmp = 1;
        for(j = i; j <= maxm; j++){
            tmp *= j;
            if(number%tmp != 0) {
                break;
                //超出或当前数不为因数
            }
        }
        if(j - i > len) {
            first = i;
            len = j-i;
        }
    }
    if(first == 0) //素数或1
        cout << 1 << endl << number;
    else{
        cout << len << endl << first;
        for(int i = 1; i < len; i++) {
            cout << '*' << first+i;
        }
        cout << endl;
    }
}