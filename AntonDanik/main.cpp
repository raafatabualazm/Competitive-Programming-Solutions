#include <iostream>

using namespace std;

int main()
{
    int games;
    string letters;
    cin >> games;
    cin >> letters;
    int Anton =0;
    int Danik =0;
    for (int i = 0; i < games; i++) {
        if (letters[i] == 'A') Anton++;
        else if (letters[i] == 'D') Danik++;
    }
    if (Anton > Danik) cout << "Anton";
    else if (Danik > Anton) cout << "Danik";
    else cout << "Friendship";
    return 0;
}
