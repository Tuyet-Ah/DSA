#include <bits/stdc++.h>
using namespace std;

char last_char;
vector<string> result;
set<char> vowels = {'A', 'E'};

// Hàm kiểm tra tính hợp lệ của một xâu
bool isValid(const string &s) {
    int n = s.size();
    for (int i = 1; i < n - 1; i++) {
        if (vowels.count(s[i]) && !vowels.count(s[i - 1]) && !vowels.count(s[i + 1])) {
            return false; // Nguyên âm bị kẹp giữa hai phụ âm
        }
    }
    return true;
}

int main() {
    cin >> last_char;

    string s = "";
    for (char ch = 'A'; ch <= last_char; ch++) {
        s += ch;
    }

    sort(s.begin(), s.end());
    do {
        if (isValid(s)) {
            cout << s << '\n';
        }
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
