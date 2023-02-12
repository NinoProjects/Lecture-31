#include <iostream>

using namespace std;


int sumNums(int number, int sum) {
        for (int i = 0; i <= number; i++){
            sum += i;
        }
        return sum;
}



int main()
{
    int number, sum;
    
    cout<< "sheiyvane ricxvi romlamdec gsurs jami: ";
    cin >> number;
    cout << sumNums (number, sum);
    
    
    
    return 0;
}