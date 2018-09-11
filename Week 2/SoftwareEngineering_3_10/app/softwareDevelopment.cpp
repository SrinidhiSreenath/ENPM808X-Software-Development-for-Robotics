/**
 *  @file    SoftwareDevelopment.cpp
 *  @author  Srinidhi Sreenath (SrinidhiSreenath)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 2 assignment, Excercize 3-10 Software Engineering
 *
 *  @section DESCRIPTION
 *
 *  Source file for class SoftwareDevelopment. The class supports course
 *  grading. It stores students and their corresponding grades. Member
 *  functions assist in listing the students and their grades, changing a
 *  student's grade, obtaining a student's grade and calculating average
 *  GPA of all the students i.e entire class.
 *
 */

// Class header file
#include "softwareDevelopment.hpp"

/**
 *   @brief  Default constructor for SoftwareDevelopment
 *           Defines custom students and sets all students' grade to 0.0
 *   @param  none
 *   @return void
 */
SoftwareDevelopment::SoftwareDevelopment() {
  std::cout << "Course grading initialized" << std::endl;

  //Defining custom input. Students are 10, 20, 30, 40, 50. All grades are initialized to 0.0
  for (int i = 0; i < 5; i++) {
    student_.push_back((i + 1) * 10);
    studentGrade_.push_back(0.0);
  }
}

/**
 *   @brief  Destructor for SoftwareDevelopment
 *
 *   @param  none
 *   @return void
 */
SoftwareDevelopment::~SoftwareDevelopment() {
}

/**
 *   @brief  Lists all the students and their corresponding grades
 *
 *   @param  none
 *   @return void
 */
void SoftwareDevelopment::listStudentAndGrades() {
  std::cout << "List of students and their grades" << std::endl;

  // Iterate over the list of students and print student and grade info
  for (size_t iter = 0; iter < student_.size(); iter++) {
    std::cout << "Student: " << student_[iter] << "   Grade: "
        << studentGrade_[iter] << std::endl;
  }
}

/**
 *   @brief  Changes a student's grade to desired value by replacing
 *           corresponding value in studentGrade_ vector.
 *
 *   @param  studentNumber is the int value of student whose grade is to changed
 *   @param  newGrade is the new grade as double
 *   @return void
 */
void SoftwareDevelopment::changeStudentGrade(const int& studentNumber,
                                             const double& newGrade) {
  std::vector<int>::iterator it;  ///< iterator to a vector of int values i.e student_

  //Find which student's grade is to be changed and obtain the corresponding vector index
  it = std::find(student_.begin(), student_.end(), studentNumber);
  size_t index = std::distance(student_.begin(), it);

  // If index is found, change the corresponding grade else print invalid entry.
  if (it != student_.end()) {
    studentGrade_[index] = newGrade;
  } else {
    std::cout << "Invalid Student Entry" << std::endl;
  }
}

/**
 *   @brief  Get a student's grade
 *
 *   @param  studentNumber is the int value of student whose grade is to changed
 *   @return desired student's grade as double
 */
double SoftwareDevelopment::getStudentGrade(const int& studentNumber) {
  //Find which student's grade is to be changed and obtain the corresponding vector index
  std::vector<int>::iterator it;
  it = std::find(student_.begin(), student_.end(), studentNumber);
  size_t index = std::distance(student_.begin(), it);

  // If index is found, print the student's grade else print invalid entry.
  if (it != student_.end()) {
    return studentGrade_[index];
  } else {
    std::cout << "Invalid Student Entry" << std::endl;
    return 0;
  }
}

/**
 *   @brief  Calculates average grade of class
 *
 *   @param  none
 *   @return average grade of class as double
 */
double SoftwareDevelopment::getClassAverageGrade() {
  double average;  ///< local variable to store average value

  //Accumulate grades into local variable
  for (const double& grade : studentGrade_) {
    average += grade;
}
// Divide accumulated value by size to obtain average
average /= studentGrade_.size();
return average;
}
