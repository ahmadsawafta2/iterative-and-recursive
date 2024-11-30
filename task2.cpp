#include<iostream>
#include<chrono>
using namespace std;
long long Factorial(long long n)
{
 if(n==0||n==1)
 return 1;
 else
 return n*Factorial(n-1);
}
int main()
{
    long long n;
    cout<<"Enter a number: ";  
    cin>>n;
    auto start = chrono::high_resolution_clock::now();
    cout<<Factorial(n)<<endl;
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast< chrono::microseconds>(end - start);
   cout<<"time execution : "<<duration.count()<<endl;
return 0;
}