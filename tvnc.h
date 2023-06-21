void tvAndComputer() {
    printf("<Available TVs and Computers>\n");
    printf("1. Samsung QLED 4K TV - 55,999 BDT\n");
    printf("2. Samsung Neo QLED 8K TV - 199,999 BDT\n");
    printf("3. Samsung 27\" Curved Gaming Monitor - 34,999 BDT\n");
    printf("4. Samsung Galaxy Book Pro - 89,999 BDT\n");

    printf("The product you want to buy: ");
    int j;
    scanf("%d", &j);

    if (j == 1) {
        printf("Samsung QLED 4K TV\n");
        printf("Price: 55,999 BDT\n");
        customerdtls();
    } else if (j == 2) {
        printf("Samsung Neo QLED 8K TV\n");
        printf("Price: 199,999 BDT\n");
        customerdtls();
    } else if (j == 3) {
        printf("Samsung 27\" Curved Gaming Monitor\n");
        printf("Price: 34,999 BDT\n");
        customerdtls();
    } else if (j == 4) {
        printf("Samsung Galaxy Book Pro\n");
        printf("Price: 89,999 BDT\n");
        customerdtls();
    }
}

