/**
 *  Copyright 2018 Srinidhi Sreenath
 *  @file    main.cpp
 *  @author  Srinidhi Sreenath (SrinidhiSreenath)
 *  @date    9/15/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 3 assignment, Excercize 9-4 Software Engineering
 *
 *  @section DESCRIPTION
 *
 *  This file contains the code to extract a new function that returns 
 *  the position of the beginning of a given string in a given text.
 *
 *
 *
 */

// CPP Headers
#include <iostream>
#include <string>

/**
 *   @brief  Returns the position of string in the text
 *
 *   @param  text is the master string 
 *   @param  stringToSearch is string to be searched in the text
 *   @return start position of string in text as size_t
 */
size_t getPositionInText(const std::string& text,
                         const std::string& stringToSearch) {
    // iterate through the text string
  for (size_t i = 0; i < text.size(); i++) {
    bool found = true;  ///< flag to check if string is in text
    for (size_t j = 0; j < stringToSearch.size(); j++) {
      if (text[i + j] != stringToSearch[j]) {
        found = false;  // flag is false if the entire string isn't
                        // in position when start of string is found in text
      }
    }
    if (found) {
       return i;
    }
  }
  return 0;
}

/**
 *   @brief  Prints the position of string in the given text
 *
 *   @param  text is the master string 
 *   @param  stringToSearch is string to be searched in the text
 *   @return void
 */
void printPosition(const std::string& text, const std::string& stringToSearch) {
  size_t position = getPositionInText(text, stringToSearch);  // Function call

  std::cout << "The position of the string: " << stringToSearch
            << " in the text: " << text << " is " << position << std::endl;
}

int main() {
  std::string text = "Srinidhi";  ///< text string
  std::string stringToSearch = "idhi";  ///< string to search for in text string

  printPosition(text, stringToSearch);  // Function call to print position

  return 0;
}
