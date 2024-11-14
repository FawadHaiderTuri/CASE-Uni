#include <iostream>
using namespace std;
int main ()
{
    int i,n, sum;
sum=0;
cout<<"enter total value of n for sum= ";
cin>>n;

for(i=1;i<=n;i++)
{
cout<<i<<endl;
    sum=sum+i;
}
cout<< "Total Sum = "<<sum;

return 0;
}