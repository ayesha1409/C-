#include <iostream>
using namespace std;

int main(){
    int num,temp,rev=0;
    cin >> num;
    temp=num;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
        if (rev == num)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";
    }
    
