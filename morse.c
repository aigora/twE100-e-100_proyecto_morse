#include<stdio.h>
#include<Windows.h>
int main()
{
	char morse[80], exit;
	FILE *p_archivo;
	int k;
printf ("Programa para traducir de lenguaje alfa num%crico a c%cdigo morse\n",130, 162);
	do{
for(k=0;k<80;k++) 
{
morse[k]='=';
}
    printf ("\nEscriba una frase (m\240ximo 80 caracteres)\n");
	fgets (morse,80,stdin);
	fflush(stdin);
	p_archivo = fopen ("Morse.txt", "a+");
	for(k=0;k<80;k++)
	{
if (morse[k]=='a'||morse[k]=='A')
{
	printf(". -\n");
	fprintf(p_archivo, ". -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='b'||morse[k]=='B')
{
	printf("- . . .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='c'||morse[k]=='C')
{
	printf("- . - .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='d'||morse[k]=='D')
{
	printf("- . .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='e'||morse[k]=='E')
{
	printf(".\n");
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='f'||morse[k]=='F')
{
	printf(". . - .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='g'||morse[k]=='G')
{
	printf("- - .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='h'||morse[k]=='H')
{
	printf(". . . .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='i'||morse[k]=='I')
{
	printf(". .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='j'||morse[k]=='J')
{
	printf(". - - -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='k'||morse[k]=='K')
{
	printf("- . -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='l'||morse[k]=='L')
{
	printf(". - . .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='m'||morse[k]=='M')
{
	printf("- -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='n'||morse[k]=='N')
{
	printf("- .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='\244'||morse[k]=='\245')
{
	printf("- - . - -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='o'||morse[k]=='O')
{
	printf("- - -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='p'||morse[k]=='P')
{
	printf(". - - .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='q'||morse[k]=='Q')
{
	printf("- - . -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='r'||morse[k]=='R')
{
	printf(". - .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='s'||morse[k]=='S')
{
	printf(". . .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='t'||morse[k]=='T')
{
	printf("-\n");
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='u'||morse[k]=='U')
{
	printf(". . -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='v'||morse[k]=='V')
{
	printf(". . . -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='w'||morse[k]=='W')
{
	printf(". - -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='x'||morse[k]=='X')
{
	printf("- . . -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='y'||morse[k]=='Y')
{
	printf("- . - -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='z'||morse[k]=='Z')
{
	printf("- - . .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='1')
{
	printf(". - - - -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Sleep(750);
	continue;
}
if (morse[k]=='2')
{
	printf(". . - - -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='3')
{
	printf(". . . - -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='4')
{
	printf(". . . . -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='5')
{
	printf(". . . . .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='6')
{
	printf("- . . . .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='7')
{
	printf("- - . . .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='8')
{
	printf("- - - . .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='9')
{
	printf("- - - - .\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='0')
{
	printf("- - - - -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]==' ')
{
	printf(" \n");
	Sleep(2250);
	Sleep(750);
	continue;
}
if (morse[k]=='.')
{
	printf(". - . - . -\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]==',')
{
	printf("- . - . - -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='?')
{
	printf(". . - - . .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}
if (morse[k]=='!')
{
	printf("- - . . - -\n");
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,750);
	Sleep(750);
	continue;
}
if (morse[k]=='"')
{
	printf(". - . . - .\n");
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,250);
	Sleep(250);
	Beep(400,750);
	Sleep(250);
	Beep(400,250);
	Sleep(750);
	continue;
}

	}
	fclose (p_archivo);
printf("Desea repetir?\n");
scanf("%c", &exit);
fflush(stdin);
}while(exit=='s'||exit=='S');
return 0;
}
