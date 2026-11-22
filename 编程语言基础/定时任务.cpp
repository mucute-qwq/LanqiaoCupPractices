#include <iostream>
#include <string>
#include <vector>
using namespace std;

int mdays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

vector<int> count(const string &s, int tot) {
    vector<int> result;
    if (s == "*") {
        for (int i = 1;i <= tot;i++) result.push_back(i);
        return result;
    }
    int lst = -1, cur = 0;
    for (char c: s) {
        if (c == ',') {
            if (cur <= tot) result.push_back(cur);
            cur = 0;
        } else if (c == '-') {
            lst = cur;
            cur = 0;
        } else {
            cur = cur * 10 + c - '0';
        }
    }
    if (lst != -1) {
        for (int i = lst;i <= min(cur, tot);i++) result.push_back(i);
    } else if (cur <= tot) result.push_back(cur);
    return result;
}

int main() {
    string S, M, H, D, Mon;
    cin >> S >> M >> H >> D >> Mon;

    long long pday = count(S, 60).size() * count(M, 60).size() * count(H, 24).size();
    long long ans = 0;
    for (auto m: count(Mon, 12)) {
        ans += count(D, mdays[m]).size() * pday;
    }

    cout << ans << '\n';
    return 0;
}