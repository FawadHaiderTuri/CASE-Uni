#include <iostream>
using namespace std;
int main ()
{
    int i,sum;
    sum=0;
    for(i=1;i<=5;i++)
    {
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"sum = "<<sum<<endl;

    return 0;
}