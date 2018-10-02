/**
 *  @file    main.cpp
 *  @author  Srinidhi Sreenath (SrinidhiSreenath)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 2 assignment, Excercise 4-5 Accelerated C++
 *
 *  @section DESCRIPTION
 *
 *  This is a program that reads from a standard input stream
 *  for a list of words and stores them. The program returns
 *  the total number of words entered and also the frequency
 *  of each word entered.
 *
 *  Command line arguments are used to prompt the user for
 *  input. This program assumes that each entry by the user
 *  is correct and does not handle wrong entry case.
 *
 */

// CPP Headers
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/**
 *   @brief  Reads from input stream and stores the strings into a vector
 *           Also prints the total number of words entered and the frequency
 *           of each word.
 *
 *   @param  in is the input stream
 *   @param  inputWordStream is the vector that will contain input stream
 *   @return void
 */
void readInputStream(std::istream& in,
                     std::vector<std::string>& inputWordStream) {
  std::string word;  ///< local string variable to capture input stream
  //Append the inputWordStream vector with the entered words
  while (in >> word) {
    inputWordStream.push_back(word);
  }

  // Print total number of words entered
  std::cout << std::endl << "Total number of words is "
      << inputWordStream.size()
      << std::endl;

  std::cout << std::endl;

  //Sort the vector of words.
  std::sort(inputWordStream.begin(), inputWordStream.end());

  // Calculate frequency by iterating over the vector and comparing previous word with current word
  std::string previousWord = inputWordStream[0];
  size_t frequency = 1;

  for (size_t iter = 1; iter < inputWordStream.size(); iter++) {
    if (previousWord == inputWordStream[iter]) {
      frequency++;
    } else if (previousWord != inputWordStream[iter]) {
      std::cout << previousWord << " was entered " << frequency << " time(s)."
          << std::endl;
      previousWord = inputWordStream[iter];
      frequency = 1;
    }
  }
  std::cout << previousWord << " was entered " << frequency << " time(s)."
      << std::endl << std::endl;
}

int main()
{

std::vector < std::string > inputWordStream;
  std::cout
      << "Enter the stream of words. When done, please send a EOF character or press CTRL+D"
      << std::endl;
  readInputStream(std::cin, inputWordStream);  // Funtion call to capture input stream

  return 0;
}
