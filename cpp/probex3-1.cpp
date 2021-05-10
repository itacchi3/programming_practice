#include <iostream>
#include <string>

using namespace std;

template <typename T>
T max_T(T a, T b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    cout << max_T<int>(1, 2) << endl;
    cout << max_T<double>(1.75, 3.12) << endl;
    string s1 = "aiu", s2 = "eo";
    cout << max_T<string>(s1, s2) << endl;  //文字列の長さ比較できない
    return 0;
}
