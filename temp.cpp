#include<iostream>
using namespace std;
template<class A>
A abs(A n)
{
return (n<0)?-n:n;
}
int main()
{
int I=5;
int j=-6;
long k=700022;
double g=.9926687;
char c='rahulFAIZA';
cout<<"\nabs("<< I <<")="<< abs(I);
cout<<"\nabs("<< c <<")="<< abs(c);
cout<<"\nabs("<< j <<")="<< abs(j);
cout<<"\nabs("<< k <<")="<< abs(k);
cout<<"\nabs("<< g <<")="<< abs(g);
return 0;
}
