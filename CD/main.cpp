#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    map<long long, long long> um;
    vector< long long> order;
     int input;
     while (scanf("%d", &input) != EOF) {

            if (um.find(input) == um.end()) order.push_back(input);
            um[input]++;

     }
     for (auto it : order) {
        printf("%d %d\n", it, um[it]);
     }

    return 0;
}
