#include <iostream>

using namespace std;

int main()
{
    string inputString;
    string reversedString = "";

    cout << "Enter a string to be reversed : " << endl;
    cin >> inputString;

    for(int index = inputString.length()-1; index >= 0; index--) {
        reversedString += inputString[index];
        cout << reversedString  << endl;
    }
    cout << "Reversed String is : ";
    cout << reversedString;

    return 0;
}
