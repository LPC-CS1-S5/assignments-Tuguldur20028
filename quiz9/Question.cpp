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

  	filewrite();
	employeestruct(e);
 numRecords  = 1;
  finddepartment(e, numRecords, department);
  findsalary( e,  numRecords, salary);
}

void filewrite(){
  ofstream ofs;
  employeeRecords er;

  ofs.open("employee.txt");
  er.id =999999;
  er.name = "Tuguldur Odonbaatar";
  er.salary = 250000;
  er.department = "Computer";
  er.date = "May 18 2021";

  ofs << er.id << endl;
	ofs << er.name << endl;
	ofs << er.salary << endl;
	ofs << er.department << endl;
	ofs << er.date << endl;

 cout << "Your information was "<< sizeof(er)<< "bytes of data.\n";
}

void employeestruct(employeeRecords e[]){
  ifstream ifs;
  int idx=0,j;

  ifs.open("employee.txt");
  if (ifs){
    idx = 0;
    ifs >> e[idx].id >> e[idx].name >> e[idx].salary >> e[idx].department >> e[idx].date;
  }
}

void	printrecord(const employeeRecords e)
{
		cout << e.id << "\t" << e.name << "\t" << e.salary << "\t" << e.department << "\t"<< e.date;
}

void finddepartment(employeeRecords e[], int numRecords, string department){
  int pos = 0;
	
	cout << "Matched Records with " << department << endl;
	for(int i=0; i<numRecords;i++){
		pos = e[i].department.find("computer");
		if (pos!=string::npos)
			printrecord(e[i]);
}}

void findsalary(employeeRecords e[], int numRecords, int salary){
int pos = 0;
cout << "Here are employee make 100000 or more";
for (int i = 0; i< numRecords; i++){
//   while e[i]er.salary <= 100000{
//   while (e[i].salary <= 500000){
  if (e[i].salary <= 500000){
			printrecord(e[i]);}
}
}