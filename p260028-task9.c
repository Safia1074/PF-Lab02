#include<stdio.h>
int main(){
     double basic_salary = 85000.00;
     double hra = 0.20 * basic_salary;
     double ma =  0.10 * basic_salary;
     double gross_salary = basic_salary + hra +ma;
     double tax_deduction = 0.05 * gross_salary;
     double net_salary = gross_salary - tax_deduction;
     printf("================ MONTHLY SALARY SLIP ================\n");
     printf("Basic Salary:               PKR %.2f\n", basic_salary);
     printf("House Rent Allowance (20%%):  PKR %.2f\n", hra);
     printf("Medical Allowance (10%%):     PKR %.2f\n", ma);
     printf("------------------------------------------------------\n");
     printf("Gross Salary:            PKR %.2f\n", gross_salary);
     printf("Tax Deduction (5%%):     PKR %.2f\n", tax_deduction);
     printf("------------------------------------------------------\n");
     printf("Net payable Salary:       PKR %.2f\n", net_salary);
     printf("=======================================================\n");
     return 0;
}