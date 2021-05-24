#include <iostream>

using namespace std;

int main()
{
  int n;
  int i ;

  cout <<"Enter the number: " <<endl;
  cin >> n ;

for(i=2; i<=n ; i++)
{

    if (  n % i != 0   )
{
   cout << n<< " is  simple natural number"<< endl;
   break;
}

   else
{
   cout<< n << " is not simple natural number"<<endl;
   break;
}
}
   return 0;
  }