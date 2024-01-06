#include<stdio.h>
#include<string.h>
int story();
void weaponss();
int ending();
struct w
{
    int no;
    char name[30];
    
};
void main()
{
    FILE *f1;
    struct w weapon[50];
    char ch,ch1,ch2,ch3,ch5,ch6,ch7,ch8,s,ch17;
    int ch9,ch10,ch11,ch12,ch13,ch14,ch15,ch16,s1,s2,lvl,f,ccch2,ccch3;
    printf("\t\t\t\tWElCOME TO DUNGEON RUN");
    printf("\n Once you enter there is no turning back\ndo you choose to continue(y/n)");
    scanf(" %c",&ch);
    if (ch=='y'||ch=='Y')
    {
        f1=fopen("begining.txt","r");
      while(feof(f1)==0)
      {
          s=getc(f1);
          printf("%c",s);
      }
      fclose(f1);
     printf("\nwill you enter the dungeon full of blood thirsty monsters and avenge your parents by killing the monster(y/n)");
     scanf(" %c",&ch1);
        if(ch1=='y'||ch1=='Y')
        {
            printf("\nyour bravery is praise worthy\n\t\t\tLEVEL-1\nMagnus started walking swiftly but carefully into the dungeon.\nIt was dark,eerily quiet and smelled mouldy inside.\nSuddenly he heard a metallic sound at his feet.\nHe looked down to find a long sword.\n it was heavy to carry but was well made and looked like it have strong affinity for fire");
            printf("\nBUT BE WARNED.\ncertain items found in the dungeon can be cursed\nwill you take the risk and pick up the sword anyways(y/n)");
            scanf(" %c",&ch2);
            if (ch2=='y'||ch2=='Y')
            {
                printf("Wise decision!!!moving on without a sword would be a unwise move\nNow you are the owner of SWORD OF FIRE QUEEN:AMATERASU\nName your sword:-");
                weapon[0].no=0;
                scanf("%s",weapon[0].name);
                printf("%d.%s",weapon[0].no,weapon[0].name);
            }
            else
             printf("You chose not to take the risk");
            printf("\nMagnus moved on with great caution when suddenly a grrrrrrr sound was hear from in front of him.\nHe could hear anything because of the darkness.\nAll he could see was the shiny ruby eyes of a blood thirsty monster.\nHe slowly lit the fire torch.\nNow magnus can see more clearly and then he realised the monster standing in front of him is a wolf type beast.\nIt had blue fur,blood shot eyes and as big as two humans combined.\nMagnus is terrifed but he realised the beast has a low affinity to fire as he saw it moving farther away from the fire torch.\nbut wolves comes in packs\n so proceed with caution\nwill you stay and fight the monsters(y/n):-");
            scanf(" %c",&ch3);
            if ((ch3=='y'||ch3=='Y')&&(ch2=='y'||ch2=='Y'))
               {
                   printf("magnus, you have chose to stand and fight.wolves are coming at magnus from left and right\nMagnus swing his sword but because of his inexperince and how heavy the sword is magnus sustained heavy injury but managed to kill them all because he had a sword with strong fire affinity which gave him a upper hand in the fight against beast with water affinity .\nBut now he can barely move\nhe saw a light at the end of the tunnel\nhe headed towards it but his legs give out and then his eyes.\nhe lost consciousness");
                   printf("\n~~~~~~~~A FEW HOURS LATER~~~~~~~~~\n");
                   printf("hey child...child... wake up:someone is trying to wake you up.you woke up to see a bunch of adventurers\nmagnus checked in a hurry to see if he still have his belongings\nluckily they all were there including the red knitted scarf that his mother made for him\nonce again he was remained of his purpose of entering the dungeon\nthe adventurers watched magnus silently\nmagnus finally noticed all this wounds were treated\nit seems the adventurers have treated your wounds\nmagnus thanked them for their help\n");
                   printf("they are going into the second layer and invites you to join them\nREMEMBER:NOTHING IS FREE IN THIS WORLD\n");
               }
        }
    }
}    