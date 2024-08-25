#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str="Hello";
    //cancatination
    string greeting= str+ ",World";
    cout<<"Concatination:"<<greeting<<endl;
    
    //Substring
    string part= greeting.substr(7,5); //extracts "world"
    cout<<"Substring:"<<part<<endl;
    
    //find
   size_t pos=greeting.find("World");
   cout<<"Find:'world' found at position" <<pos<<endl;
   
   //replace
   string replaced=greeting;
   replaced.replace(pos ,5,"C++");
   cout<<"Replace:"<<replaced<<endl;
   
   //Insert
   string inserted=greeting;
   inserted.insert(5, " Beautiful");
   cout<<"insert:"<<inserted<<endl;
   
   //erase
   string erased=greeting;
   erased.erase(5,7); //remove "beautiful"
   cout<<"Erase"<<erased<<endl;
   
   //to uppercase
   string uppercase=greeting;
   for(char &c:uppercase)c=toupper(c);
   cout<<"To Uppercase:"<<uppercase<<endl;
   
   //to lowercase
   string lowercase=greeting;
   for(char &c:lowercase)c=tolower(c);
   cout<<"To Lowercase:"<<lowercase<<endl;
   
   return 0;
}