//CPP Headers
#include <iostream>

//Header files
#include "softwareDevelopment.cpp"

int main()
{

  softwareDevelopment fallSemester;

  std::cout << std::endl;
  fallSemester.listStudentAndGrades();
  std::cout << std::endl;

  fallSemester.changeStudentGrade(10, 3.7);
  fallSemester.changeStudentGrade(20, 2.9);
  fallSemester.changeStudentGrade(30, 4.0);
  fallSemester.changeStudentGrade(40, 3.58);
  fallSemester.changeStudentGrade(50, 2.2);

  std::cout << std::endl;
  fallSemester.changeStudentGrade(15, 3.7);
  std::cout << std::endl;

  std::cout << "The grade of student 40 is now: "
            << fallSemester.getStudentGrade(40) << std::endl;

  std::cout << std::endl;
  fallSemester.listStudentAndGrades();
  std::cout << std::endl;

  double averageGPA = fallSemester.getClassAverageGrade();

  std::cout << "The average of the class is: " << averageGPA << std::endl;

  std::cout << std::endl;

  return 0;
}
