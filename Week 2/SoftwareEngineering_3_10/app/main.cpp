/**
 *  @file    main.cpp
 *  @author  Srinidhi Sreenath (SrinidhiSreenath)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 2 assignment, Excercize 3-10 Software Engineering
 *
 *  @section DESCRIPTION
 *
 *  This is a source file to use the class softwareDevelopment. The program
 *  changes the grades of students in the course and obtains average GPA of
 *  the class (total students)
 *
 */

//CPP Headers
#include <iostream>

//Class source CPP file
#include "softwareDevelopment.hpp"

int main()
{
  // Create an object of the class
  SoftwareDevelopment fallSemester;

  std::cout << "*** Initial student grades ***" << std::endl;
  fallSemester.listStudentAndGrades();
  std::cout << std::endl;

  // Change all student grades
  fallSemester.changeStudentGrade(10, 3.7);
  fallSemester.changeStudentGrade(20, 2.9);
  fallSemester.changeStudentGrade(30, 4.0);
  fallSemester.changeStudentGrade(40, 3.58);
  fallSemester.changeStudentGrade(50, 2.2);

  // Error thrown when trying to change the grade of a non-existent student
  std::cout
      << "*** When trying to change the grade of a non-existent student ***"
            << std::endl;
  fallSemester.changeStudentGrade(15, 3.7);
  std::cout << std::endl;

  //Access grade after its changed
  std::cout
      << "*** Accessing a student's (40) grade *** \nThe grade of student 40 is now: "
            << fallSemester.getStudentGrade(40) << std::endl;

  // List all students and their grades after changing
  std::cout << std::endl << "*** Student grades after changing ***"
            << std::endl;
  fallSemester.listStudentAndGrades();
  std::cout << std::endl;

  // Get average GPA of class (total students)
  double averageGPA = fallSemester.getClassAverageGrade();

  std::cout << "The average of the class is: " << averageGPA << std::endl;

  std::cout << std::endl;

  return 0;
}
