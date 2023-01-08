#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int n;
cin>>n;
cout<<n<<" ";
for(int i=n;n!=1;i--)
{if(n%2==0)
   n=n/2;
else n=3*n+1;
cout<<n<<" ";}
return 0;
}


