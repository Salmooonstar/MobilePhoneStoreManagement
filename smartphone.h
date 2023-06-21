void smartphone(){

 printf("<Available Smartphones>\n");
        printf("1. Samsung Galaxy S21 Ultra - 79,999 BDT\n");
        printf("2. Samsung Galaxy S22 Ultra - 99,999 BDT\n");
        printf("3. Samsung Galaxy S23 Ultra - 169,999 BDT\n");
        printf("4. Samsung Galaxy A53 - 45,999 BDT\n");
        printf("5. Samsung Galaxy Z Flip4 - 145,999 BDT\n");
        printf("6. Samsung Galaxy Z Fold4 - 160,999 BDT\n");

        printf("The product you want to buy: ");
        int j;
        scanf("%d", &j);

        if (j == 1) {
            printf("Samsung Galaxy S21 Ultra\n");
            printf("Price: 79,999 BDT\n");
            customerdtls();
        } else if (j == 2) {
            printf("Samsung Galaxy S22 Ultra\n");
            printf("Price: 99,999 BDT\n");
            customerdtls();
        } else if (j == 3) {
            printf("Samsung Galaxy S23 Ultra\n");
            printf("Price: 169,999 BDT\n");
            customerdtls();
        } else if (j == 4) {
            printf("Samsung Galaxy A53\n");
            printf("Price: 45,999 BDT\n");
            customerdtls();
        } else if (j == 5) {
            printf("Samsung Galaxy Z Flip4\n");
            printf("Price: 145,999 BDT\n");
            customerdtls();
        } else if (j == 6) {
            printf("Samsung Galaxy Z Fold4\n");
            printf("Price: 160,999 BDT\n");
            customerdtls();
        }


}
