#include <iostream>
using namespace std;
int main(){
    string Employee_Name;
    float Hours_Worked, Gross_Pay, Income_Tax, NHC_Levy, District_Tax, Edu_Fund, Total_deduction, Net_Pay;
    int No_of_Children;
    int No_of_Employees;
    int i;

    cout<<"Enter the number of employees:\t";
    cin>>No_of_Employees;

    for (i == 0; i < No_of_Employees; i++ )
        {
        cout<<"\nEnter name of employee:\n";
        cin>>Employee_Name;

        cout<<"Enter the number of hours worked:\t";
        cin>>Hours_Worked;

        // Calculating for the Gross pay
        if (Hours_Worked <= 40){
            Gross_Pay = Hours_Worked * 5;
        }
        else {
            Gross_Pay = (40 * 5) + ((Hours_Worked-40) * 1.5 * 5);
        }
        // Calculating for Income tax
        Income_Tax = 0.15 * Gross_Pay;
        // Calculating for National Health Contribution Levy
        NHC_Levy = 0.025 * Gross_Pay;
        // Calculating for District Tax
        District_Tax = 0.01 * Gross_Pay;
        // Calculating for Educational Fund
        cout<<"Enter the number of children you have:\t";
        cin>>No_of_Children;
        if (No_of_Children < 3){
            Edu_Fund = 0;
        }
        else{
            Edu_Fund = (No_of_Children - 3) * 0.5;
        }

        Total_deduction = Income_Tax + NHC_Levy + District_Tax + Edu_Fund;
        Net_Pay = Gross_Pay - Total_deduction;

        cout<< "Employee's Name:\t\t\t" << Employee_Name << endl;
        cout<< "Gross Pay:\t\t\t\t" << Gross_Pay << endl;
        cout<< "Income Tax:\t\t\t\t" << Income_Tax << endl;
        cout<< "National Health Contribution Levy:\t" << NHC_Levy << endl;
        cout<< "District Tax;\t\t\t\t" << District_Tax << endl;
        cout<< "Educational Fund:\t\t\t" << Edu_Fund << endl;
        cout<< "Total Deductions:\t\t\t" << Total_deduction <<endl;
        cout<< "Net Pay:\t\t\t\t" << Net_Pay <<endl;

    }

    return 0;
}
