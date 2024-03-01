#ifndef EXM_H
#define EXM_H
#include "exm.h"
#include "date.h"

class Exam
{

    std::string ExamCode;
    Examtype exam;
    Date ExamDate;

    public:
    Exam();
    Exam(const std::string& examCode, Examtype examType, const Date& examDate);
    void display();

    std::string examCode() const { return ExamCode; }
    void setExamCode(const std::string &examCode) { ExamCode = examCode; }

    Examtype getExam() const { return exam; }
    void setExam(const Examtype &exam_) { exam = exam_; }

    Date examDate() const { return ExamDate; }
    void setExamDate(const Date &examDate) { ExamDate = examDate; }

 
};


#endif // EXM_H
