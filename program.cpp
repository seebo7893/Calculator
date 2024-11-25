#include<iostream>
using namespace std;

int main(){

   double num1, num2, num3;

    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Determine the maximum number
    double maxNum;
    if (num1 >= num2 && num1 >= num3) {
        maxNum = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maxNum = num2;
    } else {
        maxNum = num3;
    }

    
    cout << "The maximum number is: " << maxNum << endl;

    return 0; 





}
