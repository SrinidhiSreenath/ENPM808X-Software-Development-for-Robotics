#include <vector>
#include <algorithm>

class softwareDevelopment {
 private:
  std::vector<int> student_;
  std::vector<double> studentGrade_;

 public:
  softwareDevelopment();
  ~softwareDevelopment();

  void listStudentAndGrades();
  void changeStudentGrade(const int& studentNumber, const double& newGrade);
  double getStudentGrade(const int& studentNumber);
  double getClassAverageGrade();
};
