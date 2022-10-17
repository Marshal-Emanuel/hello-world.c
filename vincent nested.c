//used if else,switch case,if
#include <stdio.h>
#include <math.h>

int main()

{
 int a,qty,rate,total,food;
//USER TO SELECT MEAL OF THE DAY
 printf("\nMENU CARD \nSelect your meal \n1.Breakfast \n2.Lunch \n3.Supper\n");
 scanf("%d",&a);
 //USER SELECTS BREAKFAST
if (a==1)
    {
     printf("\nMENU CARD \nSelect your food \n1.tea \n2.coffee \n3.Hot water\n");
     printf("Enter your food choice:\n");
     scanf("%d",&food);

    switch (food){
        //USER CHOOSE TEA
    case 1:
    printf("\nYou have selected tea.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);
//if statement
    if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }


    break;
//USER CHOOSE COFFEE
      case 2 :printf("\nYou have selected coffee.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=25;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);
        if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }

    break;

    //USER CHOOSE HOT WATER

      case 3 :printf("\nYou have selected Hot water.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=10;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);

        if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }


    break;

    }


}
//USER SELECTS LUNCH
else if  (a==2) {
         printf("\nMENU CARD \nSelect your food \n1.rice \n2.Githeri \n3.Spinach ugali\n");
     printf("Enter your food choice:\n");
     scanf("%d",&food);

      switch (food){
          //USER CHOOSE RICE
    case 1:
    printf("\nYou have selected rice.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=40;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);

     if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }
    break;

//USER CHOOSE GITHERI
      case 2 :printf("\nYou have selected githeri.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=50;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);

        if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }
    break;
//USER CHOOSE SPINACH UGALI
      case 3 :printf("\nYou have selected .\Spinach ugali\n Enter the quantity :");
    scanf("%d",&qty);
    rate=60;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);

        if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }
    break;

    }





}
//USER CHOOSE SUPPER
else if (a==3){
            printf("\nMENU CARD \nSelect your food \n1.cabbage ugali \n2.Nyama sukuma \n3.Spinach uji\n");
     printf("Enter your food choice:\n");
     scanf("%d",&food);

      switch (food){
        //USER CHOOSE CABBAGE UGALI
    case 1:
    printf("\nYou have selected cabbage ugali.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=45;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);

        if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }
    break;

    //USER CHOOSE NYAMA SUKUMA
      case 2 :printf("\nYou have selected Nyama sukuma :\n Enter the quantity :");
    scanf("%d",&qty);
    rate=80;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);

        if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }
    break;

    //USER CHOOSE SPINACH UJI
      case 3 :printf("\nYou have selected:\ Spinach uji \nEnter the quantity :");
    scanf("%d",&qty);
    rate=100;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);

        if (total==total)
    {

        printf("YOURE WELCOME AGAIN !\n");
    }
    break;

    }



}
else{
     printf("Choose Again please Please!");
}

return 0;
}
