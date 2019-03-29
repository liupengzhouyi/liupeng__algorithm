//
// Created by 刘鹏 on 2019-03-26.
//

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void paly08() {
    int numberBegin = 0;
    int numberEnd = 0;
    cin >> numberBegin;
    cin >> numberEnd;
    int sum = 0;
    int count = 0;
    bool key  = false;
    int temp = numberBegin;
    for (int i=0;i<numberEnd - numberBegin + 1;i++) {
        /*if (temp < 0) {
            cout << "    " << temp ;
        } else {
            cout << "     " << temp ;
        }*/
        cout <<setw(5)<< temp;
        key = false;
        count = count + 1;
        if (count == 5) {
            cout << endl;
            count = 0;
            key =true;
        }
        sum = sum + temp;
        temp = temp + 1;
    }
    if (key == false) {
        cout << endl;
    }
    cout << "Sum = " << sum << endl;
}
