#include <iostream>
#include <algorithm>
using namespace std;
struct gameChar {
    string name;
    int accuracy;
    int velocity;
    int stupidity;
};

bool sortAlg(gameChar c1, gameChar c2) {
    return ((c1.accuracy > c2.accuracy) ||
            ((c1.accuracy == c2.accuracy) && (c1.velocity > c2.velocity)) ||
            ((c1.accuracy == c2.accuracy) && (c1.velocity == c2.velocity) && (c1.stupidity < c2.stupidity)) ||
            ((c1.accuracy == c2.accuracy) && (c1.velocity == c2.velocity) && (c1.stupidity == c2.stupidity) && (c1.name < c2.name)));

}
int main()
{
    int n, a, v ,s;
    string charName;
    scanf("%d", &n);
    gameChar chars[n];
    for (int i =0; i < n; i++) {
        cin >> charName >> a >> v >> s;
        chars[i].name = charName;
        chars[i].accuracy = a;
        chars[i].velocity = v;
        chars[i].stupidity = s;
    }
    sort(chars, chars+n, sortAlg);
    for (int i =0; i < n; i++) {
        cout << chars[i].name << endl;
    }
    return 0;
}
