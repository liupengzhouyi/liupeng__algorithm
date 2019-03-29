//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;



class number{
    double numberU = 0 ;
    double numberD = 0;

public:
    double getNumberU() const {
        return numberU;
    }

    void setNumberU(double numberU) {
        number::numberU = numberU;
    }

    double getNumberD() const {
        return numberD;
    }

    void setNumberD(double numberD) {
        number::numberD = numberD;
    }

    void show() {
        //cout << this->getNumberU() << "/" << this->getNumberD() << endl;
    }
};

double getNumber(string string1);
double getNumberB(string str);
double getNumberA(string str);
int getMaxNumber(double numberA, double numberB);
void showRightNumber(number number1);

double getNumberB(string str) {
    bool key = false;
    string string1 = "";
    for (int i=0;i<str.length();i++) {
        if (key) {
            string1 = string1 + str[i];
        }
        if (str[i] == '/') {
            key = true;
        }
    }
    return getNumber(string1);
}

double getNumberA(string str) {
    bool keyss =false;
    string strr = "";
    if (str[0] == '-') {
        keyss = true;
        for (int i=1;i<str.length();i++) {
            strr = strr + str[i];
        }
        //cout << strr << endl;
        str = strr;
    }
    bool key = true;
    string string1 = "";
    for (int i=0;i<str.length();i++) {
        if (str[i] == '/') {
            key = false;
        }
        if (key) {
            string1 = string1 + str[i];
        }
    }
    double nummm = getNumber(string1);
    if (keyss) {
        nummm = 0 - nummm;
    }
    return nummm;
}

double getNumber(string string1) {
    int len = string1.length();
    double number = 0;
    for (int i=0;i<len;i++) {
        int tempNumber = (int)(string1[i] - '0');
        number = number * 10;
        number = number + tempNumber;
    }
    return number;
}

int getMaxNumber(double numberA, double numberB) {

    int a = numberA;
    int b = numberB;
    int temp  = 1;
    for (int i=2;i<10;i++) {
        if (a % i == 0) {
            if (b % i == 0) {
                a = a / i;
                b = b / i;
                temp = temp * i;
            }
        }
    }
    return temp;
}

number smpNumber(number num) {
    int intNumber = 0;
    double u = num.getNumberU();
    double d = num.getNumberD();
    int temp = getMaxNumber(u, d);
    number newNumber;
    newNumber.setNumberD(d / temp);
    newNumber.setNumberU(u / temp);
    return newNumber;
}

/**
 * 计算分数相加
 * @param A
 * @param B
 * @return
 */
number addNumber(number A, number B) {

    double number1A = A.getNumberU();
    double number1B = A.getNumberD();

    double number2A = B.getNumberU();
    double number2B = B.getNumberD();

    double numberU = number1A*number2B + number2A*number1B;
    double numberD = number1B * number2B;

    number newNumber;
    newNumber.setNumberU(numberU);
    newNumber.setNumberD(numberD);


    A.show();
    B.show();
    newNumber.show();

    return newNumber;
}



void paly09(){
     number numbers[100];
     int num = 0;
     cin >> num;
     for (int i=0;i<num;i++) {
         string str;
         cin >> str;
         double numberA = getNumberA(str);
         double numberB = getNumberB(str);
         numbers[i].setNumberU(numberA);
         numbers[i].setNumberD(numberB);
         //cout << numberA << "/" << numberB << endl;
     }

     double numberUAll = 1;
     double numberDAll = 1;
     number tempNumber;
     tempNumber = numbers[0];
     for (int i=1;i<num;i++) {
         tempNumber = addNumber(tempNumber, numbers[i]);
         tempNumber = smpNumber(tempNumber);
     }

     //cout << tempNumber.getNumberU() << "/" << tempNumber.getNumberD() << endl;

     showRightNumber(tempNumber);
}

void showRightNumber(number number1) {

    double numberU = number1.getNumberU();

    double numberD = number1.getNumberD();

    if (numberU == 0) {
        cout << 0 << endl;
    } else {
        if (numberD <= numberU) {
            int num = numberU / numberD;
            cout << num << endl;
            numberU = numberU - numberD * num;
        }
        if (numberU != 0) {
            cout << numberU << "/" << numberD << endl;
        }
    }


}
