#include <iostream>

using namespace std;

int main()
{

    int i;
    int j;

    for (i=0;i<=10;i++)
    {
        for (j=10;j>=0;j--)

            {
                if(i==j || i+j==10)
            {
                cout<<"1"<<" ";
            }
            else
            {
             cout<<"0"<<" ";
            }
            }
cout<<endl;
    }

    return 0;
}
