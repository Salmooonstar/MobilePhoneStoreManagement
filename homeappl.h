
void homeAppliance() {
    printf("<Available Home Appliances>\n");
    printf("1. Samsung Refrigerator - 75,999 BDT\n");
    printf("2. Samsung Washing Machine - 45,999 BDT\n");
    printf("3. Samsung Air Conditioner - 55,999 BDT\n");
    printf("4. Samsung Vacuum Cleaner - 10,999 BDT\n");

    printf("The product you want to buy: ");
    int j;
    scanf("%d", &j);

    if (j == 1) {
        printf("Samsung Refrigerator\n");
        printf("Price: 75,999 BDT\n");
        customerdtls();
    } else if (j == 2) {
        printf("Samsung Washing Machine\n");
        printf("Price: 45,999 BDT\n");
        customerdtls();
    } else if (j == 3) {
        printf("Samsung Air Conditioner\n");
        printf("Price: 55,999 BDT\n");
        customerdtls();
    } else if (j == 4) {
        printf("Samsung Vacuum Cleaner\n");
        printf("Price: 10,999 BDT\n");
        customerdtls();
    }
}
