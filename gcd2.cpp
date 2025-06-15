#include <iostream>
using namespace std;


    int gcd(int a, int b){
    return b==0?: gcd(b, a%b);

}

int main(){
    int a,b;
    cin >> a>>b;
    cout<< "GCD" << gcd(a,b);
}

