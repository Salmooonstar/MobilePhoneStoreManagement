void buds(){
printf("<Available Galaxy Buds>\n");
        printf("1. Samsung Galaxy Buds Pro - 12,999 BDT\n");
        printf("2. Samsung Galaxy Buds Live - 9,999 BDT\n");
        printf("3. Samsung Galaxy Buds Plus - 7,999 BDT\n");

        printf("The product you want to buy: ");
        int j;
        scanf("%d", &j);

        if (j == 1) {
            printf("Samsung Galaxy Buds Pro\n");
            printf("Price: 12,999 BDT\n");
            customerdtls();
        } else if (j == 2) {
            printf("Samsung Galaxy Buds Live\n");
            printf("Price: 9,999 BDT\n");
            customerdtls();
        } else if (j == 3) {
            printf("Samsung Galaxy Buds Plus\n");
            printf("Price: 7,999 BDT\n");
            customerdtls();
        }

}
