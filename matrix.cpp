#include <iostream>
using namespace std;

int main() {
    cout << "Program is running...\n";
    int m, n;
    cin >> m >> n;
    int a[m][n], b[m][n], sum[m][n];

    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

  
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
