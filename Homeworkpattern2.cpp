#include <iostream>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  int i=1;
  while(i<=n)
    {
      int j=1;
      while(j<=n)
        {
          if(j>=i)
          {
            cout<<j;
          }
          else
          {
            cout<<" ";
          }
          j++;
        }
      i++;
      cout<<endl;
      
    }
  
}
