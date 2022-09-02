//
//  Capybara.cpp
//  practical4
//
//  Created by Jordan Le on 2/9/2022.
//

#include "Capybara.h"
#include <iostream>
#include <string>
using namespace std;

void Capybara::setName(string capyName){
  name = capyName;
}

string Capybara::getName(){
  return name;
}

void Capybara::setAge(int capyAge){
  age = capyAge;
}

int Capybara::getAge(){
  return age;
}



//int main(void){
//
//  Capybara Steve;
//  Steve.setName = "capy";
//  Steve.setAge = 10;
//  cout << Steve.getName() << Steve.getAge();
//
//  return 0;
//}
