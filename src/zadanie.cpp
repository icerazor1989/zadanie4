#include <iostream>

using namespace std;

int main()
{
    const int x = 10;
    const int y = 10;
    int i;
    int j;

    for (i=0;i<=x;i++)
    {
        for (j=y;j>=0;j--)
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
