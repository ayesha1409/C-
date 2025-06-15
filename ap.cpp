#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    cin >> a >> d >> n;

    for (int i = 0; i < n; i++)
        cout << a + i * d << " ";

    return 0;
}
