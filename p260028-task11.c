#include<stdio.h>
int main()
{   
     int tea_quantity = 3, samosa_quantity = 4, chicken_roll_quantity = 2;
     float tea_price = 60.00, samosa_price = 40.50, chicken_roll_price = 120.00;
 
     float tea_subtotal = tea_quantity * tea_price;
     float samosa_subtotal = samosa_quantity * samosa_price;
     float chicken_roll_subtotal = chicken_roll_quantity * chicken_roll_price;

     float bill_subtotal = tea_subtotal + samosa_subtotal + chicken_roll_subtotal;
     float gst = 0.16 * bill_subtotal;
     float grand_total = bill_subtotal + gst;
    
     printf("================= FAST CAFETERIA RECEIPT ================\n");
     printf("Item           Quantity   Unit Price (PKR)    Subtotal (PKR)\n");
     printf("-----------------------------------------------------------\n");
     printf("Tea            %d      %.2f                %.2f\n", tea_quantity, tea_price, tea_subtotal);
     printf("Samosa         %d      %.2f                %.2f\n", samosa_quantity, samosa_price, samosa_subtotal);
     printf("Chicken Roll    %d      %.2f               %.2f\n", chicken_roll_quantity, chicken-roll_price, chicken-roll_subtotal);
     printf("------------------------------------------------------------\n");
     printf("Subtotal:                                  PKR %.2f\n", bill_subtotal);
     printf("GST (16%%):                                PKR %.2f\n", gst);
     printf("------------------------------------------------------------\n");
     printf("Grand Total:                               PKR %.2f\n", grand_total);
     printf("================== THANK YOU FOR YOUR VISIT ================\n");
 
     return 0;
}                                   