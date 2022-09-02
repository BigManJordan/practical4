#include <stdio.h>
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main(void){
  
  Person person;
  
  person.setName("Jon");
  person.setSalary(100);
  string name = person.getName();
  int salary = person.getSalary();
  cout << name << salary;
  
}
