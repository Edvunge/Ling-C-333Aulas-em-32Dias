#include <stdio.h>
#include <stdlib.h>

/*
9. Fazer um programa para solicitar ao usuário um número entre 0 e 99 e mostrar este número
por extenso. Se o usuário introduzir um número que não está neste intervalo, mostre:
"número inválido".
*/

int main(void){
    int num;


    printf("\nDigite um numero");
    scanf("%d",&num);       
    
    char vinte[15] = "vinte ";

    if (num == 1)
        printf("Um");
    else if (num == 2)
        printf("Dois");
    else if (num == 3)
        printf("Três");
    else if (num == 4)
        printf("Quatro");
    else if (num == 5)
        printf("Cinco");
    else if (num == 6)
        printf("Seis");
    else if (num == 7)
        printf("Sete");
    else if (num == 8)
        printf("Oito");
    else if (num == 9)
        printf("Nove");
    else if (num == 10)
        printf("Dez	");
    else if (num == 11)
        printf("Onze");
    else if (num == 12)
        printf("Doze");
    else if (num == 13)
        printf("Treze");
    else if (num == 14)
        printf("Quatorze");
    else if (num == 15)
        printf("Quinze");
    else if (num == 16)
        printf("Dezesseis");
    else if (num == 17)
        printf("Dezessete");
    else if (num == 18)
        printf("Dezoito	");
    else if (num == 19)    
        printf("Dezenove");
	else if (num == 20)    
        printf("%s",vinte);
    else if (num == 21) 
    /*
        if (num > 9  && num <= 99 )
            dois digitos
    */   
	    printf("%s e um",vinte);
    else if (num == 22)
	    printf("22	Vinte e dois");
    else if (num == 23)
	    printf("23	Vinte e três");
    else if (num == 24)
        printf("24	Vinte e quatro");
    else if (num == 25)
	    printf("25	Vinte e cinco");
    else if (num == 26)
	    printf("26	Vinte e seis");
	else if (num == 27)
        printf("27	Vinte e sete");
    else if (num == 28)
	    printf("28	Vinte e oito");
    else if (num == 29)
        printf("29	Vinte e nove");
	else if (num == 30)
        printf("30	Trinta");
    else if (num == 31)
    	printf("31	Trinta e um");
    else if (num == 32)
	    printf("32	Trinta e dois");
	else if (num == 33)
        printf("33	Trinta e três");
	else if (num == 34)
        printf("34	Trinta e quatro");
    else if (num == 35)
        printf("35	Trinta e cinco");
	else if (num == 36)
        printf("36	Trinta e seis");
	else if (num == 37)
        printf("37	Trinta e sete");
    else if (num == 38)
        printf("38	Trinta e oito");
    else if (num == 39)
        printf("39	Trinta e nove");
    else if (num == 40)
        printf("40	Quarenta");
    else if (num == 41)
        printf("41	Quarenta e um");
    else if (num == 42)
        printf("42	Quarenta e dois");
    else if (num == 43)
        printf("43	Quarenta e três");
    else if (num == 44)
        printf("44	Quarenta e quatro");
    else if (num == 45)
        printf("45	Quarenta e cinco");
    else if (num == 46)
        printf("46	Quarenta e seis");
    else if (num == 47)
        printf("47	Quarenta e sete");
    else if (num == 48)
        printf("48	Quarenta e oito");
    else if (num == 49)
        printf("49	Quarenta e nove");
    else if (num == 50)
        printf("50	Cinquenta");
    else if (num == 51)
        printf("51	Cinquenta e um");
    else if (num == 52)
        printf("52	Cinquenta e dois");
    else if (num == 53)
        printf("53	Cinquenta e três");
    else if (num == 54)
        printf("54	Cinquenta e quatro");
    else if (num == 55)
        printf("55	Cinquenta e cinco");
    else if (num == 56)
        printf("56	Cinquenta e seis");
    else if (num == 57)
        printf("57	Cinquenta e sete");
    else if (num == 58)
        printf("58	Cinquenta e oito");
    else if (num == 59)
        printf("59	Cinquenta e nove");
    else if (num == 60)
        printf("60	Sessenta");
    else if (num == 61)
        printf("61	Sessenta e um");
    else if (num == 62)
        printf("62	Sessenta e dois");
    else if (num == 63)
        printf("63	Sessenta e três");
    else if (num == 64)
        printf("64	Sessenta e quatro");
    else if (num == 65)
        printf("65	Sessenta e cinco");
    else if (num == 66)
        printf("66	Sessenta e seis");
    else if (num == 67)
        printf("67	Sessenta e sete");
    else if (num == 68)
        printf("68	Sessenta e oito");
    else if (num == 69)
        printf("69	Sessenta e nove");
    else if (num == 70)
        printf("70	Setenta");
    else if (num == 71)
        printf("71	Setenta e um");
    else if (num == 72)
        printf("72	Setenta e dois");
    else if (num == 73)
        printf("73	Setenta e três");
    else if (num == 74)
        printf("74	Setenta e quatro");
    else if (num == 75)
        printf("75	Setenta e cinco");
    else if (num == 76)
        printf("76	Setenta e seis");
    else if (num == 77)
        printf("77	Setenta e sete");
    else if (num == 78)
        printf("78	Setenta e oito");
    else if (num == 79)
        printf("79	Setenta e nove");
    else if (num == 80)
        printf("80	Oitenta");
    else if (num == 81)
        printf("81	Oitenta e um");
    else if (num == 82)
        printf("82	Oitenta e dois");
    else if (num == 83)
        printf("83	Oitenta e três");
    else if (num == 84)
        printf("84	Oitenta e quatro");
    else if (num == 85)
        printf("85	Oitenta e cinco");
    else if (num == 86)
        printf("86	Oitenta e seis");
    else if (num == 87)
        printf("87	Oitenta e sete");
    else if (num == 88)
        printf("88	Oitenta e oito");
    else if (num == 89)
        printf("89	Oitenta e nove");
    else if (num == 90)
        printf("90	Noventa	");
    else if (num == 91)
        printf("91	Noventa e um");
    else if (num == 92)
        printf("92	Noventa e dois");
    else if (num == 93)
        printf("93	Noventa e três");
    else if (num == 94)
        printf("94	Noventa e quatro");
    else if (num == 95)
        printf("95	Noventa e cinco	");
    else if (num == 96)
        printf("96	Noventa e seis");
    else if (num == 97)
        printf("97	Noventa e sete");
    else if (num == 98)
        printf("98	Noventa e oito");
    else if (num == 99)   
        printf("99	Noventa e nove");
    else
        printf("numero invalido");
    return (0);
}


/*
#include <stdio.h>
#include <stdlib.h>



int main(void){
    int num;


    printf("\nDigite um numero");
    scanf("%d",&num);       
    
    if (num == 1)
        printf("1	Um");
    else if (num == 2)
        printf("2	Dois");
    else if (num == 3)
        printf("3	Três");
    else if (num == 4)
        printf("4	Quatro");
    else if (num == 5)
        printf("5	Cinco");
    else if (num == 6)
        printf("6	Seis");
    else if (num == 7)
        printf("7	Sete");
    else if (num == 8)
        printf("8	Oito");
    else if (num == 9)
        printf("9	Nove");
    else if (num == 10)
        printf("10	Dez	");
    else if (num == 11)
        printf("11	Onze");
    else if (num == 12)
        printf("12	Doze");
    else if (num == 13)
        printf("13	Treze");
    else if (num == 14)
        printf("14	Quatorze");
    else if (num == 15)
        printf("15	Quinze");
    else if (num == 16)
        printf("16	Dezesseis");
    else if (num == 17)
        printf("17	Dezessete");
    else if (num == 18)
        printf("18	Dezoito	");
    else if (num == 19)    
        printf("19	Dezenove");
	else if (num == 20)    
        printf("20	Vinte");
    else if (num == 21)    
	    printf("21	Vinte e um");
    else if (num == 22)
	    printf("22	Vinte e dois");
    else if (num == 23)
	    printf("23	Vinte e três");
    else if (num == 24)
        printf("24	Vinte e quatro");
    else if (num == 25)
	    printf("25	Vinte e cinco");
    else if (num == 26)
	    printf("26	Vinte e seis");
	else if (num == 27)
        printf("27	Vinte e sete");
    else if (num == 28)
	    printf("28	Vinte e oito");
    else if (num == 29)
        printf("29	Vinte e nove");
	else if (num == 30)
        printf("30	Trinta");
    else if (num == 31)
    	printf("31	Trinta e um");
    else if (num == 32)
	    printf("32	Trinta e dois");
	else if (num == 33)
        printf("33	Trinta e três");
	else if (num == 34)
        printf("34	Trinta e quatro");
    else if (num == 35)
        printf("35	Trinta e cinco");
	else if (num == 36)
        printf("36	Trinta e seis");
	else if (num == 37)
        printf("37	Trinta e sete");
    else if (num == 38)
        printf("38	Trinta e oito");
    else if (num == 39)
        printf("39	Trinta e nove");
    else if (num == 40)
        printf("40	Quarenta");
    else if (num == 41)
        printf("41	Quarenta e um");
    else if (num == 42)
        printf("42	Quarenta e dois");
    else if (num == 43)
        printf("43	Quarenta e três");
    else if (num == 44)
        printf("44	Quarenta e quatro");
    else if (num == 45)
        printf("45	Quarenta e cinco");
    else if (num == 46)
        printf("46	Quarenta e seis");
    else if (num == 47)
        printf("47	Quarenta e sete");
    else if (num == 48)
        printf("48	Quarenta e oito");
    else if (num == 49)
        printf("49	Quarenta e nove");
    else if (num == 50)
        printf("50	Cinquenta");
    else if (num == 51)
        printf("51	Cinquenta e um");
    else if (num == 52)
        printf("52	Cinquenta e dois");
    else if (num == 53)
        printf("53	Cinquenta e três");
    else if (num == 54)
        printf("54	Cinquenta e quatro");
    else if (num == 55)
        printf("55	Cinquenta e cinco");
    else if (num == 56)
        printf("56	Cinquenta e seis");
    else if (num == 57)
        printf("57	Cinquenta e sete");
    else if (num == 58)
        printf("58	Cinquenta e oito");
    else if (num == 59)
        printf("59	Cinquenta e nove");
    else if (num == 60)
        printf("60	Sessenta");
    else if (num == 61)
        printf("61	Sessenta e um");
    else if (num == 62)
        printf("62	Sessenta e dois");
    else if (num == 63)
        printf("63	Sessenta e três");
    else if (num == 64)
        printf("64	Sessenta e quatro");
    else if (num == 65)
        printf("65	Sessenta e cinco");
    else if (num == 66)
        printf("66	Sessenta e seis");
    else if (num == 67)
        printf("67	Sessenta e sete");
    else if (num == 68)
        printf("68	Sessenta e oito");
    else if (num == 69)
        printf("69	Sessenta e nove");
    else if (num == 70)
        printf("70	Setenta");
    else if (num == 71)
        printf("71	Setenta e um");
    else if (num == 72)
        printf("72	Setenta e dois");
    else if (num == 73)
        printf("73	Setenta e três");
    else if (num == 74)
        printf("74	Setenta e quatro");
    else if (num == 75)
        printf("75	Setenta e cinco");
    else if (num == 76)
        printf("76	Setenta e seis");
    else if (num == 77)
        printf("77	Setenta e sete");
    else if (num == 78)
        printf("78	Setenta e oito");
    else if (num == 79)
        printf("79	Setenta e nove");
    else if (num == 80)
        printf("80	Oitenta");
    else if (num == 81)
        printf("81	Oitenta e um");
    else if (num == 82)
        printf("82	Oitenta e dois");
    else if (num == 83)
        printf("83	Oitenta e três");
    else if (num == 84)
        printf("84	Oitenta e quatro");
    else if (num == 85)
        printf("85	Oitenta e cinco");
    else if (num == 86)
        printf("86	Oitenta e seis");
    else if (num == 87)
        printf("87	Oitenta e sete");
    else if (num == 88)
        printf("88	Oitenta e oito");
    else if (num == 89)
        printf("89	Oitenta e nove");
    else if (num == 90)
        printf("90	Noventa	");
    else if (num == 91)
        printf("91	Noventa e um");
    else if (num == 92)
        printf("92	Noventa e dois");
    else if (num == 93)
        printf("93	Noventa e três");
    else if (num == 94)
        printf("94	Noventa e quatro");
    else if (num == 95)
        printf("95	Noventa e cinco	");
    else if (num == 96)
        printf("96	Noventa e seis");
    else if (num == 97)
        printf("97	Noventa e sete");
    else if (num == 98)
        printf("98	Noventa e oito");
    else if (num == 99)   
        printf("99	Noventa e nove");
    else
        printf("numero invalido");
    return (0);
}
*/