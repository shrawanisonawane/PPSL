#include <iostream>
using namespace std;

int main() 
{
  int first,second,add,substract,multiply;
  float divide;
  cout<<"Please enter two integers:";
  cin>>first;
  cin>>second;
  add=first+second;
  substract=first-second;
  multiply=first*second;
  divide=first/(float)second;
  
  cout<<endl<<"sum="<<add;
  cout<<endl<<"difference="<<substract;
  cout<<endl<<"multiplication="<<multiply;
  cout<<endl<<"division="<<divide;
    return 0;
}