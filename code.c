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
                   printf("            LEVEL 2 !!!!!!!!!!!!!            ");
    printf("\nWELCOME TO THE ADVENTURES OF DUNGEON RUN.\nCONGRATULATIONS.\n\t\t\tLETS BEGIN !!!!!! ");
    printf("\nARE YOU READY FOR THE ADVENTURE! ONCE ENTERED THERE IS NO TURNING BACK!!! y/n ??????");
    scanf(" %c",&ch6);
    if(ch6=='y'||ch6=='Y')
    {
        printf("HI Mr.MAGNUS LORD.\nYOU JOINED THE ADVENTURERS AND MOVED ON.\nTHEY ARE A BUNCH OF KIND-HEARTED PEOPLE.\nTHERE ARE 4 OF THEM.\nYOU JOINED THEM AND THEY STARTED TO MAKE TINY CONVERSATIONS.\nBUT YOU STAYED QUIET.\nTHE SILENCE OF THE NIGHT IS KILLING YOU,\nMAKING YOU REMEMBER ALL THE MOMENTS EITH YOUR PARENTS.\nIT IS SILENTLY SUCKING YOUR SOUL OUT.\nYOUR MIND WAS BLANK BECAUSE OF THE THOUGHTS\n AND YOU WERE UNABLE TO LISTEN TO ANYTHING THAT SURROUNDS YOU.\nTHE DINNERS THAT YOU HAD,THE LAUGHTER THAT YOU SHARED,\nEACH AND EVERY MOMENT OF YOUR LIFE IS KILLING YOU FROM INSIDE.\nHEY!!!! SUDDENLY CALLED ONE OF THE ADVENTURERS.....\nYOU  CAME BACK TO THE PRESENT WORLD,\nYOU ARE AT THE EDGE OF BURSTING OUT INTO TEARS ,\nBUT ANGER FILLED INSIDE YOU.\nYOUR EMOTIONS WERE ALL OVER THE PLACE.\nYOU CONTROLLED ALL THE EMOTIONS AND FORCED A SMALL SMILE ON YOUR FACE\nNOW YOU STARTED TALKING WITH THEM .\nTALKING AND WALKING IN THE EERILY SILENT DUNGEON.\nYOU CAN'T HEAR NOTHING BUT YOUR CONVERSATIONS.\nSUDDENLY YOU HEARD A SOUND.\nYOU TURNED BACK AND YOU SAW NOTHING.\nALL THE PEOPLE WHO YOU WERE TALKING WITH VANISHED .....\nTHE ADVENTURERS ARE NO WHERE TO BE SEEM\nAMIDST OF THE HORRYIFYING DARKNESS AND SILENCE YOU ARE ALL ALONE..... ");
        printf("YOU ARE CONFUSED WITH ALL THE EMOTIONS.\nTERRIFIED ,DEPRESSED AND ANGRY.\nYOU LOST EVERY PEACE OF YOUR MIND.\nYOU STILL HAVE YOUR SWORD......\nBUT YOU ARE TIRED.YOU ARE THIRSTY AND HUNGRY.\nTHERE IS A CORRIDOR IN THE DUNGEON THAT PASS YOU TO A MAGICAL ROOM\nTHERE YOU CAN FIND A TREE IN THE MIDDLE OF THE LAKE .\nA MAGICIAN IS LIVING IN THE TREE. \nHE HAS A GINN AS HIS SERVENT AND HE COULD GIVE YOU ANYTHING YOU WANT. \nIF YOU WANT TO SURVIVE YOU HAVE TO REACH THERE.\nBUT REACHING THERE IS SO HARD. \nON YOUR PATH YOU WILL HAVE TO FACE MANY DANGERS ,\nMOREOVER YOU HAVE TO SURVIVE THE GREAT MONSTER OF MOORS.\nTHE MONSTER CAN KILL YOU WITH JUST LOOKING INTO YOUR EYES,\nIT IS AN ALL POWERFUL MONSTER THAT HAS THE POWER OF 10 TIGERS TOGETHER .\nWILL YOU STILL ACCEPT THE RISK AND MOVE FORWARD???");
        scanf(" %c",&ch7);
        if(ch7=='y'||ch7=='Y')
        {
            printf("\nYOU STILL CHOOSE TO CONTINUE.YOU ARE BRAVE .\nYOU SURVIVED THE MONSTER AND YOU REACHED THE LAKE AND YOU ARE NOW READY TO CONTINUE...\nYOU GOT A MIND MAP FROM THE GINN AND YOU STARTED WALKING ACCORDING TO IT..\nYOU ARE PLANNING TO KILL IT BY MIDNIGHT.\nON YOUR WAY YOU FIND A SECRET WEAPON ,\nA DRAGON SWORD WITH A GEM IN ITS CENTRE THAT CAN SPIT FIRE.....\nYOU CAN KILL ANY MONSTER WITH IT.\nBUT IN ORDER TO GET IT YOU HAVE TO CROSS THE HEART OF THE DRAGON \nWHERE THE GREAT WIZARD LIVES.\nHE IS VERY TRICKY AND CAN LEAD YOU TO DESTRUCTION....\nWILL YOU ACCEPT THE RISK AND GET THE SWORD???");
            scanf(" %c",&ch8);
            if(ch8=='y'||ch8=='Y')
            {
                story();
                
                lvl=3;
            }
            else
            {
                printf("\nIT WAS AN UNWISE DECISION..... ANYWAYS YOU HAVE THE OTHER SWORD..... BUT BE CAREFULL ..... ");
                story();
                lvl=3;
            }
                  if(lvl==3)
              {  printf("\t\t\t CONGRATULATIONS! WELCOME TO LEVEL 3!\n");
    printf("Choose a reward for clearing the level!\n");
    printf("1\t A golden ring with a bright blue stone; it never stops to shine\n2\tAn amulet that doesn't standout, but there's few words written. A spell?\n");
    printf("You choose? ");
    scanf("%d",&ch9);
    switch (ch9)
    {
        case (1):
        {
            printf("You have chosen the golden ring!");
            printf("\nYou wear the ring, the shine of the stone dims for a moment, before it comes back. Faling your expectations, there is nothing out of the ordinary");
            printf("\nWith the ring on, you continue with your journey. Hopefully, this priceless artifact prooves to be of use.");
            printf("\n--------------------------------------------------------------------------------------------------------------------------------------");
            printf("\nYour journey takes you to yet another dugeon.");
            s1=1;
            break;
        }
        case (2):
        {
            printf("You have chosen the amulet!");
            printf("\nYou wear the amulet, within a flash of a moment, the amulet latches itself onto your skin.");
            printf("\nUh oh, it's a cursed artifact. you have been cursed.");
            printf("\n\t\t\t*Achievement unlocked: This or that, one of them is bad*");
            printf("\n Hurry up! What do you do?");
            printf("\n1 Destroy the amulet?\n2 Let it be?");
            printf("\nEnter choice: ");
            scanf("%d",&ch10);
            switch(ch10)
            {
                case (1):
                {
                    printf("\nYou try to destroy the amulet.\n\t*****BANG*****\n\t\tThe amulet bursts\n\t\t\tYou have died.");
                    printf("\n\t\t\t\tGAME OVER");
                    break;
                }
                case (2):
                {
                    printf("\nYou let the amulet as it be.\nIt doesn't trouble you much\nAfter a while, it just settles in. Was this the right choice?");
                    printf("\n\t\t\t*Achievement Unlocked: Cursed trouble; You let it be. Perhaps the amulet is more of a friend than foe*");
                    printf("\n Now with the amulet in hand, you make your way to the dungeon.");
                    s1=2;
                    break;
                }
                default:
                printf("Invalid choice, please choose 1 or 2");
            }
            break;
        }
        default:
        printf("Invalid choice, please choose 1 or 2");
    }
    if(s1==1)
    {
        printf("\nEntering the dugeon you come to face with the {LORD OF DRAGONS: HANMA}!");
        printf("\nEntering fight........");
        printf("\nLord of dragons: Hanma;\nStats:\nHP:7000\tATK:2000\nDEF:2500\tWeapon: Nil\n");
        printf("DESC: The fallen king of the dragons holds nothing but resentment towards the human kind.\nThe dragon intends to show no mercy\n");
        printf("^^^^^Extra information: It is beleived that once the defence of the dragon is taken down, it becomes immobile and highly vulernable to attacks.\nHowever this opening remains for only 3 turns;");
        printf("\nThe defence system respawns if failed to defeat in first go;");
         printf("\n****START****");
         printf("\nThe dragon attacks!!! It slashes it's claws at you! Hurry! make the choice: \n1 Dodge\n2 Attack back\nEnter your choice:");
         scanf("%d",&ch11);
         switch(ch11)
         {
          case (1):
          {
              printf("You have sucessfully dodged the attack!!");
              printf("Your turn; you attack the dragon with your sword. It is effective, but not powerful enough. (*HANMA DEF: -250*)");
              printf("\nYour golden ring catches your eye, As the lord of dragons charge up for the next blow, you hear a small whisper\n");
              printf("....do...you... wish... for power?\nThe voice is alluring\n1 Accept\n2 Decline\n");
              printf("Enter your choice: ");
              scanf("%d",&ch12);
              if(ch12==1)
              {
                  printf("You accept the mysterious offer.....\n");
                  printf("The golden ring glows at an blinding bightness, the light envelops the dark dungeon...\nAs the light fades away, you find yourself with a new weapon\nOBTAINED: AMOS BOW\n");
                  printf("\t\t\t*Achievement unlocked: The bow that trancends from the sky*");
                  printf("\nAmos Bow\nStats\nBase atk:360\tSpecial stat: Critical damage\nExtra information: When aimed with prescision and accuracy, the opponent hit with the arrow launched by this bow experience a debuff in defence");
                  printf("\nWooho! You have obtained the perfect weapon to fight againt the dragon!");
                  printf("\nWith high presicion, you aim your arrow at the dragon. The arrow's tip shines;indicating that it has charged up!");
                  printf("\nYou shoot the arrow, the dragon wails at the impact and scream in agony....\n(*HANMA DEF:-2250*)");
                  printf("\n\tYou have successfully taken down the defence bar! Time to attack!");
                  printf("Taking your sword, you launch forward to end the terror of lord of dragons.\nMustering all your power that flows within, you swing your sword with all your might....\n");
                  printf("\n*Achievement unlocked: The tale of the dragon remains untold....*");
                  printf("\n\t\t\tCONGRATULATIONS! YOU HAVE CLAIMED YOUR VICTORY!");
                  printf("\nYou may proceed to the next level.");
                  printf("Do you wish to continue?\n1 Yes\n2 No");
                  printf("\nEnter your choice: ");
                  scanf("%d",&ch13);
                  if(ch13==1)
                  {
                      f=1;
                  }
                  else{
                      f=2;
                  }
              }
              else
              {
                  printf("You decline the offer.");
                  printf("\nAs the fight progresses, you become exhausted. You are unable to keep up with the attacks of the dragon.\nThe ring shines again, as if calling to you\nBut before you coul reconsider your options the dragon attacks with a final blow, summoning a breath of fire that wipes away everything in the way.\nIn your last moments, the only thoughts remain in you, is to be reunitied with your parents.");
                  printf("\nYou have died.");
                  printf("\n\t\t\t\tGAME OVER");
                  
              } break;
              
          }
          case (2):
          {
              printf("\nYou chose to attack back");
              printf("\nAs you take your stance to attack back, the dragon stomps onto the ground, \nthe heavy impact makes the ground shake\nYou lose your balance and the ground beneath you crumbles down\nYou fall down into the pool of hot lava\n");
              printf("You died.");
              printf("\n\t\t\tGAME OVER");
              break;
          }
         }
    }
    else if(s1==2)
    {
     printf("\nEntering the dugeon you come to face with the {LORD OF DRAGONS: HANMA}!");
        printf("\n\nEntering fight........");
        printf("\nLord of dragons: Hanma;\nStats:\nHP:7000\tATK:2000\nDEF:2500\tWeapon: Nil\n");
        printf("DESC: The fallen king of the dragons holds nothing but resentment towards the human kind.\nThe dragon intends to show no mercy\n");
        printf("^^^^^Extra information: It is beleived that once the defence of the dragon is taken down, it becomes immobile and highly vulernable to attacks.\nHowever this opening remains for only 3 turns;");
        printf("\nThe defence system respawns if failed to defeat in first go;");
         printf("\n****START****");
          printf("\nThe dragon attacks!!! It slashes it's claws at you! Hurry! make the choice: \n1 Dodge\n2 Attack back\nEnter your choice:");
         scanf("%d",&ch14);
         switch(ch14)
         {
             case (1):
             {
                 printf("\nYou manage to dodge in time!\n");
                  printf("Your turn; you attack the dragon with your sword. It is effective, but not powerful enough. (*HANMA DEF: -250*)\n");
                  printf("You remember about the amulet\n Could it be of use?\n");
                  printf("1 You take the help of the amulet\n2 You don't take the help of the amulet\n");
                  printf("Enter your choice: ");
                  scanf("%d",&ch15);
                  if(ch15==1)
                  {
                      printf("\nYou take the help of the amulet, reciting the spell embedded within");
                      printf("Little did you know, within the amulet resides the devil's soul.\nUpon recitation of the forbidden spell, the devil breaks free\nTime freezes as the devil come out; it feel surreal to see what's happening\tThe sheer power the devil holds is frightening");
                      printf("'If\tI\twant\tI\tcould\tend\tyou'\n'But\tfor\tonce\tI\t\nMake\tan\texception.'");
                      printf("\nThe devil offers you a A bow: cursed as it is, holds great power nonetheless\n");
                      printf("You accept the offer after much contemplation ");
                       printf("\n\t\t\t*Achievement unlocked: The bow from the depths of hell*");
                  printf("\nThe thundering Pulse Bow\nStats\nBase atk:380\tSpecial stat:Critical rate\nExtra information: When aimed with prescision and accuracy, the opponent hit with the arrow launched by this bow will have it's health reduced by half. This effect can occur only once throughout the fight\n");
                printf("With that the devil bids farewell, leaving you to fight the lord of dragons.");
                 printf("\nWith high presicion, you aim your arrow at the dragon. The arrow's tip shines;indicating that it has charged up!");
                  printf("\nYou shoot the arrow, the dragon wails at the impact and scream in agony....\n(*HANMA HP:-3500*)");
                  printf("\n\tYou have successfully taken down the Health bar! Time to attack!");
                  printf("Taking your sword, you launch forward to end the terror of lord of dragons.\nMustering all your power that flows within, you swing your sword with all your might....\n");
                  printf("\n\t\t\tCONGRATULATIONS! YOU HAVE CLAIMED YOUR VICTORY!");
                  printf("\nYou may proceed to the next level.");
                  printf("\nDo you wish to continue?\n1 Yes\n2 No");
                  printf("\nEnter your choice: ");
                  scanf("%d",&ch16);
                  if(ch16==1)
                  {
                      f=1;
                  }
                  else{
                      printf("Player chose to quit. Game Over.");
                  }
                
                      
                  }
                  else
                  {
                      printf("\nYou do not take the help of the amulet.");
                      printf("You refuse to take the help of the curse\nBut as you continue to fight the dragon, you feel exhaustion.\n You observe that, no matter what attack you use, it still ends up in being a loop\nThe same thing repeat over and over again, and you lose your control over your body.\n");
                      printf("The cursed amulet had worked it's charm and taken over your soul.\n Now you can only watch in a daze as the devil controls your body.");
                      printf("\n\t\t\t*Achievement Unlocked: The devil's charm*");
                  }
                  break;
         }
                  case (2):
                  {
            printf("\nYou chose to attack back:");
              printf("\nAs you take your stance to attack back, the dragon stomps onto the ground, \nthe heavy impact makes the ground shake\nYou lose your balance and the ground beneath you crumbles down\nYou fall down into the pool of hot lava\n");
              printf("You died.");
              printf("\n\t\t\tGAME OVER");
              break;
                  }
             }
         }
            }
        }}
        else
        {
            ending();
        }
    }
    else
    {
        ending();
    }
               }
        }
    }
} 
if(f==1)
         {
             
     printf ("WELCOME TO THE FOURTH LEVEL!!!!");
     printf("\nTo have crossed the third level,you have certainly proven your bravery!!!");
     printf ("\nDo you choose to continue to higher levels?(y/n) ");
     scanf (" %c",&ch17);
  
  if (ch17=='y' || ch17=='Y')
    {
     printf("You have chosen to continue!");
     printf("Good Luck on your adventure!");
    printf("Enter your weapon: \n1.Sword of Excalibur \n2.Amethyst Amulet \n3.Trident of Enma\n");
    scanf("%d",&ccch2);
    printf("Choose your choice carefully!\n Each weapon is made only for a specific use! Not all monsters can be defeated using any single weapon!!! ");
    printf("Let's start the adventure! Trudge on carefully!\n");
    switch(ccch2)
    {
        case(1):
        printf("You have chosen the Excalibur weapon. It is an enchanted sword with magical powers\n");
        printf("A transparent barrier forms infront of Magnus. Without any second thoughts,he crosses the barrier. On crossing the barrier,Magnus comes face to face with a giant three headed dog: Cerberus! \nOnly mythical stories have been told about this monster & seeing it infront of him ,sent shivers across Magnus's spine!!\n");
        printf("The giant dog senses the intruder & is also attracted towards the sword in his hand. The monster takes a leap towards Magnus but he dodges it and runs in the opposite direction.\n");
        printf("The Cerberus is immune to pain but it is weak to greatswords, shields, ice and light.\nThe Excalibur sword can be used to defeat the monster. The question is how? With no time to answer his own question, Magnus dodges several of the monsters attacks but also sustaions injuries!\n");
        printf("Suddenly Magnus gets the idea to kill the monster by driving the sword through it's heart! After much struggle ,he finally succeeds & the monster is defeated!\n");
        printf("Congratulations Magnus!You have sucessfully defeated the monster\n");
        printf("You may proceed to the next level!\n");
        s2=1;
        break;
        
        case(2):
        printf("You have chosen the Amethyst amulet! This amulet has the special powers to thwart off any minor dangers on your way!\n");
        printf("A transparent shiny barrier forms infront of Magnus & Magnus carries on forward without any fears trusting the amulet he's wearing.\n");
        printf("But what he sees infont of him made Magnus lose control of his guard. A beautiful maiden with shining blonde hair and skin as shining as that of a pearl with cheeks that resembled that of a red rose and eyes as pure as that of a crystal clear blue ocean. Seeing her made Magnus weak on his knees & he moved towards the maiden.\nThe maiden extended her hands towards him and he falls for her embrace without second thoughts.\nMagnus feels light and warm & his stresses from previous levels ease out of his body.\n");
        printf("Suddenly the maiden snatches the amulet from Magnus's neck & destroys it with her fist. The maiden transforms into it's true form.It was Aris: The goddess of contempt.\nThis level was a test to see if Magnus would disregard the dangers around him when he loses his focus for a bit. And Magnus clearly failed in it!\n");
        printf("With his amulet destroyed, Magnus now has no weapons to defend himself! Aries drives her sword throgh Magnus & dies instanly\n");
        printf("`````GAME OVER`````");
        break;
        
        case(3):
        printf("You have chosen the Trident of Enma. This tridenet has the ability to kill any of the land monsters & is a very powerful weapon!.\n");
        printf("Another transparent barriers forms & Magnus heads forward with caution. With the trident on his hand ,Magnus feels unusually more powerful!\n");
        printf("The monster here is a centaur. With a body half of that of man and the other half as that of a horse, they're creatures that show no mercy when you trespass their area. Magnus, uninvited becomes their prime source of threat!\n");
        printf("The centaur starts attacking Magnus with it's strong hooves and sharp bows! And because Magnus possess the trident, he's considered more of an enemy than that of an intruder & Magnus is not given a chance to explain himself!\n");
        printf("After sustaining multiple injuries, Magnus finally kills it after driving thr trident through it's head. This battle felt unnecessary but Magnus had no other choice but to kill it to enter the enxt levels\n");
        printf("Congratulations! With this task completed, you're succesfully entitled to enter the next level!\n");
        printf("Do you wish to continue?\n1 Yes\n2 No");
                  printf("\nEnter your choice: ");
                  scanf("%d",&ccch3);
                  if(ccch3==1)
                  {
                      s2=1;
                  }
        break;
        
    
    default:
    printf("wrong choice");
    break;

    }
      
    }
        else
    {
      printf("You have chosen not to continue you adventure.\nThe haunted memories begin to take a toll on your mental health.You start feeling hopeless & depressed as you're unable to avenge your family!! Your mental health is on the brink of tripping off!You decide to end your life after accepting your failure!!!\n");  
      printf("\t\t*************GAME OVER****************\t\t");
    }

int story()
{ char cch3;
printf("IT WAS A WISE DECISION. NOW YOU ARE POWERFUL ENOUGH TO KILL THE MONSTER . \nYOU WILL REACH ITS DEN BY MIDNIGHT.\nYOU CONTINUE TO WALK AND YOU REACHED THE DEN. YOU CAN SEE THE BEAST. \nBUT YOU NOTICED SOMETHING ELSE. YOU NOTICED ONE OF THE ADVENTURERS AND ONE OF THEM TRANSFORMING INTO THE BEAST .\nYOU STAYED SILENT AND WATCHED EVERYTHING,SUDDENLY YOU NOTICED SOMETHING ELSE.... \n                        ITS YOUR FAMILY.....                  \nYOU GET SHOCKED. YOU WERE MENTALLY UNPREPARED TO SEE YOUR PARENTS LIKE THAT.\nYOU THOUGHT THAT THE BEASTS WERE SOME MAGICAL BEINGS AND WAS TRYING TO CAPTURE YOUR FAMILY.... \nIN ALL EXICETMENT AND HAPPINESS TO SEE YOUR FAMILY BACK YOU RAN INTO THEM .\nONE OF THE BEAST ATTACKED YOU.BUT WITH ALL YOUR STRENGTH YOU FOUGHT BACK.\nYOU TRIED TO USE THE DRAGON SWORD. YOU TOOK IT AND ACTIVATED THE GEM.\nBUT.. SUDDENLY YOUR MOTHER TRANSFORMED INTO A BEAST AND STOPPED YOU... SHE STOPPED THE OTHER BEAST ALSO.\nEVERYONE,HUMANS AND THE BEASTS STAYED SILENT .YOU WERE BEGINING TO FALL. THE FIGHT BROUGHT OUT ALL OF THE STRENGTH IN YOU.YOU FELL DOWN.\nBY THE MORNING THE PACK HAS LEFT THE LAYER 2 .YOUR WOUNDS WERE ALL TREATED. YOU WERE HEALTHY AND FRESH AS A NEW-BORN.\nNOW, AT THE MOMENT YOU HAVE THE PEACE THAT BY SEEING YOUR FAMILY AND YOU HAVE THE HOPE THAT YOU CAN SEE THEM AGAIN. ");
printf("\nBUT YOU STILL HAVE MANY QUESTIONS?? YOU WANTS TO KNOW THE UNREAD CHAPTER OF YOUR AND YOURS FAMILY... YOU WANTS TO KNOW EVERYTHING..\nAND YOU WANT THE OLD FAMILY BACK..THE INNOCENT,HAPPY,SMALL FAMILY BACK... \nARE YOU READY TO CONTINUE TO LAYER 3??");
scanf(" %c",&cch3);

return 0;
}
int ending()
{
    printf("\nMAGNUS FAILED THE TASK AND RAN AWAY IN FEAR");
    return 0;
}

   
    char c;
    printf("\t!!!!!!!!!! CONGRATULATION!!!!!!!!!!\t\n");
    printf("\t***YOU HAVE REACHED LEVEL 5*\t\n");
    printf("\t##YOU HAVE UNLOCKED ELDRITCH WAND##\t\n ");        // Eldrithch wand- A magical wand with mysterious powers
    printf("Magnus Lord think wishely before entering the choice\t\n");
    printf("\n Once you enter there is no turning back\n");
    printf("DO YOU WANT TO CONTINUE Y/N OR y/n");
    scanf("%s",&c);
    if (c=='Y'||c=='y')
    {
        printf("!!!GREAT CHOICE MAGNUS LORD!!!\n *YOU WILL SUCCEDD IN YOUR REVENGE* \n");
        weapon();
        
    }
    else{
        printf("!!!Magnus you chose not to continue....now your people will be trapped under the monsters forever and starve to death...");
        printf("GAME OVER!!!!!");
        
    }

void weaponss()
{
char v,n[20],unlock;
    int d,a,b,t;
    printf("Choice the weapon \n 1. Arondight \n 2. Deathwalker's firearm\n 3. Moonstone Serpent Scepter\n 4. Flying dragons\n 5. Final finish\n");
    printf("choose an option");
    scanf("%d",&d);
    printf("You should carefully while entering their area\n It will be very DANGEROUS\n");
                printf("\t!!!!!**LET'S START THE GAME!!!!!**\t\n");
    switch(d)
    {
    case(1):printf("Arondight\n*****Activated****\n");
                printf("The monster is an ice giant and his only weakness is heat\n");
                printf("Magnus arrived and said!!, Yes, my years of waiting are finally over,  today I will finally complete my duty towards my people\n");
                printf("Magnus sword was not made up of fire.");
                printf("Still he carries his sword , to kill that monster");
                printf("The battle starts, Magnus dodges multiple attacks by the monster, but the monster finally slashes the Magnus with his powers, an injured Magnus falls down on the ground, then the monster takes the Arondigh sword from Magnus,rises it above and drives it through the Magnus's chest....");
                printf("\nMAGNUS dies...\n");
                printf("PROUD OF YOU MAGNUS !!!!\nYOU ARE A WARRIOR!!!!!\n");
                printf("GAME OVER!!!!!!");
                
                break;
    case(2):printf("Deathwalker's firearm\n*****Activated***\n");
                printf("The monster is a rock made of Calcium Carbonate. ");
                printf("When Magnus arrives with his powerful Deathwalker's firearm.");
                printf("\nHe challenges the monster to battle and says, !!!!For the good of the world, I am going to finish you off");
                printf("The fight begins, the monster immediately recognizes the effect the weapon could have on him, he immediately grabs the weapon from the Magnus and throws it away,then he says,You cannot destroy me!!!!!!");
                printf("Magnus dodges a huge smash by the monster,he repeatedly tries to dodge the monster's hits and in the he end fails, the monster hits him and he flies away into a rock.\n");
                printf("The monster arrives before him and smashes him to death and laughs ~~~Haaaaahahaaaaa...\n");
                printf("He sacrificed his life to save his people");
                printf("\nPROUD OF YOU MAGNUS LORD !!!!\nYOU ARE A WARRIOR!!!!!\n");
                printf("GAME OVER!!!!!!");
                break;
    case(3):printf("Moonstone Serpent Scepter\n*****Activated***\n");
                printf("Monster's only weakness is serpent venom...");
                printf("The Monster is confronted by Magnus who is holding the scepter. Magnus says, Yes, my years of waiting are finally over, today I will finally complete my duty towards my people.");
                printf("When Magnus challenges the monster to the battle, the monster tries to take the scepter away from him, the monster understands that the scepter is the only way the Magnus could kill him, so the monster decides to break it."); 
                printf("\nThe fight starts,Magnus dodges the monster's attack multiple times but in the end gets smashed by the monster.");
                printf("Then he realizes that the only the way to kill the monster is by unlocking his Eldrithch wand which content different powerful spells,he throws the scepter at the monster...the monster breaks it....and now as the scepter was broken,the monster thought that Magnus will be killed by him but !!!what the monster did not know that Magnus had used this special powers. ");  
                printf("After using the spells, the monster was under his control he used the real serpent venom and killed the Monster.");     
                printf("\nYOU SAVED THE WORLD!!!!!!");
                printf("\nPROUD OF YOU MAGNUS LORD !!!");
                printf("\nYOU ARE FREE NOW!!!!!");
                break;
    case 4:printf("**Welcome to round 4**\nTask:kill all flying dragons\nTo kill all flying dragons Magnus must release *blue crystal* WRITE:'unlock' to release crystal");
        scanf("%s",n);
        if (strcmp(n,"unlock")==0)
        {
        printf("Blue crystal unlocked\n");
        printf("Magnus is now in his way to finish all the flying dragons.There are 2 type of flying dragons:big tail and smoke hook\nenter the no.of big tail and smoke hook present so Magnus can release the required no.of blue crystal");
        scanf("%d%d",&a,&b);
        t=a+b;
        printf("%d Blue crystals released",t);
        printf("\n Magnus has successfully killed all flying dragons\nRound 4 completd\n");
        }else
        {
            printf("Mission failed");
        }
        break;
    case 5:printf("**Welcome to round 5**\nMagnus is at the end of his mission\nIn this level you have to kill the vowel monster.write any VOWEL and finish the fight");
    scanf("%s",&v);
    if (v=='a'||v=='A'||v=='e'||v=='E'||v=='i'||v=='I'||v=='o'||v=='O'||v=='u'||v=='U')
    {
        printf("Vowel is written\n!!!Monster is destroyed!!!\n");
    }else
    {
        printf("You failed in this mission\n");
    }
        default:
}
FILE *f2;
char str[20],ch;
f2=fopen("Magnus.txt","r");
while(feof(f2)==0){
    ch=fgetc(f2);
    printf("%c",ch);
}
fclose(f2);
}
        
