
void smartWatch(){
 printf("<Available Smart Watches>\n");
        printf("1. Samsung Galaxy Watch 4 - 19,999 BDT\n");
        printf("2. Samsung Galaxy Watch 4 Classic - 24,999 BDT\n");
        printf("3. Samsung Galaxy Watch 4 Active - 17,999 BDT\n");

        printf("The product you want to buy: ");
        int j;
        scanf("%d", &j);

        if (j == 1) {
            printf("Samsung Galaxy Watch 4\n");
            printf("Price: 19,999 BDT\n");
            customerdtls();
        } else if (j == 2) {
            printf("Samsung Galaxy Watch 4 Classic\n");
            printf("Price: 24,999 BDT\n");
            customerdtls();
        } else if (j == 3) {
            printf("Samsung Galaxy Watch 4 Active\n");
            printf("Price: 17,999 BDT\n");
            customerdtls();
        }

}
