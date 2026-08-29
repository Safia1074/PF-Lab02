#include<stdio.h>
int main()
{   float pf_marks = 88.0, calculas_marks = 76.5, physics_marks = 82.0;
    int pf_credits = 3, calculas_credits = 3, physics_credits = 2;
    
    int total_credits = pf_credits + calculas_credits + physics_credits;
    float total_score = (pf_marks * pf_credits) + (calculas_marks * calculas_credits) + (physics_marks * physics_credits);
    float weighted_average = total_score / total_credits;  
   
    printf("================ SEMESTER ACADEMIC REPORT ===============\n");  
    printf("Course              Credit Hours    Obtained Marks\n");
    printf("---------------------------------------------------------\n");
    printf("Programming Fund.     %d             %.2f\n", pf_credits, pf_marks);
    printf("Calculas.              %d             %.2f\n", calculas_credits, calculas_marks);
    printf("Applied Physics.       %d             %.2f\n", physics_credits, physics_marks);
    printf("----------------------------------------------------------\n");
    printf("Total Credits: %d      Weighted Average:  %.2f%%\n", total_credits, weighted_average);
    printf("==========================================================\n"); 
  
    return 0;
}