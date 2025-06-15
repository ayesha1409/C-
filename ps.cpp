#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    for (int i = 1; i < num; i++)
        if (num % i == 0)
            sum = sum+i;
    if (sum == num)
        cout << "Perfect number";
    else
        cout << "Not a perfect number";
    return 0;
}
