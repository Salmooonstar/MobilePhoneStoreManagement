
void acs(){

 printf("<Available Accessories>\n");
        printf("1. Samsung Silicone Case - 1,999 BDT\n");
        printf("2. Samsung Wireless Charger - 3,999 BDT\n");
        printf("3. Samsung Clear View Cover - 2,499 BDT\n");

        printf("The product you want to buy: ");
        int j;
        scanf("%d", &j);

        if (j == 1) {
            printf("Samsung Silicone Case\n");
            printf("Price: 1,999 BDT\n");
            customerdtls();
        } else if (j == 2) {
            printf("Samsung Wireless Charger\n");
            printf("Price: 3,999 BDT\n");
            customerdtls();
        } else if (j == 3) {
            printf("Samsung Clear View Cover\n");
            printf("Price: 2,499 BDT\n");
            customerdtls();
        }

}
