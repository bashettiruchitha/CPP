#include "exm.h"


Exam::Exam()
{
    ExamCode="";
    exam=Examtype::ONLINE;
     ExamDate=Date();


}

Exam::Exam(const std::string &examCode, Examtype examType, const Date &examDate)
{
   
  ExamCode=examCode;
  exam=examType;
  ExamDate= examDate;

}


void Exam::display()
{
 std::cout << "Exam Code: " << ExamCode << std::endl;
    std::cout << "Exam Type: " <<"(examType == ExamType::1-ONLINE 2-Online 3- Offline)" << std::endl;
    std::cout << "Exam Date: ";
    ExamDate.print();
    std::cout << std::endl;
 }


