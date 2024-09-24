#include <iostream>
using namespace std;
int main() {
// Variable declaration and initialization
string bookTitle = "The God of Small Things"; 

string author = "Arundhati Roy"; 
int yearOfPublication = 1997; 

double price = 499.99; 

bool isAvailable = true; 

// Display the book information
cout << "Book Title: " << bookTitle << endl;
cout << "Author: " << author << endl;
cout << "Year of Publication: " << yearOfPublication << endl;
cout << "Price: " << price << " Rs." << endl;
cout << "Availability: " << (isAvailable ? "Yes" : "No") << endl;
return 0;
}
