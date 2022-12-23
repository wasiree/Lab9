#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//[Missing Code 1] Write definition of the function findGrade() here.
char findGrade(double x){
   if(x > 90)  return 'A';
   else if(x > 75) return 'B';
   else if(x > 60) return 'C';
   else if(x > 45) return 'D';
   else return 'F';
 } 
 
int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		//[Missing Code 2] Get name of the i-th students that may include whitespace.
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		//[Missing Code 3] Get score of the i-th students.
		i++;
	}
	cout << "---------------------------------------------\n";

	return 0;
}
