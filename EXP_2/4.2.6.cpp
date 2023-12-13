#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;


int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    int base = 1;
    for (int i = len - 1; i >= 0; i--) { 
        char c = hexString[i];
        int value;
        if (c >= '0' && c <= '9') { 
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }
        else {
            return -1;
        }
        result += value * base;
        base *= 16;
    }
    return result;
}

int main() 
{
    char hexString[100];
    cout<<"������һ��16��������"<<endl;
    cin >> hexString;
    int decNum = parseHex(hexString);
    if (decNum == -1) { 
        cout<<"��Ч�����룡"<<endl;
    }
    else {
        cout<<"ת��Ϊ10������Ϊ��"<<decNum<<endl;
    }
    return 0;
}
