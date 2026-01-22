#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct card
{
    char face[10];//AEM:59641
    char suit[10];
}deck[52];
int main()
{
   char *faces[13]={"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
   char *suits[4]={"Hearts", "Diamonds", "Clubs", "Spades"};
   struct card Acard;
   struct card Aces[4];
   int u=0;
   int l=0;
   for (int s=0;s<4;s++){
    for(int i=0;i<13;i++){
        strcpy(deck[u].face, faces[i]);
        strcpy(deck[u].suit, suits[s]);
        if(strcmp(deck[u].face, "Ace")==0 && strcmp(deck[u].suit, "Spades")==0){
            strcpy(Acard.face, deck[u].face);
            strcpy(Acard.suit, deck[u].suit);
        }
        if(strcmp(deck[u].face, "Ace")==0){
            strcpy(Aces[l].face, deck[u].face);
            strcpy(Aces[l].suit, deck[u].suit);
            l++;
        }
        u++;
    }
   }
   struct card *cardPtr;
   cardPtr= &Acard;
   printf("Card pointed to cardPtr:%s of %s\n",cardPtr->face,cardPtr->suit);
   printf("The four Aces in the deck:\n");
   for(int v=0;v<4;v++){
    printf("%s of %s\n", Aces[v].face, Aces[v].suit);
   }
   return 0;
}
