#include<iostream>
using namespace std;
void printMenu();
void calculateAggeregate(string name,float matricMarks,float interMarks, float ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2, int ecatMarksStd2);
main()
{
	printMenu();
	float matricMarks,interMarks,ecatMarks;
	string name;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter matric marks: ";
	cin >>matricMarks;
	cout<<"Enter inter marks: ";
	cin>>interMarks;
	cout<<"Enter ECAT marks: ";
	cin>>ecatMarks;
	calculateAggeregate(name,matricMarks,interMarks,ecatMarks);
	string nameStd1,nameStd2;
	int ecatMarksStd1,ecatMarksStd2;
	cout<<"Enter the name of first student: ";
	cin>>nameStd1;
	cout<<"Enter the name of second student: ";
	cin>>nameStd2;
	cout<<"Enter the marks of student1: ";
	cin>>ecatMarksStd1;
	cout<<"Enter the marks of student2: ";
	cin>>ecatMarksStd2;
	compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
}
  void printMenu()
	{
	 cout<<"University of Engineering and Technology (UET)" <<endl;
	}
  void calculateAggeregate(string name,float matricMarks,float interMarks,float ecatMarks)
	{
	 float aggeregate;
	 aggeregate=((matricMarks/1100)*30)+((interMarks/550)*30)+((ecatMarks/400)*40);
	 cout<<"Aggeregate: " <<aggeregate << "%" <<endl;
	}
  void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2)
	{
	 if(ecatMarksStd1>ecatMarksStd2)
	 {
		cout<<"First roll number is assigned to " << nameStd1;
	 }
	 else
	 {
		cout<<"First roll number is assigned to " << nameStd2;
	 }
	}
