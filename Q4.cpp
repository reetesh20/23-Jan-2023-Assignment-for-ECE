

Q4::
How do you re-throw an exception in C++? WITH EXAMPLE
answer-
Rethrowing an expression from within an exception handler can be done by calling throw, by itself, with no exception.
This causes current exception to be passed on to an outer try/catch sequence.An exception can only be rethrown from within a catch block.
When an exception is rethrown, it is propagated outward to the next catch block.
example-
#include<iostream>
using namespace std;
main()
{int a;
int b;
again:cin>>a;
cin>>b;
try// write the code in this block which can cause exception
{

if(b!=0)
{
int c=a/b;
cout<<c;
cout<<"\ndone";
}
else

throw (b);//throwing the exception

}
catch(int i)//this will catch the exception
{
cout<<"exception caught b="<<b;
cout<<"\nenter the values again\n";
goto again;
}
cout<<"\nend";
}

