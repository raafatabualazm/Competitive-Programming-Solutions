#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> dict;
    int m, n;
    scanf("%d%d", &m, &n);
    string key;
    int points;
    string description = "";
    vector<string> describtion_lines;
    int totalPoints = 0;

    while(m--) {
        cin >> key >> points;
        dict[key] = points;
    }
    for (int i =0; i < n; i++) {
        description = "";
        totalPoints = 0;
        describtion_lines.clear();
        while (description != ".") {
                cin >> description;
                describtion_lines.push_back(description);

        }
        for (auto it: describtion_lines) {
            if (dict.find(it) != dict.end()) {
                totalPoints += dict[it];
            }
        }
        printf("%d\n", totalPoints);
    }

    return 0;
}
