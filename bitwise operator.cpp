#include <iostream>
using namespace std;

int main() 
{ 
   int a=4,b=7;
  //Binary AND operator
  cout<<"a&b is "<<(a & b)<<endl;
  //Binary OR operator
  cout<<"a|b is "<<(a | b)<<endl;
  //Binary XOR operator
  cout<<"a^b is "<<(a ^ b)<<endl;
  //right shift
  cout<<"a>>1 is"<<(a >> 1)<<endl;
  //left shift
  cout<<"a<<1 is"<<(a << 1)<<endl;
  //one's complement operator
  cout<<"~ (a) is"<< ~(a)<<endl;
  
    return 0;
}