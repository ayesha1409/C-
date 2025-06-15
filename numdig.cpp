#include <iostream>
using namespace std;

int digitalRoot(int num) {
    while(num>=10){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
            
        }
        num=sum;
    }
    return num;
}

int main() {
    int num;
    cin >> num;
    cout << "Digital Root: " << digitalRoot(num);
}
