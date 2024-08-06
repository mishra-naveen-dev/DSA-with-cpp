#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout <<"Hello,This is switch case calculater";
    cout<<"Enter value value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b "<<endl;
    cin>>b;
    char ch;
        cout<<"Please enter the operator"<<endl;
        cin>>ch;
        switch (ch)
            {
            case '+':
                cout<<a+b;
                break;
            case'-':
                cout<<a-b;
                break;
            case'*':
                cout<<a*b;
                break;
            case'/':
                cout<<a/b;
                break;
                cout<<"print the  ans:"<<ch<<endl;
                default:
                    cout<<"charater is not operator";
            }
                    return 0;
}
