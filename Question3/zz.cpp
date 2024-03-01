// #include <iostream>
// #include <stdexcept>
 
// class Date {
// public:
//     static const unsigned int monthsPerYear = 12;
//     Date() : day(0), month(0), year(0) {}
//     Date(unsigned int d, unsigned int m, unsigned int y) : day(d), month(m), year(y) {
//         if (!checkDay(day)) {
//             throw std::invalid_argument("Invalid day for given month and year.");
//         }
//     }
//     void print() const {
//         std::cout << day << "/" << month << "/" << year << std::endl;
//     }
// private:
//     unsigned int day;
//     unsigned int month;
//     unsigned int year;
//     bool isLeapYear(unsigned int year) const {
//         return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//     }
//     int daysPerMonth(unsigned int m) const {
//         static const int days[monthsPerYear + 1] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//         if (m == 2 && isLeapYear(year)) return 29;
//         return days[m];
//     }
//     bool checkDay(unsigned int testDay) const {
//         if (testDay > 0 && testDay <= daysPerMonth(month)) {
//             return true;
//         }
//         throw std::invalid_argument("Invalid day for given month.");
//         return false;
//     }
// };
 
// int main() {
//     try {
//         Date date(29, 2, 2024); // Leap year, February 29th should be valid
//         date.print();
//     } catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }
//     return 0;
// }
// #include <iostream>   class Date { public: ... by Bashetti Ruchitha
// 1:14 PM
// Bashetti Ruchitha
// #include <iostream>
 
// class Date {
// public:
//     static const unsigned int monthsPerYear = 12;
//     Date() : day(0), month(0), year(0) {}
//     Date(unsigned int d, unsigned int m, unsigned int y) : day(d), month(m), year(y) {
//         if (!checkDay(day)) {
//             throw std::invalid_argument("Invalid day for given month and year.");
//         }
//     }
//     void print() const {
//         std::cout << day << "/" << month << "/" << year << std::endl;
//     }
// private:
//     unsigned int day;
//     unsigned int month;
//     unsigned int year;
//     bool isLeapYear(unsigned int year) const {
//         return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//     }
//     int daysPerMonth(unsigned int m) const {
//         static const int days[monthsPerYear + 1] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//         if (m == 2 && isLeapYear(year)) return 29;
//         return days[m];
//     }
//     bool checkDay(unsigned int testDay) const {
//         if (testDay > 0 && testDay <= daysPerMonth(month)) {
//             return true;
//         }
//         throw std::invalid_argument("Invalid day for given month.");
//         return false;
//     }
// };
 
// enum class ExamType { ONLINE, OFFLINE };
 
// class Exam {
// public:
//     Exam(int code, ExamType type, const Date& date) : examCode(code), examType(type), examDate(date) {}
//     void displayDetails() const {
//         std::cout << "Exam Code: " << examCode << std::endl;
//         std::cout << "Exam Type: " << (examType == ExamType::ONLINE ? "Online" : "Offline") << std::endl;
//         std::cout << "Exam Date: ";
//         examDate.print();
//     }
// private:
//     int examCode;
//     ExamType examType;
//     Date examDate;
// };
 
// int main() {
//     try {
//         Exam onlineExam(123, ExamType::ONLINE, Date(20, 2, 2024));
//         Exam offlineExam(456, ExamType::OFFLINE, Date(25, 2, 2024));
 
//         std::cout << "Online Exam Details:\n";
//         onlineExam.displayDetails();
 
//         std::cout << "\nOffline Exam Details:\n";
//         offlineExam.displayDetails();
//     } catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }
//     return 0;
// }
// #ifndef DATE_H #define DATE_H   #include <s... by Bashetti Ruchitha
// 1:36 PM
// Bashetti Ruchitha
// #ifndef DATE_H
// #define DATE_H
 
// #include <stdexcept>
 
// enum class Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
// enum class ExamType { ONLINE, OFFLINE };
 
// class Date {
// public:
//     Date();  // Default constructor
//     Date(unsigned int day, unsigned int month, unsigned int year);  // Parameterized constructor
 
//     // Setters
//     void setDay(unsigned int day);
//     void setMonth(unsigned int month);
//     void setYear(unsigned int year);
 
//     // Getters
//     unsigned int getDay() const;
//     unsigned int getMonth() const;
//     unsigned int getYear() const;
 
//     void print() const;  // Print date
//     bool checkDay(unsigned int testDay) const;  // Check if the day is valid for the specified month and year
 
// private:
//     unsigned int day;
//     unsigned int month;
//     unsigned int year;
 
//     bool isLeapYear(unsigned int year) const;
//     int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// };
 
// #endif // DATE_H
// #include "Date.h" #include <iostream>   Dat... by Bashetti Ruchitha
// 1:36 PM
// Bashetti Ruchitha
// #include "Date.h"
// #include <iostream>
 
// Date::Date() : day(0), month(0), year(0) {}
 
// Date::Date(unsigned int day, unsigned int month, unsigned int year) : day(day), month(month), year(year) {
//     if (!checkDay(day)) {
//         throw std::invalid_argument("Invalid day for the given month and year.");
//     }
// }
 
// void Date::setDay(unsigned int day) {
//     if (!checkDay(day)) {
//         throw std::invalid_argument("Invalid day for the given month and year.");
//     }
//     this->day = day;
// }
 
// void Date::setMonth(unsigned int month) {
//     if (month < 1 || month > 12) {
//         throw std::invalid_argument("Invalid month.");
//     }
//     this->month = month;
// }
 
// void Date::setYear(unsigned int year) {
//     this->year = year;
// }
 
// unsigned int Date::getDay() const {
//     return day;
// }
 
// unsigned int Date::getMonth() const {
//     return month;
// }
 
// unsigned int Date::getYear() const {
//     return year;
// }
 
// void Date::print() const {
//     std::cout << day << "/" << month << "/" << year;
// }
 
// bool Date::checkDay(unsigned int testDay) const {
//     if (testDay < 1 || testDay > daysPerMonth[month]) {
//         return false;
//     }
//     if (month == static_cast<int>(Month::FEBRUARY) && testDay == 29 && isLeapYear(year)) {
//         return true;
//     }
//     return true;
// }
 
// bool Date::isLeapYear(unsigned int year) const {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }
// #ifndef EXAM_H #define EXAM_H   #include "D... by Bashetti Ruchitha
// 1:37 PM
// Bashetti Ruchitha
// #ifndef EXAM_H
// #define EXAM_H
 
// #include "Date.h"
 
// class Exam {
// public:
//     Exam();  // Default constructor
 
//     // Parameterized constructor
//     Exam(const std::string& examCode, ExamType examType, const Date& examDate);
 
//     // Getters
//     std::string getExamCode() const;
//     ExamType getExamType() const;
//     Date getExamDate() const;
 
//     void displayDetails() const;  // Display exam details
 
// private:
//     std::string examCode;
//     ExamType examType;
//     Date examDate;
// };
 
// #endif // EXAM_H
// #include "Exam.h" #include <iostream>   Exa... by Bashetti Ruchitha
// 1:37 PM
// Bashetti Ruchitha
// #include "Exam.h"
// #include <iostream>
 
// Exam::Exam() : examCode(""), examType(ExamType::ONLINE), examDate(Date()) {}
 
// Exam::Exam(const std::string& examCode, ExamType examType, const Date& examDate)
//     : examCode(examCode), examType(examType), examDate(examDate) {}
 
// std::string Exam::getExamCode() const {
//     return examCode;
// }
 
// ExamType Exam::getExamType() const {
//     return examType;
// }
 
// Date Exam::getExamDate() const {
//     return examDate;
// }
 
// void Exam::displayDetails() const {
//     std::cout << "Exam Code: " << examCode << std::endl;
//     std::cout << "Exam Type: " << (examType == ExamType::ONLINE ? "Online" : "Offline") << std::endl;
//     std::cout << "Exam Date: ";
//     examDate.print();
//     std::cout << std::endl;
// }
// #include "Exam.h"   int main() {     Date o... by Bashetti Ruchitha
// 1:37 PM
// Bashetti Ruchitha
// #include "Exam.h"
 
// int main() {
//     Date onlineExamDate(1, static_cast<unsigned int>(Month::FEBRUARY), 2024);
//     Date offlineExamDate(15, static_cast<unsigned int>(Month::MARCH), 2024);
 
//     Exam onlineExam("EXM001", ExamType::ONLINE, onlineExamDate);
//     Exam offlineExam("EXM002", ExamType::OFFLINE, offlineExamDate);
 
//     onlineExam.displayDetails();
//     offlineExam.displayDetails();
 
//     return 0;
// }
// has context menu