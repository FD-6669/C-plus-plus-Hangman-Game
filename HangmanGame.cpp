#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;

void myFunction()
{
    //Prints game instruction / interface
    cout << "\n\n\n\n\n\n\t\t----------HI , WELCOME TO HANGMAN GAME!----------";
    string array[7]={"FUNCTION","PARAMETER","PROGRAMMING","REFERENCES","INHERITANCE","POLYMORPHIM","CONSTRUCTOR"};
    cout << "\n\t\t            TIP: Programming Field                    ";
    cout << "\n\t\t            YOU ARE GIVEN 5 CHANCES!              ";
    cout << "\n\t\t                GUESS THE WORDS                   "<<endl;
    cout << "\t\t          ALL WORD ARE IN BIG CAPITAL                "<<endl;
    cout << "\n\n\t\t       BEFORE THAT, WHAT IS YOUR NAME?"<<endl;
    cout << "\t\t                NAME: ";
    string name;
    cin >> name;

    //Generate a random word
    unsigned seed= time(0);
    srand(seed);
    int number=rand()%5;
    string x= array[number];
    int r=x.length();


    //Greeting player and ask weather ready or not
    cout << "\n\t\t                 HI, " << name << "."<<endl;
    cout << "\t\t           ARE YOU READY? ( y/n ):";
    string answer,answer1;
    cin >> answer;

    while(answer=="n") {
        cout << "\t\t     I GUESS I'LL WAIT FOR YOU.....";
        cout << "(y/n):";
        cin >> answer;
    }
    answer1=answer;
    if(answer1=="y")
        {
            cout << "\n\t\t\t       HERE WE GO!";
            cout << "\n\n\t\t          THERE ARE "<< r << " CHARACTERS          ";
            array[0]="F _ N C _ I _ N ";
            array[1]="_ A R A _ E T _ R ";
            array[2]="P R _ G _ A M_ I_ G ";
            array[3]="_ E F _ R _N _ E S ";
            array[4]="I N _ E _ I T _ N_ _ ";
            array[5]="P _ L Y _ _ R P H _ M ";
            array[6]="_ O N _ T R U _ T _ R ";

    //print the uncompleted word to player
    cout << "\n\t\t            "<< array[number]<<endl;
    int chances=5;
    if(chances>=0)
        {
            while(chances>=0)
                {
                    cout << "\t\t       WHAT IS YOUR ANSWER? CHANCES: "<<chances <<endl;
                    cout << "\t\t           ANSWER: ";
                    string Useranswer;
                    cin >> Useranswer;
                    if(Useranswer==x)
                        {
                            cout << "\n\t*************************************************************"<<endl;
                            cout << "\t*CONGRATULATIONS! YOU GUESSED IT RIGHT WITH " <<chances << " CHANCE(S) LEFT*"<<endl;
                            cout << "\t*************************************************************"<<endl;
                            break;
                        } else
                            {
                                if(chances>1)
                                    {
                                        chances--;
                                    }
                                    else
                                        {
                                            cout << "\t SORRY! YOU LOST! YOU FAILED TO GUESS THE WORDS UNDER GIVEN 5 CHANCES.\n\n";
                                            break;

                                        }
                            }
                }
        }

}
    if(answer!="n" && answer!="y")
    {
              cout << "\t\t     \n\n\n\tPLEASE INPUT VALID ANSWER\n\n";
              myFunction();
    }
}
int main()
    {
    myFunction();
    int repeat=0;
    while(repeat<5)
        {
            cout << "\t\t   Do you want to play again? (y/n): ";
            string resp;
            cin >> resp;
            if(resp=="y")
                {
                    myFunction();
                    repeat++;
                }
            else if(resp=="n")
                {
                    cout << "\n\t\t\t THANK YOU FOR PLAYING!\n\n\n"<<endl;
                    break;
                }
            else
                {
                    cout <<"\n\t\t\t INPUT NOT VALID"<<endl;
                    continue;
                }

    }
    return 0;
    }

