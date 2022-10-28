#include<stdio.h>
void main()
{
    int n;
printf("\n*************** Welcome to tourist guide **************** \n");
printf("\n  MAHARASHTRA'S ATTRACTION \n ");
printf(" \n 1.AHMEDNAGR\n 2.AKOLA\n 3.AMRAVATI\n 4.AURANGABAD\n 5.BEED\n 6.BHANDRA\n 7.BULDHANA\n 8.CHANDRAPUR\n 9.DHULE\n 10.GADCHIROLI\n 11.GONDIA\n");
printf(" 12.HINGOLI\n 13.JALGAON\n 14.JALNA\n 15.KOLHAPUR\n 16.LATUR\n 17.MUMBAI CITY\n 18.MUMBAI SUBURBAN\n 19.NAGPUR\n 20.NANDED\n 21.NANDURBAR\n 22.NASHIK\n");
printf(" 23.OSMANABAD\n 24.PALGHAR\n 25.PARBHANI\n 26.PUNE\n 27.RAIGAD\n 28.RATNAGIRI\n 29.SANGLI\n 30.SATARA\n 31.SINDHUDURG\n 32.SOLAPUR\n 33.THANE\n 34.WARDHA\n");
printf(" 35.WASHIM\n 36.YAVATMAL\n") ;
printf("let's go for the trip \n choose the city number only from the given districts\n");
scanf("%d",&n);

switch(n)
{
    case 1:
    printf("AHMEDNAGR");
    break;
    
    
    
    
    
    
    
    
    
    
    case 22 :
    printf(" \n NASHIK\n");
    printf("\nplaces to visit :\n\n");
    printf("1.saptashrungi hill station\t 2.pandav leni\t 3.kalaram temple\t 4.kalsubai shikhar\t 5.coin museum\t 6.sula vineyards\t 7.someshwar temple\t 8.ganga ghat \n");
    printf("\nfamous food :\n\n");
    printf("1.grapes\t 2.dahiwadas\t 3.budha's jalebi\t 4.chiwada\t 5.misal\n");
    break;
    case 23 :
    printf(" \n OSMANABAD\n");
    printf("places to visit :\n\n");
    printf("1.naldurg fort\t 2.dharashiv caves\t 3.tuljapur\t 4.puranda fort\t 5.manjara dam\t 6.vishnu tirth\n");
    printf("\nfamous food :\n\n");
    printf("1.gulab jamun\t 2.goat mutton\n");
    break;
    case 24 :
    printf(" \n PALGHARghar\n");
    printf("\nplaces to visit :\n\n");
    printf("1.jivdani temple\t 2.tungareshwar temple\t 3.pratishirdi saibaba temple\t 4.bassein fort\t 5.beach\n");
    printf("\nfamous food :\n\n");
    printf("1.chikoo\t 2.chicken\t 3.biryani\t 4.bhaji\n");
    break;
    case 25 :
    printf(" \n PARBHANI\n");
    printf("\nplaces to visit :\n\n");
    printf("1.pardeshwar temple\t 2.saibaba janmsthan\t 3.mudgaleshwarr temple\t 4.yeldari dam\n");
    printf("\nfamous food :\n\n");
    printf("1.pani puri\t 2.bhaji\t 3.poha\t 4.biryani\n");
    break;
    case 26:
    printf( "\n PUNE\n");
    printf("\nplaces to visit :\n\n");
    printf("1.shaniwar wada\t 2.iskcon temple\t 3.dagdusheth halwai ganpati temple\t 4.swaminarayan temple\t 5.sinhgad fort\t 6.aga khan palace\n");
    printf("\nfamous food :\n\n");
    printf("1.pav bhaji\t 2.vada pav\t 3.misal pav\t 4.momos\n");
    break;
    case 27:
    printf(" \n RAIGAD\n");
    printf("\nplaces to visit :\n\n");
    printf("1.murud janjira\t 2.raigad fort\t 3.diveager beach\t 4.raj bhavan\t 5.varadvinayak temple\t 6.madhe ghat waterfalls\t 7.kondhava caves\n");
    printf("\nfamous food :\n\n");
    printf("1.modak\t 2.seafood thalis\t 3.falooda\t 4.thalipeeth\n");
    break;
    case 28:
    printf(" \n RATNAGIRI\n");
    printf("\nplaces to visit :\n\n");
    printf("1.jaigad lighthouse\t 2.ganpatipule beach\t 3.thiba palace\t 4.parshuramm temple\t 5.devgad temple\t 6.pandre samudra\n");
    printf("\nfamous food :\n\n");
    printf("1.mangoes\t 2.bombil\t 3.kokum sharbat\t 4.fish dishes\n");
    break;
    
    default :
    printf("####Inappropriate choice####");
    
}
}
