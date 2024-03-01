#include "exm.h"
#include "date.h"
 
int main() {
    Date onlineExamDate(1, static_cast<unsigned int>(Month::FEBRUARY), 2024);
    Date offlineExamDate(15, static_cast<unsigned int>(Month::MARCH), 2024);
 
    Exam onlineExam("EXM001", Examtype::ONLINE, onlineExamDate);
    Exam offlineExam("EXM002", Examtype::OFFLINE, offlineExamDate);
 
    onlineExam.display();
    offlineExam.display();
 
    return 0;
}

//  Exam onlineExam(123, ExamType::ONLINE, Date(20, 2, 2024));
//         Exam offlineExam(456, ExamType::OFFLINE, Date(25, 2, 2024));
 
//         std::cout << "Online Exam Details:\n";
//         onlineExam.displayDetails();
 
//         std::cout << "\nOffline Exam Details:\n";
//         offlineExam.displayDetails();