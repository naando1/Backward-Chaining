#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

/*database  = Croaks + Eat Flies = Frog,
			= Eat Shrimps + Sings = Canary
knowbase = "Frog","Canary","Green","Yellow"*/

int k = 0, x = 0;
int answer, answer2, answer3, answer4;

void display();

int main() {
	system ("cls");
	printf ("*-----Backward--Chaning-----*");
	display();
	printf (" \n");
	if (x==1) {
		printf ("Is It Croaks and Eat Flies? 1(Yes)/2(No) : ");
		scanf ("%d", &answer);
		if (answer == 1){
			printf ("Is It Green ? 1(Yes)/2(No) : ");
			scanf ("%d", &answer2);
                if (answer2 == 1){
			printf ("Okay, This Is A Frog For Sure !");
			getch ();
            }
            else if (answer2 == 2){
			printf ("Invalid Knowledge");
			getch ();
			main ();
		}
		}
		else if (answer == 2) {
			printf ("Chance of Canary !");
			getch ();
			main ();
		}
		else {
			printf ("Invalid Input");
			getch ();
			main ();
		}

	}
	else if (x == 2) {
		printf ("Is It Sings Well ? 1(Yes)/2(No) : ");
		scanf ("%d", &answer3);
		if (answer3 == 1){
			printf ("Is It Yellow ? 1(Yes)/2(No) : ");
			scanf("%d", &answer4);
		}
		else if (answer3 == 2){
			printf ("Chance of Frog");
			getch ();
			main ();
		}
		else {
			printf ("Invalid Input");
			getch ();
			main ();
		}
		if (answer4 == 1){
			printf ("Okay, This Is A Canary For Sure !");
			getch ();
		}
		else if (answer4 == 2){
			printf ("Invalid Knowledge");
			getch ();
			main ();
		}
	}
	else {
		printf ("\n------- Invalid Option Select --------");
		getch ();
		main ();
	}
	getch();
}

void display() {
	printf ("\n X is \n1. Frog \n2. Canary");
	printf ("\n Select One : ");
	scanf ("%d", &x);
}
