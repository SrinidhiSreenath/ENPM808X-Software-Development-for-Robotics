#include <iostream>
#include <vector>
#include <string>

double getAverageHomeworkGrade(std::vector<double> homeworkGrades) {
  double average = 0.0;
  for (const auto& grade : homeworkGrades) {
    average += grade;
  }
  average /= homeworkGrades.size();
  return average;
}

double getFinalGrade(double averageHomework, double midTerm, double finalTerm) {

  double final = 0.2 * midTerm + 0.4 * finalTerm + 0.4 * averageHomework;
  return final;
}

int main()
{

    std::vector<std::string> studentNames;
    std::vector<double> studentFinalGrade;

    size_t totalStudents;

    std::cout << "Enter total number of students: " << std::endl;
    std::cin >> totalStudents;

  for (size_t i = 0; i < totalStudents; i++) {

    std::string name;
    std::cout << "Enter Student " << i + 1 << " name: " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, name);

    studentNames.push_back(name);

    std::cout << "Enter grades. All grades are on a scale from 0 to 100"
        << std::endl;

    double midTermGrade, finalTermGrade;

    std::cout << "Enter midterm grade: " << std::endl;
    std::cin >> midTermGrade;

    std::cout << "Enter finalterm grade: " << std::endl;
    std::cin >> finalTermGrade;

    // Total number of Homeworks are only 3
    std::vector<double> gradeList;
    for (size_t j = 0; j < 3; j++) {
      double grade;
      std::cout << "Enter homework " << j + 1
          << " grade"
          << std::endl;
      std::cin >> grade;

      gradeList.push_back(grade);
    }
    double averageHomework = getAverageHomeworkGrade(gradeList);
    double finalGrade = getFinalGrade(averageHomework, midTermGrade,
                                      finalTermGrade);
    
    studentFinalGrade.push_back(finalGrade);

    std::cout << std::endl;
    }

  std::cout << std::endl;
  for (size_t iter = 0; iter < studentNames.size(); iter++) {
    std::cout << "Student name: " << studentNames[iter] << " Final grade: "
        << studentFinalGrade[iter] << std::endl;
  }

  std::cout << std::endl;
  return 0;
}
