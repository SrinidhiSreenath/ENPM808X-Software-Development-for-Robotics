/**
 *  @file    main.cpp
 *  @author  Srinidhi Sreenath (SrinidhiSreenath)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 2 assignment, Excercize 4-7 Accelerated C++
 *
 *  @section DESCRIPTION
 *
 *  This is a program that reads from a standard input stream
 *  for a list of numbers and outputs the average of the numbers.
 *
 *  Command line arguments are used to prompt the user for
 *  input.
 *
 */

//CPP Headers
#include <iostream>
#include <vector>

/**
 *   @brief  Calculates average of a list of numbers
 *
 *   @param  inputNumbers is a vector containing the list of numbers
 *   @return average of entered numbers as double
 */
double getAverage(const std::vector<double>& inputNumbers) {

  double average = 0.0;  ///< Initialize variable for average
  // Accumulate the numbers into average
  for (const double& number : inputNumbers) {
    average += number;
  }
  // Divide by total size of vector to get average of numbers
  average = average / inputNumbers.size();
  return average;
}

/**
 *   @brief  Reads input stream
 *
 *   @param  in is the input stream
 *   @param  inputNumbers is vector to contain the list of numbers
 *   @return void
 */
void readInputStream(std::istream& in,
                     std::vector<double>& inputNumbers) {
  double number;  ///< Initialize variable to capture user input
  while (in >> number) {
    inputNumbers.push_back(number);
  }
}

int main()
{
  std::vector<double> inputNumbers;  ///< Vector to hold user input numbers (double)
  std::cout
      << "Enter the list of numbers. When done, please send a EOF character or press CTRL+D"
      << std::endl;
  readInputStream(std::cin, inputNumbers);  //Function call for Input stream

  // Print concatenated string of entered strings or print message if nothing was entered.
  if (!inputNumbers.empty()) {
    std::cout << std::endl << "Average of the entered numbers is: "
              << getAverage(inputNumbers) << std::endl << std::endl;  // Function call to get average of the entered numbers
  } else {
    std::cout << std::endl << "No numbers were entered" << std::endl
        << std::endl;
  }

  return 0;
}
