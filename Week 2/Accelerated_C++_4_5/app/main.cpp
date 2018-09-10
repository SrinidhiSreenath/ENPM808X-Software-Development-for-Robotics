#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void readInputStream(std::istream& in,
                     std::vector<std::string>& inputWordStream) {
  std::string word;
  while (in >> word) {
    inputWordStream.push_back(word);
  }

  std::cout << std::endl << "Total number of words is "
      << inputWordStream.size()
      << std::endl;

  std::cout << std::endl;

  std::sort(inputWordStream.begin(), inputWordStream.end());

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
readInputStream(std::cin, inputWordStream);

  return 0;
}
