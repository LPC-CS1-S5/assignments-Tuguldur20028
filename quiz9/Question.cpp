#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct employeeRecords{
  int id;
  string name;
  int salary;
  string department;
  string date;
};

void filewrite();
void	printrecord(const employeeRecords e);
void employeestruct(employeeRecords e[]);
void finddepartment(employeeRecords e[], int numRecords, string department);
void findsalary(employeeRecords e[], int numRecords, int salary);

int main(){
  int numRecords = 0;
  employeeRecords e[20];
  int salary;
  string department;

  cout << "welcome to the programm reads employee imformation";
  cout << "listing the employee who's salaries are above 100000.";
  cout << "Find the employee that works in the Computer department.";
  