// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, ans = 1;
  cin >> n;
  int a[n];
  int r[n];
  int l[n];
  fill(r, r + n, 1);
  fill(l, l + n, 1);
  for (int i = 0; i < n; i++)
  {
      cin >> a[i];
  }

  for (int i = 1; i < n; i++)
  {
    if (a[i - 1] < a[i]) l[i] += l[i - 1];
    ans = max(ans, l[i]);
  }

  for (int i = n-2; i>= 0; i--)
  {
    if (a[i + 1] > a[i]) r[i] += r[i + 1];
    ans = max(ans, r[i]);
  }

  for (int i = 1; i < n - 1; i++)
  {
    if (a[i - 1] < a[i + 1]) ans = max(ans, l[i - 1] + r[i + 1]);
  }

    cout << ans << endl;
    return 0;
}
