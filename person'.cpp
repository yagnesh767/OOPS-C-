#include <iostream>
#include <string>
class Person {
protected:
    std::string name;
    int age;
    char gender;

public:
    Person(const std::string& nm, int ag, char gen)
        : name(nm), age(ag), gender(gen) {}
    void setName(const std::string& nm) { name = nm; }
    std::string getName() const { return name; }

    void setAge(int ag) { age = ag; }
    int getAge() const { return age; }

    void setGender(char gen) { gender = gen; }
    char getGender() const { return gender; }
};
class Student : public Person {
private:
    int rollNumber;
    std::string className;

public:
    Student(const std::string& nm, int ag, char gen, int roll, const std::string& cls)
        : Person(nm, ag, gen), rollNumber(roll), className(cls) {}
    void setRollNumber(int roll) { rollNumber = roll; }
    int getRollNumber() const { return rollNumber; }

    void setClassName(const std::string& cls) { className = cls; }
    std::string getClassName() const { return className; }
};
class Teacher : public Person {
private:
    std::string subject;
    double salary;

public:
    Teacher(const std::string& nm, int ag, char gen, const std::string& sub, double sal)
        : Person(nm, ag, gen), subject(sub), salary(sal) {}
    void setSubject(const std::string& sub) { subject = sub; }
    std::string getSubject() const { return subject; }

    void setSalary(double sal) { salary = sal; }
    double getSalary() const { return salary; }
};

int main() {
    Student student("Alice", 20, 'F', 101, "12th Grade");
    std::cout << "Student Name: " << student.getName() << std::endl;
    std::cout << "Student Age: " << student.getAge() << std::endl;
    std::cout << "Student Gender: " << student.getGender() << std::endl;
    std::cout << "Student Roll Number: " << student.getRollNumber() << std::endl;
    std::cout << "Student Class: " << student.getClassName() << std::endl;

    std::cout << std::endl;
    Teacher teacher("Mr. Smith", 35, 'M', "Mathematics", 50000.0);
    std::cout << "Teacher Name: " << teacher.getName() << std::endl;
    std::cout << "Teacher Age: " << teacher.getAge() << std::endl;
    std::cout << "Teacher Gender: " << teacher.getGender() << std::endl;
    std::cout << "Teacher Subject: " << teacher.getSubject() << std::endl;
    std::cout << "Teacher Salary: $" << teacher.getSalary() << std::endl;

    return 0;
}
