#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(__int128 num) {
    __int128 sqrtNum = sqrtl(num);
    return (sqrtNum * sqrtNum == num);
}

// Custom input function for __int128
istream& operator>>(istream& in, __int128& n) {
    string s;
    in >> s;
    n = 0;
    for (int i = 0; i < s.length(); i++) {
        n = n * 10 + (s[i] - '0');
    }
    return in;
}

// Custom output function for __int128
ostream& operator<<(ostream& out, const __int128& n) {
    if (n == 0) {
        out << 0;
        return out;
    }
    string s = "";
    __int128 num = n;
    if (num < 0) {
        out << '-';
        num = -num;
    }
    while (num > 0) {
        s += (num % 10) + '0';
        num /= 10;
    }
    reverse(s.begin(), s.end());
    out << s;
    return out;
}

void solve() {
   //sqrtl  for square root.....
   cout<<(__int128)powl(10,25);   //powl for power function
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
