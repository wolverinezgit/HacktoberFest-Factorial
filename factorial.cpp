//Find factorial of a number 

#include <bits/stdc++.h>
using namespace std;

int main() {    

int n;
cin>>n;
int prod=1;
for(int i=1;i<=n;i++)
{
    prod=prod*i;
}
cout<<prod<<endl;
    

    
   
    return 0;
}
