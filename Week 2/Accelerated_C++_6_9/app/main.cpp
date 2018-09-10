/**
 *  @file    main.cpp
 *  @author  Srinidhi Sreenath (SrinidhiSreenath)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 2 assignment, Excercize 6-9 Accelerated C++
 *
 *  @section DESCRIPTION
 *
 *  This is a program that reads from a standard input stream
 *  for a list of words and prints out the resulting concatenated
 *  string of the words.
 *
 *  Command line arguments are used to prompt the user for
 *  input.
 *
 */

// CPP Headers
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

/**
 *   @brief  Reads input stream
 *
 *   @param  in is the input stream
 *   @param  inputStringStream is vector to contain the list of string inputs
 *   @return void
 */
void readInputStream(std::istream& in,
                     std::vector<std::string>& inputStringStream) {
  std::string word;  ///< local variable to capture user input
  // Append the vector with input stream words
  while (in >> word) {
    inputStringStream.push_back(word);
  }
}

int main()
{
  std::vector<std::string> inputStringStream;  ///< Vector to hold input stream words (string)
  std::cout
      << "Enter a list of string. When done, please send a EOF character or press CTRL+D"
      << std::endl;

  readInputStream(std::cin, inputStringStream);  //Function call to read input stream

  // Print concatenated string of entered strings or print message if nothing was entered.
  if (!inputStringStream.empty()) {
  std::string concatenatedString = std::accumulate(inputStringStream.begin(),
                                                   inputStringStream.end(),
                                                   std::string(""));
  std::cout << std::endl << "Concatenated string is " << concatenatedString
            << std::endl
            << std::endl;
  } else {
    std::cout << std::endl << "No list was entered" << std::endl << std::endl;
  }

  return 0;
}
