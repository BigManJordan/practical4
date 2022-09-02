//
//  Capybara.hpp
//  practical4
//
//  Created by Jordan Le on 2/9/2022.
//

#ifndef Capybara_h
#define Capybara_h

#include <stdio.h>
#include <string>

class Capybara{
private:
  std::string name;
  int age;
  
public:
  void setName(std::string capyName);
  std::string getName();
  void setAge(int capyAge);
  int getAge();
};
#endif /* Capybara_hpp */
