/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <time.h>

using namespace std;

int lucky_num= time(0)%10 +1;
int total_guess=5;
int guess_num;
bool play_again=true;
char check;

bool guess()
{
    if(lucky_num==guess_num)
    {
        cout<<"CONGRATULATION YOUVE GUESSED THE NUM CORRECTLY"<<endl;
        cout<<"YOUR SCORE IS------ "<<total_guess<<endl;
        cout<<"---------------------------------"<<endl;
        return false;
    
    }
    else
    {
        cout<<"UNLUCKY :-( "<<endl;
        cout<<"---------------------------------"<<endl;
        total_guess-total_guess-1;
        return true;
    }
}

int main()
{  
 
  
    cout<<"Hello this is the number guessing game ,Guess the number between 1-10"<<endl;
    
    while(total_guess !=0 && play_again)
    {
    
      cout<<"Guess The Lucky Number,good Luck :-)"<<endl;
      cin>>guess_num;
      
      if(guess_num>10 || guess_num<0)
        cout<<"INVALID GUESS, NUMBER BETWEEN 1-10"<<endl;
        
      else
      {
         play_again=guess();
         total_guess=total_guess-1;
      }
      
    }
    cout<<"___________________________________________"<<endl;
    cout<<"wanna play the game again ???\n enter y\\n :-)"<<endl;
     cin>>check;
     
    
     if(check=='y')
     {
        play_again=true;
        lucky_num= time(0)%10 +1;
        total_guess=5;
        main();
     }
        
    else 
      cout<<"hope you had fun GOODBYE :-)"<<endl;
    

    return 0;
}
