#include <iostream>

using namespace std;


int main()
{
    int numberOfWheels;
    cout << "Please Enter a value for Number of wheels : " << endl;
    cin >> numberOfWheels;
    string wheels = "";
    switch (numberOfWheels) {
        case 2: {
            wheels = "Two Wheelers";
            break;
        }
        case 4: {
            wheels = "Four Wheelers";
            break;
        }
        default: {
            wheels = "Multi Wheeler";
            break;
        }
    }
    cout << wheels;
    return numberOfWheels;
}
