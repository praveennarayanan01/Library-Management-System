#include <iostream>
using namespace std;
class Book {
  public:
    string name;
    string authorName;
    string price;
    string description;
  Book(string name,string authorName,string price,string description) {
    this->name = name;
    this->authorName = authorName;
    this->price = price;
    this->description = description;
  }
  void getBookDetails() {
    cout << this->name << endl;
    cout << this->authorName << endl;
    cout << this->price << endl;
    cout << this->description << endl;
  }
};
class Rentee {
  public:
    string name;
    string renteeId;
    string renteeAddress;
  Rentee() {
    this->name = name;
    this->renteeId=renteeId;
    this->renteeAddress = renteeAddress;
  }
  void getRenteeDetails() {
    cout << this->name << endl;
    cout << this->renteeId << endl;
    cout << this->renteeAddress <<endl; 
  }
};
class Rental {
  public:
    string rentalId;
    string renteeId;
    string bookId;
    string dueDate;
  Rental() {
    this->rentalId = rentalId;
    this->renteeId = renteeId;
    this->bookId = bookId;
    this-> dueDate = dueDate;
  }
  void getRentalDetails() {
    cout << this->rentalId << endl;
    cout << this->renteeId << endl;
    cout << this->bookId << endl;
    cout << this->dueDate << endl;
  }
};
 
int main() {
  Book book1("Hamlet","Shakespeare","500","Revenge");
  cout << "Simple-Library-Management-System" << endl;
  cout << "Select The function you want to do :" <<endl;
  
}
