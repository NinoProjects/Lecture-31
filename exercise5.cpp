#include <iostream>

using namespace std;

int numDigits(int num) {
    int j = 0;
    num > 0;
    if (num < 10) {
        j = 1;
    } else if (num < 100){
        j = 2;
    } else if (num < 1000){
        j = 3;
    }
    return j;
}


int main()
{
    int num, j;
    cout << "sheiyvane ricxvi: " << num;
    cin >> num;
    
    cout << "digits of your number is: ";
    cout << numDigits(num);
    
    

    return 0;
}