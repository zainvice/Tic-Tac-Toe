#include <string>    //This library will be used.
#include <iostream>     //This library will be used.
#include <cctype>       //This library is a test.
#include <iomanip>      //This library is a test.
#include <windows.h>// This is a test
char arre [4][8]={{'1','2','3','4'}  //This is a global variable used throughout.
                    ,{'5','6','7','8'},
                    {'9','1','0','1','1','1','2'},
                    {'1','3','1','4','1','5','1','6'}};
void board (); //This board is for 4 players.
void board2(); //This board is for 2 players.
void board3 (); //This board is for 3 players.
int check();  // This checks status for 3 and 4 players.
int check2(); // This checks status for 2 players.
int main()
{

    start:
        system ("color 06");                        //I used this for restarting the game and used goto loop later in game.
        system("cls");           //This system command clears screen.


     int player=1;
     int i;
     int pl;
     int choice;
     char mark='X';
     //This if expression helps resetting the board after restart.
     if (arre[0][0]==mark||arre[0][1]==mark||arre[0][2]==mark||arre[0][3]==mark||arre[1][0]==mark||arre[1][1]==mark
         ||arre[1][2]==mark||arre[1][3]==mark||arre[2][0]==mark||arre[2][1]==mark||arre[2][3]==mark||arre[2][5]==mark
         ||arre[3][1]==mark||arre[3][3]==mark||arre[3][5]==mark||arre[3][7]==mark)
     {
         arre[0][0]='1';
         arre[0][1]='2';
         arre[0][2]='3';
         arre[0][3]='4';
         arre[1][0]='5';
         arre[1][1]='6';
         arre[1][2]='7';
         arre[1][3]='8';
         arre[2][0]='9';
         arre[2][1]='1';
         arre[2][2]='0';
         arre[2][3]='1';
         arre[2][4]='1';
         arre[2][5]='1';
         arre[2][6]='2';
         arre[3][0]='1';
         arre[3][1]='3';
         arre[3][2]='1';
         arre[3][3]='4';
         arre[3][4]='1';
         arre[3][5]='5';
         arre[3][6]='1';
         arre[3][7]='6';

     }
     int count=1;
     std::cout<<std::setw(75); //This is just for test.
     // This is the main menu of the program.

     std::cout<<"\n \n\n\n\n\t \t\t    **WELCOME TO THE EXCLUSIVE \"TIC TAC TOE\" EDITION.**\n\n\n\n\n \n\t \t\t\t\t      MAIN MENU: \n \n\t \t\t\t\t  Note: Options for:  \n\t \t\t\t\t      2 players \n\t \t\t\t\t      3 players \n\t \t\t\t\t      4 players \n\t \t\t\t\t    are available.\n \n\t \t \t\t      How many players are playing? ";
     std::cin>>pl;
    //This if expression runs for 3 players.
    if (pl==3)
    {
    do
    {

        if (player>3)
        {
            count=1;
        }
        board3();
        player=count;

        std::cout << " \n \n Player " << player << " enter any number from the board :  ";
        std::cin >> choice;
         if(choice==0)
        {
            goto start;
        }
        if (player==1)
        {mark='O';}
        if (player==2)
        {mark='X';}
        if (player==3)
        {mark='L';}

        if (choice == 1 && arre [0][0] == '1')

             {arre[0][0] = mark;}
        else if (choice == 2 &&  arre[0][1] == '2')

             {arre[0][1] = mark;}
        else if (choice == 3 &&  arre[0][2] == '3')

             {arre[0][2] = mark;}
        else if (choice == 4 &&  arre[0][3] == '4')

             {arre[0][3] = mark;}
        else if (choice == 5 &&  arre[1][0] == '5')

             {arre[1][0] = mark;}
        else if (choice == 6 &&  arre[1][1] == '6')

             {arre[1][1] = mark;}
        else if (choice == 7 &&  arre[1][2] == '7')

             {arre[1][2] = mark;}
        else if (choice == 8 &&  arre[1][3] == '8')

             {arre[1][3] = mark;}
        else if (choice == 9 &&  arre[2][0] == '9')

             {arre[2][0] = mark;}
              else if (choice == 10 &&  arre[2][1] == '1'&&arre[2][2]=='0')

             {arre[2][1] = mark;
             arre[2][2]= ' ';}
              else if (choice == 11 &&  arre[2][3] == '1'&&arre[2][4]=='1')

             {arre[2][3] = mark;
             arre[2][4]= ' ';}
               else if (choice == 12 &&  arre[2][5] == '1'&&arre[2][6]=='2')

             {arre[2][5] = mark;
             arre[2][6]= ' ';}
               else if (choice == 13 &&  arre[3][0] == '1'&&arre[3][1]=='3')

             {arre[3][1] = mark;
             arre[3][0]= ' ';}
              else if (choice == 14 &&  arre[3][2] == '1'&&arre[3][3]=='4')

             {arre[3][3] = mark;
             arre[3][2]= ' ';}
              else if (choice == 15 &&  arre[3][4] == '1'&&arre[3][5]=='5')

             {arre[3][5] = mark;
             arre[3][4]= ' ';}
              else if (choice == 16 &&  arre[3][6] == '1'&&arre[3][7]=='6')

             {arre[3][7] = mark;
             arre[3][6]= ' ';}
             else
             {
                 std::cout<<"Invalid move! Player "<<player<<" You've lost your move! \n \tEnter to continue!";


                 std::cin.ignore();
                 std::cin.get();
             }

        i=check();
        count++;
        player++;
    }while(i==-1);
    char ans;
    board3();
    if(i==1)
        {
            system("cls");
            std::cout<<"\n \n \n \n \n\n\n \t\t==>\a \t \t \t Congratulations Player "<<--player<<" You Win!!! \n \n \n \t \t \t \t \t\tTHANK YOU FOR PLAYING!!!\n";
            std::cout<<"\n \n \n\t \t \t \t \t    Do you want to restart. y/n ? "; std::cin>>ans;
            if(ans=='y')
            {
                goto start;
            }
        }
    else
        {
            std::cout<<"\t \t==>\a Game is draw";
            std::cout<<"\t \t Do you want to restart. y/n ? "; std::cin>>ans;
            if(ans=='y')
            {
                goto start;
            }
        }

    std::cin.ignore();
    std::cin.get();
    }
    //This if expression runs for 4 players.
    else if (pl==4)
    {
    do
    {
        if (player>4)
        {
            count=1;
        }
        board();
        player=count;

        std::cout << " \n \n Player " << player << " enter any number from the board :  ";
        std::cin >> choice;
         if(choice==0)
        {
            goto start;
        }
        if (player==1)
        {mark='O';}
        if (player==2)
        {mark='X';}
        if (player==3)
        {mark='L';}
        if (player==4)
        {mark='$';}
        if (choice == 1 && arre [0][0] == '1')

             {arre[0][0] = mark;}
        else if (choice == 2 &&  arre[0][1] == '2')

             {arre[0][1] = mark;}
        else if (choice == 3 &&  arre[0][2] == '3')

             {arre[0][2] = mark;}
        else if (choice == 4 &&  arre[0][3] == '4')

             {arre[0][3] = mark;}
        else if (choice == 5 &&  arre[1][0] == '5')

             {arre[1][0] = mark;}
        else if (choice == 6 &&  arre[1][1] == '6')

             {arre[1][1] = mark;}
        else if (choice == 7 &&  arre[1][2] == '7')

             {arre[1][2] = mark;}
        else if (choice == 8 &&  arre[1][3] == '8')

             {arre[1][3] = mark;}
        else if (choice == 9 &&  arre[2][0] == '9')

             {arre[2][0] = mark;}
              else if (choice == 10 &&  arre[2][1] == '1'&&arre[2][2]=='0')

             {arre[2][1] = mark;
             arre[2][2]= ' ';}
              else if (choice == 11 &&  arre[2][3] == '1'&&arre[2][4]=='1')

             {arre[2][3] = mark;
             arre[2][4]= ' ';}
               else if (choice == 12 &&  arre[2][5] == '1'&&arre[2][6]=='2')

             {arre[2][5] = mark;
             arre[2][6]= ' ';}
               else if (choice == 13 &&  arre[3][0] == '1'&&arre[3][1]=='3')

             {arre[3][1] = mark;
             arre[3][0]= ' ';}
              else if (choice == 14 &&  arre[3][2] == '1'&&arre[3][3]=='4')

             {arre[3][3] = mark;
             arre[3][2]= ' ';}
              else if (choice == 15 &&  arre[3][4] == '1'&&arre[3][5]=='5')

             {arre[3][5] = mark;
             arre[3][4]= ' ';}
              else if (choice == 16 &&  arre[3][6] == '1'&&arre[3][7]=='6')

             {arre[3][7] = mark;
             arre[3][6]= ' ';}
             else
             {
                 std::cout<<"Invalid move! Player "<<player<<" You've lost your move! \n \tEnter to continue!";

                 std::cin.ignore();
                 std::cin.get();
             }

        i=check();
        count++;
        player++;
    }while(i==-1);
    char ans;
    board();
    if(i==1)
        {
            system("cls");
            std::cout<<"\n \n \n \n \n\n\n \t\t==>\a \t \t \t Congratulations Player "<<--player<<" You Win!!! \n \n \n \t \t \t \t \t\tTHANK YOU FOR PLAYING!!!\n";
            std::cout<<"\n \n \n\t \t \t \t \t    Do you want to restart. y/n ? "; std::cin>>ans;
            if(ans=='y')
            {
                goto start;
            }
        }
    else
        {
            std::cout<<"\t \t==>\a Game is draw";
            std::cout<<"\t \t Do you want to restart. y/n ? "; std::cin>>ans;
            if(ans=='y')
            {
                goto start;
            }
        }

    std::cin.ignore();
    std::cin.get();
    }
    //This if expression runs for 4 players.
    else if (pl==2)
    {
    do
    {
        board2();
        player=(player%2)?1:2;

        std::cout << "\t \t Hi Player " << player << "! enter any number from the board:  ";
        std::cin >> choice;
        if(choice==0)
        {
            goto start;
        }

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && arre[0][0] == '1')

            arre[0][0] = mark;
        else if (choice == 2 && arre[0][1] == '2')

            arre[0][1] = mark;
        else if (choice == 3 && arre[0][2] == '3')

            arre[0][2] = mark;
        else if (choice == 4 && arre[0][3] == '4')

            arre[0][3] = mark;
        else if (choice == 5 && arre[1][0] == '5')

            arre[1][0] = mark;
        else if (choice == 6 && arre[1][1] == '6')

            arre[1][1] = mark;
        else if (choice == 7 && arre[1][2] == '7')

            arre[1][2] = mark;
        else if (choice == 8 && arre[1][3] == '8')

            arre[1][3] = mark;
        else if (choice == 9 && arre[2][0] == '9')

            arre[2][0] = mark;
        else
        {
            std::cout<<"\t \t \tInvalid move ";

            player--;
            std::cin.ignore();
            std::cin.get();
        }
        i=check2();

        player++;
    }while(i==-1);
    char ans;
    board2();
    if(i==1)

     {
            system("cls");
            std::cout<<"\n \n \n \n \n\n\n \t\t==>\a \t \t \t Congratulations Player "<<--player<<" You Win!!! \n \n \n \t \t \t \t \t\tTHANK YOU FOR PLAYING!!!\n";
            std::cout<<"\n \n \n\t \t \t \t \t    Do you want to restart. y/n ? "; std::cin>>ans;
            if(ans=='y')
            {
                goto start;
            }
     }
    else
       {
           std::cout<<"\n \n \t \t \t==>\aGame draw";
           std::cout<<"\n \n\t \t Do you want to restart. y/n ? "; std::cin>>ans;
            if(ans=='y')
            {
                goto start;
            }
       }


    std::cin.ignore();
    std::cin.get();
    }
}
void board()
{
    system ("color 0B");
    system("cls");
    std:: string player1="O";
   std::string player2="X";
   std::string player3="L";
   std::string player4="$";
   std::cout<<"\n \n \t \t \t \t \t \t \t \t \t \t ==> Press \" 0 \" to Go Back! "<<std::endl;
   std::cout<<"\t\t \t Welcome To Tic Tac Toe \n \t\t \tExclusive Edition 4 players \n \n\t*Rule: Any player trying to mark others mark will lose their turn "<<std::endl;
   std::cout<<" \n \n\t\tPlayer 1 has : "<<player1<<"\n\t\tPlayer 2 has : "<<player2<<"\n\t\tPlayer 3 has : "<<player3<<"\n\t\tPlayer 4 has : "<<player4<<std::endl;
    std::cout<<"\n\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t    "<<arre[0][0]<<"     |    "<<arre[0][1]<<"     |    "<<arre[0][2]<<"     |    "<<arre[0][3]<<"         "<<std::endl;
    std::cout<<"\t \t__________|__________|__________|__________"<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t    "<<arre[1][0]<<"     |    "<<arre[1][1]<<"     |    "<<arre[1][2]<<"     |    "<<arre[1][3]<<"         "<<std::endl;
    std::cout<<"\t \t__________|__________|__________|__________"<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t    "<<arre[2][0]<<"     |    "<<arre[2][1]<<arre[2][2]<<"    |    "<<arre[2][3]<<arre[2][4]<<"    |    "<<arre[2][5]<<arre[2][6]<<"         "<<std::endl;
    std::cout<<"\t \t__________|__________|__________|__________"<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t    "<<arre[3][0]<<arre[3][1]<<"    |    "<<arre[3][2]<<arre[3][3]<<"    |    "<<arre[3][4]<<arre[3][5]<<"    |    "<<arre[3][6]<<arre[3][7]<<"         "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
}
void board3()
{
    system ("color 0A");
    system("cls");
    std:: string player1="O";
   std::string player2="X";
   std::string player3="L";
   std::cout<<"\n \n \t \t \t \t \t \t \t \t \t \t ==> Press \" 0 \" to Go Back! "<<std::endl;
   std::cout<<"\t\t \t   Welcome To Tic Tac Toe \n \t\t \tExclusive Edition 3 players \n \n\t*Rule: Any player trying to mark others mark will lose their turn "<<std::endl;
   std::cout<<" \n \n\t\tPlayer 1 has : "<<player1<<"\n\t\tPlayer 2 has : "<<player2<<"\n\t\tPlayer 3 has : "<<player3<<std::endl;
    std::cout<<"\n\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t    "<<arre[0][0]<<"     |    "<<arre[0][1]<<"     |    "<<arre[0][2]<<"     |    "<<arre[0][3]<<"         "<<std::endl;
    std::cout<<"\t \t__________|__________|__________|__________"<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t    "<<arre[1][0]<<"     |    "<<arre[1][1]<<"     |    "<<arre[1][2]<<"     |    "<<arre[1][3]<<"         "<<std::endl;
    std::cout<<"\t \t__________|__________|__________|__________"<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t    "<<arre[2][0]<<"     |    "<<arre[2][1]<<arre[2][2]<<"    |    "<<arre[2][3]<<arre[2][4]<<"    |    "<<arre[2][5]<<arre[2][6]<<"         "<<std::endl;
    std::cout<<"\t \t__________|__________|__________|__________"<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
    std::cout<<"\t \t    "<<arre[3][0]<<arre[3][1]<<"    |    "<<arre[3][2]<<arre[3][3]<<"    |    "<<arre[3][4]<<arre[3][5]<<"    |    "<<arre[3][6]<<arre[3][7]<<"         "<<std::endl;
    std::cout<<"\t \t          |          |          |          "<<std::endl;
}
int check()
{
    if (arre[0][0] == arre[0][1] && arre[0][1] == arre[0][2]&& arre[0][2]== arre[0][3])

     {
         return 1;
     }
    else if (arre[1][0] == arre[1][1] && arre[1][1] == arre[1][2]&& arre[1][2]== arre[1][3])
    {

        return 1;
    }
   else if (arre[2][0] == arre[2][1] && arre[2][1] == arre[2][3]&& arre[2][3]== arre[2][5])
     {
        return 1;
     }
    else if (arre[3][1] == arre[3][3] && arre[3][3] == arre[3][5]&& arre[3][5]== arre[3][7])
    {
        return 1;
    }
     else if (arre[0][0] == arre[1][0] && arre[1][0] == arre[2][0]&& arre[2][0]== arre[3][1])
         {
             return 1;
         }
        else if (arre[0][1] == arre[1][1] && arre[1][1] == arre[2][1]&& arre[2][1]== arre[3][3])
        {
        return 1;
        }
         else if (arre[0][2] == arre[1][2] && arre[1][2] == arre[2][3]&& arre[2][3]== arre[3][5])
        {return 1;}
       else if (arre[0][3] == arre[1][3] && arre[1][3] == arre[2][5]&& arre[2][5]== arre[3][7])
        {
        return 1;
        }
        else if (arre[0][0] == arre[1][1] && arre[1][1] == arre[2][3]&& arre[2][3]== arre[3][7])
        {
        return 1;
        }
         else if (arre[0][3] == arre[1][2] && arre[1][2] == arre[2][1]&& arre[2][1]== arre[3][1])
        {
        return 1;
        }
    else if ( arre[0][0]!='1'&&arre[0][1]!='2'&&
         arre[0][2]!='3'&&
         arre[0][3]!='4'&&
         arre[1][0]!='5'&&
         arre[1][1]!='6'&&
         arre[1][2]!='7'&&
         arre[1][3]!='8'&&
         arre[2][0]!='9'&&
         arre[2][1]!='1'&&
         arre[2][2]!='0'&&
         arre[2][3]!='1'&&
         arre[2][4]!='1'&&
         arre[2][5]!='1'&&
         arre[2][6]!='2'&&
         arre[3][0]!='1'&&
         arre[3][1]!='3'&&
         arre[3][2]!='1'&&
         arre[3][3]!='4'&&
         arre[3][4]!='1'&&
         arre[3][5]!='5'&&
         arre[3][6]!='1'&&
         arre[3][7]!='6')
         {
             return 0;
         }


    else
        return -1;
}
void board2()
{
    system ("color F0");
    system("cls");
    std::cout<<"\n \n \t \t \t \t \t \t \t \t \t \t ==> Press \" 0 \" to Go Back! "<<std::endl;
    std::cout << "\n\n\t\t\t\t   Tic Tac Toe\n\n";

    std::cout << "\n\t\t\t\tPlayer 1 has : X \n\t\t\t\tPlayer 2 has : O " << std::endl;
    std::cout << std::endl;

    std::cout << "\t\t\t\t     |     |     " << std::endl;
    std::cout << "\t\t\t\t  " << arre[0][0] << "  |  " << arre[0][1] << "  |  " << arre[0][2] << std::endl;

    std::cout << "\t\t\t\t_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t     |     |     " << std::endl;

    std::cout << "\t\t\t\t  " << arre[0][3] << "  |  " << arre[1][0] << "  |  " << arre[1][1] << std::endl;

    std::cout << "\t\t\t\t_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t     |     |     " << std::endl;

    std::cout << "\t\t\t\t  " << arre[1][2] << "  |  " << arre[1][3] << "  |  " << arre[2][0] << std::endl;

    std::cout << "\t\t\t\t     |     |     " << std::endl << std::endl;
}
int check2()
{
    if (arre[0][0] == arre[0][1] && arre[0][1] == arre[0][2])

        return 1;
    else if (arre[0][3] == arre[1][0] && arre[1][0] == arre[1][1])

        return 1;
    else if (arre[1][2] == arre[1][3] && arre[1][3] == arre[2][0])

        return 1;
    else if (arre[0][0] == arre[0][3] && arre[0][3] == arre[1][2])

        return 1;
    else if (arre[0][1] == arre[1][0] && arre[1][0] == arre[1][3])

        return 1;
    else if (arre[0][2] == arre[1][1] && arre[1][1] == arre[2][0])

        return 1;
    else if (arre[0][0] == arre[1][0] && arre[1][0] == arre[2][0])

        return 1;
    else if (arre[0][2] == arre[1][0] && arre[1][0] == arre[1][2])

        return 1;
    else if (arre[0][0] != '1' && arre[0][1] != '2' && arre[0][2] != '3'
                    && arre[0][3] != '4' && arre[1][0] != '5' && arre[1][1] != '6'
                  && arre[1][2] != '7' && arre[1][3] != '8' && arre[2][0] != '9')

        return 0;
    else
        return -1;
}




