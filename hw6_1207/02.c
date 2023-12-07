#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct card
{
    const char *face;
    const char *suit;
};
typedef struct card C;

void fillDeck(C * const wDeck,const char * wFace[],const char *_wsuit[]);
void shuffle(C * const wDeck);
void deal(const C * const wDeck);

int main(void)
{
    C deck[52];

    const char *face[]={"Ace","Deuce","There","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
    const char *suit[]={"Hearts","Diamonds","Clubs","Spades"};
    srand(time(NULL));
    fillDeck(deck,face,suit);
    shuffle(deck);
    deal(deck);
    return 0;
}
void fillDeck(C * const wDeck,const char * wFace[],const char *_wsuit[])
{
    int i; 
    for(i=0;i<=51;i++)
    {
        
        wDeck[i].face=wFace[i%13];
        wDeck[i].suit=_wsuit[i/13];
    }
}

void shuffle(C * const wDeck)
{
    int i,j;
    C temp;
    for(i=0;i<=51;i++)
    {
        j=rand() % 52;
        temp=wDeck[i];
        wDeck[i]=wDeck[j];
        wDeck[j]=temp;
    }
}

void deal(const C * const wDeck)
{
    int i;
    for(i=0;i<=51;i++)
    {
        printf("%5s of %-8s%s",wDeck[i].face,wDeck[i].suit,(i+1) % 4 ? " " : "\n");

    }
}