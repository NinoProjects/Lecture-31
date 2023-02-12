#include <iostream>

using namespace std;


void natNums(int number) {
        for (int i = 1; i < 51; i++){
            cout << i <<" ";
        }
}



int main()
{
    int number;
    
    cout<< "Natural numbers are: ";
    natNums(number);
    
    
    
    return 0;
}