//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class preson{
    string name;
    int number;
public:
    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        preson::name = name;
    }

    int getNumber() const {
        return number;
    }

    void setNumber(int number) {
        preson::number = number;
    }
};

void paly14() {

    preson pelpoe[10000];
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        int number;
        cin >> str;
        cin >> number;
        pelpoe[i].setName(str);
        pelpoe[i].setNumber(number);
        sum = sum + number;
    }
    int printNumber = sum / n / 2;
    cout << printNumber << " ";

    int cc = pelpoe[0].getNumber() - printNumber;
    string name = pelpoe[0].getName();
    if (cc < 0) {
        cc = 0 - cc;
    }
    for (int i = 0; i < n; i++) {
        int c = pelpoe[i].getNumber() - printNumber;
        if (c < 0) {
            c = 0 - c;
        }
        if (cc > c) {
            cc = c;
            name = pelpoe[i].getName();
        }
    }
    cout << name << endl;
}



void paly1401() {

    cout << "This is a simple problem." << endl;

}