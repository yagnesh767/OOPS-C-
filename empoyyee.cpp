#include <iostream>
class Employee {
protected:
    double salary;  

public:
    Employee(double baseSalary) : salary(baseSalary) {}
    virtual double calculatePay() {
        return salary;  
    }
};
class Manager : public Employee {
private:
    double bonus;  

public:
    Manager(double baseSalary, double mgrBonus)
        : Employee(baseSalary), bonus(mgrBonus) {}
    double calculatePay() override {
        return salary + bonus;  
    }
};
class Engineer : public Employee {
private:
    double overtimePay;  

public:
    Engineer(double baseSalary, double overtimeRate)
        : Employee(baseSalary), overtimePay(overtimeRate * 40) {} 
    double calculatePay() override {
        return salary + overtimePay;  
    }
};

int main() {
    Manager manager(5000, 1000);  
    Engineer engineer(4000, 20);  
    std::cout << "Manager's total pay: $" << manager.calculatePay() << std::endl;
    std::cout << "Engineer's total pay: $" << engineer.calculatePay() << std::endl;

    return 0;
}
