//
// Created by 刘鹏 on 2019-03-29.
//

#include <iostream>
#include <string>

using namespace std;

void paly50() {
    int n;
    cin >> n;
    int num;
    cin >> num;

    int counts[10];
    int temp=1;
    for (int i=0;i<6;i++) {
        counts[i] = temp;
        temp = temp * 26;
    }

    // 1, 26, 26*26, 26*26*26, 26*26*26*26


    temp = 0;
    char c;
    for (int i=5;i>=0;i--) {
        if (counts[i] > num) {
            continue;
        } else if (counts[i] <= num && num != 0) {
            temp = num / counts[i];
            cout << temp << " ";
            num = num % counts[i];
            cout << num << " " << endl;
            cout <<counts[i] << " : " << i << " : " << temp << endl;
            cout << (char)('z' - temp) << endl;
            c = (char)('z' - temp);
        } else {
            cout << "z";
            c = 'z';
        }
        if (i == 0) {
            if (c != 'z') {
                c = (char)(c + 1);
            }
            cout << c << endl;
        } else {
            cout << c ;
        }
    }
}

