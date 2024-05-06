 #include <iostream>
#include <string>
using namespace std;

int i = 1, j = 0, sizee = 0;
int lengthofstring(string s){
    int counter=0,i=0;
 while(s[i]){counter++;i++;}
 return counter;
}

 bool balance(string s, char l, char a, int m, int l1, int a1, int c) {
    if (c == lengthofstring(s)) {
        if (l1 == a1  && (m >= 1)) {
            return true;
        }
        return false;
    }

    if (l != s[c] && a != s[c]) {
        m++;
        a = s[c];
    }

    if (l == s[c]) {
        l1++;
    }

    if (a == s[c]) {
        a1++;
    }

    return balance(s, l, a, m, l1, a1, c + 1);
}



void substring(string s1, string s2) {
    char a='\0';
        int c = 0;
        int m = 0;
        int l1 = 0;
        int a1 = 0;
    if (i ==lengthofstring(s1)) {
        j++;
        i = j + 1;
        s2 = "";
        a='\0';
        c = 0;
        m = 0;
        l1 = 0;
        a1 = 0;
    }

    if (j == (lengthofstring(s1) - 1)) {
        return;
    }

    char t = s1[j];
    if (s2 == "") {
        s2 = t;
        s2 += s1[i];
    } else {
        s2 += s1[i];
    }
    i++;

    if (balance(s2,t,a,m,l1,a1,c)) {
        if (lengthofstring(s2)> sizee) {
            sizee=lengthofstring(s2);
        }
    }

    substring(s1, s2);
}

int main() {
    string s;
    cin >> s;
    substring(s, "");
    cout << "the size of the longest balanced substring: " << sizee;

    return 0;
}
