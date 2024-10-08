
#include <iostream>
using namespace std;

class Vehicle{
  public:
  void vehicle(){
    cout<<"I am a Vehicle."<<endl;
  }
};
class FourWheeler: public Vehicle{
  public:
  void fourWheeler(){
    cout<<"I have four wheels."<<endl;
  }
};
class Car: public FourWheeler{
  public:
  void car(){
    cout<<"I am a Car."<<endl;
  }
};
int main(){
  Car mycar;
  mycar.car();
  mycar.fourWheeler();
  mycar.vehicle();
  return 0;
}