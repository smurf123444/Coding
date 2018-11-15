#include "gun.h"
#include <stdio.h>


void gunInfo(char i, char *Name, char bullets, char heat)
{
	struct gun gun1;
	gun1.id = i;
	gun1.gunName = Name;
	gun1.bullets = bullets;
	gun1.heat = heat;
}

void writeFile()
{
	struct gun gun1;
	FILE *fp;
	fp = fopen("C:/Users/Chris/Desktop/gunConfig.txt", "w+");
  
	fputc(gun1.id, fp);
	fputs(gun1.gunName, fp);
	fputc(gun1.bullets, fp);
	fputc(gun1.heat, fp);
	fclose(fp);
}