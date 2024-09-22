#include <iostream>
using namespace std;

int main() 
{
    //Declare vairables
    int notebooks, pens;
    float notebook_cost, pen_cost, total_cost;
     
     notebooks=15;
     pens=20;
     notebook_cost=2.25;
     pen_cost=0.75;
     
     //calculating total cost
     total_cost=(notebooks*notebook_cost)+(pens*pen_cost);
    
     cout<<"Total cost of supplies: Rs."<<total_cost<<endl;
     
    return 0;
}