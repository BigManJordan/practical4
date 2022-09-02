//
//  Person.cpp
//  practical4
//
//  Created by Jordan Le on 2/9/2022.
//

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(int mySalary, std::string myName){
  name = myName;
  salary = mySalary;
}

void Person::setName(string myName){
  name = myName;
}

string Person::getName(){
  return name;
}

void Person::setSalary(int mySalary){
  salary = mySalary;
}

int Person::getSalary(){
  return salary;
}
