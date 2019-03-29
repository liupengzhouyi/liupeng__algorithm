//
// Created by 刘鹏 on 2019-03-26.
//

#include <iostream>
#include <string>

using namespace std;


void paly07() {

    string strings[11];
    strings[0] = "ling";
    strings[1] = "yi";
    strings[2] = "er";
    strings[3] = "san";
    strings[4] = "si";
    strings[5] = "wu";
    strings[6] = "liu";
    strings[7] = "qi";
    strings[8] = "ba";
    strings[9] = "jiu";
    strings[10] = "fu";

    string str;
    cin >> str;

    for (int i=0;i<str.length();i++) {
        if (str[i] == '-') {
            cout << strings[10] << " ";
        } else {
            if (i == str.length()-1) {
                int number = (int)(str[i] - '0');
                cout << strings[number];
            } else {
                int number = (int)(str[i] - '0');
                cout << strings[number] << " ";
            }
        }
    }
}


