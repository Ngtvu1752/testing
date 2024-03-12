#include<bits/stdc++.h>
using namespace std;

class String {
private:
    int n;
    char* str;

public:
    String(const char* input) {
        n = strlen(input);
        str = new char[n + 1];
        strcpy(str, input);
    }

    ~String() {
        delete[] str;
    }

    void print() const {
        cout << str << endl;
    }

    void append(const char* input) {
        int inputLength = strlen(input);
        char* temp = new char[n + inputLength + 1];
        strcpy(temp, str);
        strcat(temp, input);
        delete[] str;
        str = temp;
        n += inputLength;
    }
};

int main() {
    String s("Hello");
    s.print();
    s.append(" there");
    s.print();
    return 0;
}
