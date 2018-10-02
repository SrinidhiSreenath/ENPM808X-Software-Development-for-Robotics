/**
 *  @file    softwareDevelopment.hpp
 *  @author  Srinidhi Sreenath (SrinidhiSreenath)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 2 assignment, Excercize 3-10 Software Engineering
 *
 *  @section DESCRIPTION
 *
 *  Header file for class softwareDevelopment
 *
 */

#ifndef WEEK_2_SOFTWAREENGINEERING_3_10_INCLUDE_SOFTWAREDEVELOPMENT_HPP_
#define WEEK_2_SOFTWAREENGINEERING_3_10_INCLUDE_SOFTWAREDEVELOPMENT_HPP_

// CPP Headers
#include <iostream>
#include <vector>
#include <algorithm>

/**
 *  @brief Class that supports course grading for a course
 */
class SoftwareDevelopment {
 private:
  std::vector<int> student_;  ///< Vector to hold students referred by integers
  std::vector<double> studentGrade_;  ///< Vector to hold student grades (type double)

 public:
  SoftwareDevelopment();    // Default Constructor
  ~SoftwareDevelopment();   // Destructor

  void listStudentAndGrades();  // Prints all students and their corresponding grade
  void changeStudentGrade(const int& studentNumber, const double& newGrade);  // Change a given student's grade to desired value
  double getStudentGrade(const int& studentNumber);  // Returns desired students's grade
  double getClassAverageGrade();  // Returns entire class average GPA
};

#endif /* WEEK_2_SOFTWAREENGINEERING_3_10_INCLUDE_SOFTWAREDEVELOPMENT_HPP_ */
