#include <iostream>

using namespace std;


double arrElements( int size) {
        cout << "masivis elementebia: ";
        for (int i = 0; i < size; i++){
            cout << (i+1) * 2 << " ";
        }
        return 0;
}



int main()
{
    int size;
    cout <<"sheiyvane masivis elementebis raodenoba: ";
    cin>> size;
    arrElements(size);
    
    
    return 0;
}