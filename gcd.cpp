#include <iostream>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main(){
    int a, b;
    cin>>a >>b;
    int lcm=(a * b) / gcd (a,b);
    cout<< "LCM"<< lcm;



}