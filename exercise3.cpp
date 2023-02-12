#include <iostream>

using namespace std;


int fibo(int num) {
        if (num <=1) {
            return 1;
        }else{
           return fibo(num - 2) + fibo(num - 1);
        }
}



int main()
{
    int num;
    
    cout<< "sheiyvane 20mde nebismieri ricxvi: ";
    cin >> num;
    for (int i = 0; i < num; i++){
        cout << fibo(i)<< " ";
    }
    
    
    return 0;
}