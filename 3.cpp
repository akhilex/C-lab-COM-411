#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
public:
    int empId;
    string name;
    int houseNo;
    string area;
    string city;
    string state;
};

class Company {
public:
    vector<Employee> employees;
    void addEmployee(int empId, string name, int houseNo, string area, string city, string state) {
        Employee emp;
        emp.empId = empId;
        emp.name = name;
        emp.houseNo = houseNo;
        emp.area = area;
        emp.city = city;
        emp.state = state;
        employees.push_back(emp);
    }
    Employee getEmployeeById(int empId) {
        for (int i = 0; i < employees.size(); i++) {
            if (employees[i].empId == empId) {
                return employees[i];
            }
        }
        Employee emp; // create a dummy Employee object with default values
        return emp;
    }
};

int main() {
    Company company;
    int empId, houseNo;
    string name, area, city, state;

    for (int i = 0; i < 3; i++) {
        cout << "Enter details for employee " << i+1 << endl;
        cout << "Emp ID: ";
        cin >> empId;
        cout << "Name: ";
        cin >> name;
        cout << "House No: ";
        cin >> houseNo;
        cout << "Area: ";
        cin >> area;
        cout << "City: ";
        cin >> city;
        cout << "State: ";
        cin >> state;

        company.addEmployee(empId, name, houseNo, area, city, state);
    }

    cout << endl << "Enter an employee ID to retrieve details: ";
    cin >> empId;

    Employee emp = company.getEmployeeById(empId);
    if (emp.empId == 0) {
        cout << "Employee with ID " << empId << " not found." << endl;
    } else {
        cout << "Employee details:" << endl;
        cout << "Emp ID: " << emp.empId << endl;
        cout << "Name: " << emp.name << endl;
        cout << "House No: " << emp.houseNo << endl;
        cout << "Area: " << emp.area << endl;
        cout << "City: " << emp.city << endl;
        cout << "State: " << emp.state << endl;
    }

    return 0;
}
