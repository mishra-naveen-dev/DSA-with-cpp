#include <iostream>

using namespace std;

int main()
{
   int numberOfElments;
    cout << "Enter the number of inputs to taken :" ;
    cin >> numberOfElments;

    int inputs[numberOfElments];

    for(int index=0; index <= numberOfElments-1; index++){
        int inputValue;
        cout << "Enter a value : ";
        cin >> inputValue;

        inputs[index] = inputValue;
    }

    cout << "The inputs stored are : " << endl;

    for(int index=0; index < sizeof(inputs); index++) {
        int n = inputs[index];
        cout << n;

        if(n%2==0)
        {
            cout<< " is even" << endl;
        }
        else
        {
            cout<< " is odd" << endl;
        }

    }
    return 0;
}
