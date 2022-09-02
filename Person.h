#ifndef Person_h
#define Person_h

#include <stdio.h>
#include <string>

class Person{
private:
  std::string name;
  int salary;
public:
  void setName(std::string myName);
  std::string getName();
  void setSalary(int mySalary);
  int getSalary();
};

#endif /* Person_hpp */
