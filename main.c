#include <stdio.h>
#include "c_details.h"
#include "login.h"
#include "about.h"
#include "asc.h"
#include "buds.h"
#include "homeappl.h"
#include "smartphone.h"
#include "tvnc.h"
#include "watch.h"
#include "splash.h"



void preorder() {
    char product[50];
    printf("Enter the product you want to pre-order: ");
    scanf("%s", &product);

    printf("Thank you for pre-ordering %s. We will notify you when it is available.\n", product);
}

int main(){
    splashScrn();
    system("cls");
    Login();
    system("cls");

    int i;
    printf("WELCOME TO SAMSUNG\n");
    printf("________________________\n");
    printf("Choose your option\n");
    printf("1. Smartphones\n");
    printf("2. Smart Watches\n");
    printf("3. Galaxy Buds\n");
    printf("4. Accessories\n");
    printf("5. Pre-order\n");
    printf("6. TV and Computer\n");
    printf("7. Home Appliance\n");
    printf("8. About Samsung\n");
    scanf("%d", &i);
     system("cls");

    if (i == 1) {
     smartphone();
    }



     else if (i == 2) {
       smartWatch();
        }



    else if (i == 3) {

        buds();
    }

     else if (i == 4) {
       acs();
    }

    else if (i == 5) {
        preorder();
    }

     else if (i == 6) {
        tvAndComputer();
    }

    else if (i == 7) {
        homeAppliance();
    }

     else if (i == 8) {
        aboutSamsung();
    }

    printf("\nThanks for visiting");
    return 0;
}

