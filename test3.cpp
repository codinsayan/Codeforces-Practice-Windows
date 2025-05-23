#include <iostream>
#include <cmath>
using namespace std;


int ceil_log2(int x) {
    if (x <= 0) return 0;
    return (x == 1) ? 0 : 64 - __builtin_clz(x - 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int h1 = min(a, n - a + 1);
        int w1 = min(b, m - b + 1);

        int option1 = ceil_log2(h1 - 1) + ceil_log2(m - 1);
        int option2 = ceil_log2(n - 1) + ceil_log2(w1 - 1);

        int ans = 1 + min(option1, option2);
        cout << ans << endl;
    }
    return 0;
}