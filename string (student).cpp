#include <iostream>
#include<string>
using namespace std;

class Student{
  public:
  //properties(data members)
  string name;
  int rollNumber;
  int age;
  //function to display student infornamtion
  void displayinfo(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll number:"<<rollNumber<<endl;
    cout<<"Age:"<<age<<endl;
  }
};
  int main(){
    //Create objects(instances)of the student class  
    Student s1;
    Student s2;
    
    //Set properties for student1
    s1.name="Shivani";
    s1.rollNumber=119;
    s1.age=19;
    
    //Set properties for student2
    s2.name="Divya";
    s2.rollNumber=118;
    s2.age=20;
    
    //Display information for each student2
    cout<<"S1 Information:"<<endl;
    s1.displayinfo();
    cout<<endl;//For better readability
    
    cout<<"S2 Information:"<<endl;
    s2.displayinfo();
    return 0;
  }
    