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
#include <stdio.h>
#include<string.h>
void weapon();
void main()
{   
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
}
void weapon()
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
