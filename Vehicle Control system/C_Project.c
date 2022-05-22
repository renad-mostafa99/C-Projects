/*
 ============================================================================
 Name        : C_Project.c
 Author      : c programming
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define IN_SIZE 100
#define CONDITION 1 //to disable engine temperature controller put it 0

char tra_color;//traffic light color
float room_temp;
float engin_temp;
int vic_speed;//vehicle speed
char AC[5];
char Eng_Temp_Cont [5];
char state_in[IN_SIZE];

void SET_Menu ()
{

	printf("Sensors set menu:-\n");
	fflush(stdout);
	printf("Want to Turn off the engine? answer with (ON/OFF):\n");
	fflush(stdout);
	scanf("%s",state_in );
	printf("Set the traffic light color: \n");
	fflush(stdout);
	scanf(" %c",&tra_color );
	printf("Set the room temperature:\n");
	fflush(stdout);
	scanf("%f",&room_temp );
#if(CONDITION)
	printf("Set the engine temperature:\n");
	fflush(stdout);
	scanf("%f",&engin_temp );
#endif
}

void Display_OUT()
{
	printf("Engine state: %s\n",state_in);
	fflush(stdout);
	printf("AC:%s\n",AC);
	fflush(stdout);
	printf("Vehicle Speed: %d km/hr\n",vic_speed);
	fflush(stdout);
	printf("Room Temperature: %f\n",room_temp);
	fflush(stdout);
#if(CONDITION)
	printf("Engine Temperature Controller State: %s\n",Eng_Temp_Cont);
	fflush(stdout);
	printf("Engine Temperature: %f\n",engin_temp);
	fflush(stdout);
#endif
}

int main(void) {

	while (1)
	{
		    printf("Are You Want 1.Turn on the vehicle engine. enter 'ON'\n");
			printf("Are You Want 2.Turn off the vehicle engine. enter 'OFF'\n");
			printf("Are You Want 3.Quit the system. enter 'QUITE'\n");
			fflush(stdout);
			printf("please choose which state:\n");
			fflush(stdout);
			scanf( "%s", state_in );

		    if(strcmp(state_in,"OFF")==0)
			{
				printf("Engine state is :%s\n",state_in);
				fflush(stdout);
				continue;

			}
			else if (strcmp(state_in,"QUITE")==0)
			{
				printf("Engine state is :%s\n",state_in);
				return 0;
			}
			else if (strcmp(state_in,"ON" )==0)
			{
				do{
				printf("\nNow, Engine state is :%s\n",state_in);
				SET_Menu ();
				if(strcmp(state_in,"OFF")==0)
				{
				printf("Now, Engine state is :%s\n",state_in);
				fflush(stdout);
				continue;
				}
				else
				{
					///////////////////////traffic light data
					switch (tra_color){
					case 'G':
						vic_speed =100;
					break;
					case 'O':
						vic_speed=30;
					break;
					case 'R':
						vic_speed=0;
					break;
					default:
						printf("Wrong answer!");
						fflush(stdout);
						continue;
					}
					//////////////////////room temperature data
					if ((room_temp <10)||(room_temp >30))
					{
						strcpy(AC,"ON");
						room_temp=20;
					}
					else
					{
						strcpy(AC,"OFF");
					}
					//////////////////////engine temperature data
			   #if(CONDITION)
					if((engin_temp<100)||(engin_temp>150))
					{
						strcpy(Eng_Temp_Cont,"ON");
						engin_temp =125;

					}
					else
					{
						strcpy(Eng_Temp_Cont,"OFF");
					}
				#endif
					////////////////////vehicle speed is 30 km/hr
					if(vic_speed==30)
					{
						strcpy(AC,"ON");
						room_temp=((room_temp*5)/4)+1;
                 #if(CONDITION)
						strcpy(Eng_Temp_Cont,"ON");
						engin_temp =((engin_temp*5)/4)+1;
                 #endif
					}

				}
				Display_OUT();
				}while(strcmp(state_in,"ON")==0);

			}
	}
	return 0;
}
