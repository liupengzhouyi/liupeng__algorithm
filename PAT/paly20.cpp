//
// Created by 刘鹏 on 2019-03-27.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void paly20() {

    string strings[10000];

    int n; cin >> n;
    int l=0;
    for (int i=0;i<n;i++) {
        int k; cin >> k;
        string str;
        for (int j=0;j<k;j++) {
            cin >> str;
            strings[l] = str;
            l++;
        }
    }
    int m; cin >> m;
    string str1;
    string strings1[100];
    int numbers[100];
    for (int i=0;i<100;i++) {
        numbers[i] = -1;
    }
    for (int i=0;i<m;i++) {
        cin >> strings1[i];
        numbers[i] = 0;
    }

    for (int i=0;i<m;i++) {
        for (int j=0;j<l;j++) {
            if (strings1[i] == strings[j]) {
                numbers[i] = 1;
            }
        }
    }
    bool key = false;
    string strings2[100];
    int o=0;
    int tempO = 0;
    for (int i=0;i<m;i++) {
        if (numbers[i] == 0) {
            bool kk = false;
            for (int s=0;s<o;s++) {
                if (strings2[s] == strings1[i]) {
                    kk = true;
                    break;
                }
            }
            if (!kk) {
                strings2[o] = strings1[i];
                o++;
                tempO = o;
            }
            key = true;
        }
    }
    if (!key) {
        cout << "No one is handsome" ;
    }
    for (int i=0;i<tempO;i++) {
        cout << strings2[i] << " ";
    }
    cout << endl;

}

