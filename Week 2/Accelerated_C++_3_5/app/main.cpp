/**
 *  @file    main.cpp
 *  @author  Srinidhi Sreenath (SrinidhiSreenath)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 2 assignment, Excercise 3-5 Accelerated C++
 *
 *  @section DESCRIPTION
 *
 *  This is a program that reads from a standard input stream
 *  for a list of students and their respective midterm, finalterm
 *  and homework grades and prints out the students' name and
 *  their corresponding final grade. Total number of homeworks
 *  is fixed at 3.
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

/**
 *   @brief  Calculates average grade of class given set of grades
 *
 *   @param  homeworkGrades is a vector containing the list of grades of students
 *   @return average class grade as double
 */

double getAverageHomeworkGrade(const std::vector<double>& homeworkGrades) {
  double average = 0.0;  ///< Average grade initialized
  // Accumulate all grades into average
  for (const auto& grade : homeworkGrades) {
    average += grade;
  }
  // Divide by total size to get average grade
  average /= homeworkGrades.size();
  return average;
}

/**
 *   @brief  Calculates final grade of a student given midterm, finalterm and average homework grades
 *
 *   @param  averageHomework is a double which is the average homework grade of the student
 *   @param  midTerm is a double which is the midterm grade of the student
 *   @param  finalTerm is a double which is the finalterm grade of the student
 *   @return final student grade as double
 */

double getFinalGrade(const double& averageHomework, const double& midTerm,
                     const double& finalTerm) {
  double final = 0.2 * midTerm + 0.4 * finalTerm + 0.4 * averageHomework;  ///< Define final grade variable
  return final;
}

int main()
{
  std::vector<std::string> studentNames;  ///< Vector of student names (string)
  std::vector<double> studentFinalGrade;  ///< Vector of student final grades (double)

  size_t totalStudents;  ///< Total number of students

  std::cout << "Enter total number of students: " << std::endl;
  std::cin >> totalStudents;

  // Prompt user input for each student's name and grades
  for (size_t i = 0; i < totalStudents; i++) {

    std::string name;  ///< local string variable to hold student name
    std::cout << "Enter Student " << i + 1 << " name: " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, name);

    studentNames.push_back(name);

    std::cout << "Enter grades. All grades are on a scale from 0 to 100"
        << std::endl;

    double midTermGrade, finalTermGrade;  ///< local double variables to hold midterm and finalterm grades

    std::cout << "Enter midterm grade: " << std::endl;
    std::cin >> midTermGrade;

    std::cout << "Enter finalterm grade: " << std::endl;
    std::cin >> finalTermGrade;

    // Total number of Homeworks are only 3
    std::vector<double> gradeList;  ///< local Vector to hold student's homework grades (double)
    for (size_t j = 0; j < 3; j++) {
      double grade;
      std::cout << "Enter homework " << j + 1
          << " grade"
          << std::endl;
      std::cin >> grade;

      gradeList.push_back(grade);
    }
    double averageHomework = getAverageHomeworkGrade(gradeList);  // Function call to get student's average homework grade.
    double finalGrade = getFinalGrade(averageHomework, midTermGrade,
                                      finalTermGrade);  // Function call to get student's final grade.

    studentFinalGrade.push_back(finalGrade);

    std::cout << std::endl;
    }

  std::cout << std::endl;
  // Print students and their respective grades
  for (size_t iter = 0; iter < studentNames.size(); iter++) {
    std::cout << "Student name: " << studentNames[iter] << ", Final grade: "
        << studentFinalGrade[iter] << std::endl;
  }

  std::cout << std::endl;
  return 0;
}
