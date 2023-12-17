/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/

class Solution {
public:
    string intToRoman(int num) {
        string answer="";
        int i;
        int remainder;
        int m=num / 1000;
        remainder=num % 1000;
        for (i = 0; i < m; ++i) {
            answer=answer + 'M';
            num=num - 1000;
        };
        if (remainder > 899) {
            answer=answer + "CM";
            num=num-900;
        };
        int d=num/500;
        remainder=num % 500;
        for (i = 0; i < d; ++i) {
            answer=answer+'D';
            num=num-500;
        };
        if (remainder > 399) {
            answer=answer + "CD";
            num=num-400;
        };
        int c=num/100;
        remainder=num % 100;
        for (i = 0; i < c; ++i) {
            answer=answer+'C';
            num=num-100;
        };
        if (remainder > 89) {
            answer=answer + "XC";
            num=num-90;
        };
        int l=num/50;
        remainder=num % 50;
        for (i = 0; i < l; ++i) {
            answer=answer+'L';
            num=num-50;
        };
        if (remainder > 39) {
            answer=answer + "XL";
            num=num-40;
        };
        int x=num/10;
        remainder=num % 10;
        for (i = 0; i < x; ++i) {
            answer=answer+'X';
            num=num-10;
        };
        if (remainder > 8) {
            answer=answer + "IX";
            num=num-9;
        };
        int v=num/5;
        remainder=num % 5;
        for (i = 0; i < v; ++i) {
            answer=answer+'V';
            num=num-5;
        };
        if (remainder > 3) {
            answer=answer + "IV";
            num=num-4;
        };
        int ii=num/1;
        for (i = 0; i < ii; ++i) {
            answer=answer+'I';
            num=num-1;
        };
        return answer;
    }
};