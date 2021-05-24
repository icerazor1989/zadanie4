# zadanie 5

#include <iostream>


using namespace std;

int main()
{

    int y;
    cout<<"Enter the year: "<<endl;
    cin>> y;
    if (y%4 != 0 || y%100 == 0 && y%400 != 0)
    {

        cout << "This is a normal year"<<endl;

    }

    else
    {
        cout <<"This is a leap year"<<endl;
    }
    return 0;
}
