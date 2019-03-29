//
// Created by 刘鹏 on 2019-03-26.
//

#include <iostream>
#include <string>

using namespace std;


class paly5class {

public:
    string numbers;

    int numberI = 0;

    int numberII  = 0;

    const string &getNumbers() const {
        return numbers;
    }

    void setNumbers(const string &numbers) {
        paly5class::numbers = numbers;
    }

    int getNumberI() const {
        return numberI;
    }

    void setNumberI(int numberI) {
        paly5class::numberI = numberI;
    }

    int getNumberII() const {
        return numberII;
    }

    void setNumberII(int numberII) {
        paly5class::numberII = numberII;
    }


};

void play005() {
    int num = 0;

    paly5class paly5[10000];

    int numberI[10000];
    cin >> num ;
    for (int i=0;i<num;i++) {
        string str ;
        int numI = 0;
        int numII = 0;
        cin >> str >> numI >> numII ;
        paly5[i].setNumbers(str);
        paly5[i].setNumberI(numI);
        paly5[i].setNumberII(numII);
    }

    int number = 0;
    cin >> number;

    for (int i=0;i<number;i++) {
        cin >> numberI[i];
    }

    for (int i=0;i<number;i++) {
        int tempNumber = numberI[i];
        for (int j=0;j<num;j++) {
            if (tempNumber == paly5[j].getNumberI()) {
                cout << paly5[i].getNumbers() << " " << paly5[j].getNumberII() << endl;
            }
        }
    }

}