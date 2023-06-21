
void Login(){
char user_name[50];
long long password;
printf("User name:");
scanf("%s",user_name);
printf("\npassword(default=1234):");
scanf("%lld",&password);
if(password==1234){

   printf("Log in successful");
}
else{
    printf("error 404\n");
    system("cls");
   Login();
}

}
