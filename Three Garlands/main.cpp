#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k1, k2, k3;
    int counter[5];
    fill(counter, counter+5, 0);

    scanf("%d%d%d", &k1, &k2, &k3);
    if (k1 <= 4) counter[k1]++;
    if (k2 <= 4) counter[k2]++;
    if (k3 <= 4) counter[k3]++;

    if ((counter[1] >= 1) || (counter[2] >= 2) || (counter[3] == 3) || (counter[4] == 2 && counter[2] == 1)) printf("YES");
    else printf("NO");

    return 0;
}
