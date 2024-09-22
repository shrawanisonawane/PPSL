//This program is to create a calculator using switch statement

#include<iostream>
using namespace std;

int main(){
  char op;
  float num1 , num2;
  
  //allow users to enter Operator
  cout<<"Enter an operation : "<<endl;
  cin>>op;
  
  cout<<"enter two integers : "<<endl;
  cin>>num1>>num2;
  
  //Switch statement begins
  switch(op){
    
    //If user enters +
    case'+':
    cout<<num1+num2;
    break;
    
    //If user enters -
    case'-':
    cout<<num1-num2;
    break;
    
    //If user enters *
    case'*':
    cout<<num1*num2;
    break;
    
    //If user enters /
    case'/':
    cout<<num1/num2;
    break;
    
    //If user enters wrong Operator
    default:
    cout<<"error!! Operator is not correct";
    
  }
  
  return 0;
}


INPUT GIVEN:
/ 6 2


OUTPUT:
Enter an operation : 
enter two integers : 
3
