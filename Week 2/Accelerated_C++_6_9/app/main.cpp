#include <iostream>
#include <string>
#include <vector>
#include <numeric>

void readInputStream(std::istream& in,
                     std::vector<std::string>& inputStringStream) {
  std::string word;
  while (in >> word) {
    inputStringStream.push_back(word);
  }
}

int main()
{

  std::vector<std::string> inputStringStream;
  std::cout
      << "Enter a list of string. When done, please send a EOF character or press CTRL+D"
      << std::endl;

  readInputStream(std::cin, inputStringStream);

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
