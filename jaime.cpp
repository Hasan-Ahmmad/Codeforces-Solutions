#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<vector<int>> a(n, vector<int>(n - 1));
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) scanf("%d", &a[i][j]);
            cnt[a[i][0]]++;
        }
        int first = 0;
        for (int v = 1; v <= n; v++)
            if (cnt[v] == n - 1) first = v;
        int idx = 0;
        for (int i = 0; i < n; i++)
            if (a[i][0] != first) idx = i;
        printf("%d", first);
        for (int j = 0; j < n - 1; j++) printf(" %d", a[idx][j]);
        printf("\n");
    }
    return 0;
}#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<vector<int>> a(n, vector<int>(n - 1));
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) scanf("%d", &a[i][j]);
            cnt[a[i][0]]++;
        }
        int first = 0;
        for (int v = 1; v <= n; v++)
            if (cnt[v] == n - 1) first = v;
        int idx = 0;
        for (int i = 0; i < n; i++)
            if (a[i][0] != first) idx = i;
        printf("%d", first);
        for (int j = 0; j < n - 1; j++) printf(" %d", a[idx][j]);
        printf("\n");
    }
    return 0;
}