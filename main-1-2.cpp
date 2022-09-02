#include <stdio.h>
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main(void){
  
  Person person(100, "Jon");
  
  string name = person.getName();
  int salary = person.getSalary();
  cout << name << salary;
  
}
