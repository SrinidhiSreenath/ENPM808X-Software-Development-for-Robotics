#include "softwareDevelopment.hpp"

softwareDevelopment::softwareDevelopment() {
  std::cout << "Course grading initialized" << std::endl;

  //Giving custom inputs
  for (int i = 0; i < 5; i++) {
    student_.push_back((i + 1) * 10);
    studentGrade_.push_back(0.0);
  }
}

softwareDevelopment::~softwareDevelopment() {
}

void softwareDevelopment::listStudentAndGrades() {
  std::cout << "List of students and their grades" << std::endl;

  for (size_t iter = 0; iter < student_.size(); iter++) {
    std::cout << "Student: " << student_[iter] << "   Grade: "
        << studentGrade_[iter] << std::endl;
  }
}

void softwareDevelopment::changeStudentGrade(const int& studentNumber,
                                             const double& newGrade) {
  std::vector<int>::iterator it;
  it = std::find(student_.begin(), student_.end(), studentNumber);
  size_t index = std::distance(student_.begin(), it);

  if (it != student_.end()) {
    studentGrade_[index] = newGrade;
  } else {
    std::cout << "Invalid Student Entry" << std::endl;
  }
}

double softwareDevelopment::getStudentGrade(const int& studentNumber) {

  std::vector<int>::iterator it;
  it = std::find(student_.begin(), student_.end(), studentNumber);
  size_t index = std::distance(student_.begin(), it);

  if (it != student_.end()) {
    return studentGrade_[index];
  } else {
    std::cout << "Invalid Student Entry" << std::endl;
    return 0;
  }
}

double softwareDevelopment::getClassAverageGrade() {
  double average;

  for (const double& grade : studentGrade_) {
    average += grade;
}

average /= studentGrade_.size();
return average;
}
