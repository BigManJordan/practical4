#ifndef Person_h
#define Person_h

#include <stdio.h>
#include <string>

class Person{
private:
  std::string name;
  int salary;
public:
  Person(int mySalary, std::string myName);
  void setName(std::string myName);
  std::string getName();
  void setSalary(int mySalary);
  int getSalary();
};

#endif /* Person_hpp */
