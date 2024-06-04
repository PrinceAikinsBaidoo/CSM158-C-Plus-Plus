#include<iostream>
using namespace std;

int main()
{    
    float score;
    string name;
    int ID;
    string subject;
    char grade;
    
    cout << "Enter your name:\t";
    cin >> name;
    
    cout << "Enter your student ID:\t";
    cin >> ID;
    
    cout << "Enter the subject:\t";
    cin >> subject;
    
    cout << "Enter your score:\t"; 
    cin >> score;
    
    if (score >= 70){
        grade = 'A';
    }
    
    else if (score >= 60){
        grade = 'B';
    }
    
    else if (score >= 50){
        grade = 'C';
    }
    
    else if (score >= 40){
        grade = 'D';
    }
    
    else if (score >= 60){
        grade = 'E';
    }
    
    else{
        grade = 'F';
    }
    
    cout << "STU_ID: " << ID<<endl;
    cout << "NAME: "<< name<<endl;
    cout << "You had " << score<< " in "<<subject<< " and that is "<< grade <<endl;
    return 0;
}