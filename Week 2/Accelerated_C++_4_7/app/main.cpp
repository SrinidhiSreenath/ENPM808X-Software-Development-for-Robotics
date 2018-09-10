#include <iostream>
#include <vector>

double getAverage(const std::vector<double>& inputNumbers) {

  double average = 0.0;
  for (const double& number : inputNumbers) {
    average += number;
  }
  average = average / inputNumbers.size();
  return average;
}

void readInputStream(std::istream& in,
                     std::vector<double>& inputNumbers) {
  double number;
  while (in >> number) {
    inputNumbers.push_back(number);
  }
}

int main()
{

  std::vector<double> inputNumbers;
  std::cout
      << "Enter the list of numbers. When done, please send a EOF character or press CTRL+D"
      << std::endl;
  readInputStream(std::cin, inputNumbers);

  if (!inputNumbers.empty()) {
    std::cout << std::endl << "Average of the entered numbers is: "
        << getAverage(inputNumbers) << std::endl << std::endl;
  } else {
    std::cout << std::endl << "No numbers were entered" << std::endl
        << std::endl;
  }

  return 0;
}
