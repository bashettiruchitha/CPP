#include <iostream>
 
class Date {
public:
    static const unsigned int monthsPerYear = 12;
    Date() : day(0), month(0), year(0) {}
    Date(unsigned int d, unsigned int m, unsigned int y) : day(d), month(m), year(y) {
        if (!checkDay(day)) {
            throw std::invalid_argument("Invalid day for given month and year.");
        }
    }
    void print() const {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;

    bool isLeapYear(unsigned int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    int daysPerMonth(unsigned int m) const {
        static const int days[monthsPerYear + 1] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (m == 2 && isLeapYear(year)) return 29;
        return days[m];
    }
    bool checkDay(unsigned int testDay) const {
        if (testDay > 0 && testDay <= daysPerMonth(month)) {
            return true;
        }
        throw std::invalid_argument("Invalid day for given month.");
        return false;
    }
};

enum class ExamType { ONLINE, OFFLINE };

class Exam
{
public:
    Exam(int code, ExamType type, const Date& date) : examCode(code), examType(type), examDate(date) {}
    void displayDetails() const {
        std::cout << "Exam Code: " << examCode << std::endl;
        std::cout << "Exam Type: " << (examType == ExamType::ONLINE ? "Online" : "Offline") << std::endl;
        std::cout << "Exam Date: ";
        examDate.print();
    }
private:
    int examCode;
    ExamType examType;
    Date examDate;
};

int main() {
    try {
        Exam onlineExam(123, ExamType::ONLINE, Date(20, 2, 2024));
        Exam offlineExam(456, ExamType::OFFLINE, Date(25, 2, 2024));
 
        std::cout << "Online Exam Details:\n";
        onlineExam.displayDetails();
 
        std::cout << "\nOffline Exam Details:\n";
        offlineExam.displayDetails();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}