#include<stdio.h>
int main()
{   double principal = 250000.00;
    float rate = 8.5;
    int time = 3;
    double I = (principal * rate * time) / 100.0;
    double A = principal + I;
    double monthly_installment = A / (time * 12.0);
    printf("================BANK LOAN INTEREST SUMMARY ================\n");
    printf("Principal Amount:   PKR %.2f\n", principal);
    printf(Annual Interest Rate: %.2f%%\n", rate);
    printf("Loan Duration:       %d Years (%d Months)\n", time, time *  12);
    printf("-----------------------------------------------------------\n");
    printf("Total Accrud Interest: PKR %.2f\n", I);
    printf("Total payable Amount:  PKR %.2f\n", A);
    printf("Monthly Installment:   PKR %.2f\n", monthly_installment);
    printf("===========================================================\n");
    return 0;
} 