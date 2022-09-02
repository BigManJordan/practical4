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

int main(void){

  Capybara Steve;
  Steve.capyName = "Steve";
  Steve.capyAge = 10;
  cout << Steve.capyName << Steve.capyAge;
  
  return 0;
}
