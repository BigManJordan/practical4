#include <stdio.h>
#include "Capybara.h"
#include <iostream>
#include <string>
using namespace std;

int main(void){

  Capybara capy;
  
  capy.setName("Steve");
  capy.setAge(10);
  string name = capy.getName();
  int age = capy.getAge();
  cout << name << age;
  
  return 0;
}
