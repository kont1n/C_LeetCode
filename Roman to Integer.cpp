/**
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
    int romanToInt(string s) {
        int a = s.size();
        int answer=0;
        for (int i = 0; i < a; i++) {
            switch (s[i]) {
                case 'M': answer=answer+1000;
                    break;
                case 'D':
                    if (s[i+1]=='M') answer=answer-500;
                    else answer=answer+500;
                    break;
                case 'C':
                    if (s[i+1]=='D' || s[i+1]=='M') answer=answer-100;
                    else answer=answer+100;
                    break;
                case 'L':
                    if (s[i+1]=='C' || s[i+1]=='D' || s[i+1]=='M') answer=answer-50;
                    else answer=answer+50;
                    break;
                case 'X':
                    if (s[i+1]=='L' || s[i+1]=='C' || s[i+1]=='D' || s[i+1]=='M') answer=answer-10;
                    else answer=answer+10;
                    break;
                case 'V':
                    if (s[i+1]=='X' || s[i+1]=='L' || s[i+1]=='C' || s[i+1]=='D' || s[i+1]=='M') answer=answer-5;
                    else answer=answer+5;
                    break;
                case 'I':
                    if (s[i+1]=='V' || s[i+1]=='X' || s[i+1]=='L' || s[i+1]=='C' || s[i+1]=='D' || s[i+1]=='M') answer=answer-1;
                    else answer=answer+1;
                    break;
                default:
                    return 0;
                    break;
            }
        }
        return answer;
    }
};