#include <iostream>
#include <vector>
#include "obesenec_funkcie.h"
using namespace std;

void greet()
{
  cout << "===================================================================================================================================================\n";
  cout << "Obesenec: Pokus sa ma nezabit!\n";
  cout << "===================================================================================================================================================\n";
  cout << "Popis hry: Hra spociva v doplnani pismenok do neznameho zadaneho slova. Za kazde nespravne pismenko sa dokresluje panacik az kym sa neobesi.\n";
  cout << "===================================================================================================================================================\n";
}

void display_chyby(int chyby)
{
  if(chyby==0)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(chyby==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(chyby==2)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(chyby==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(chyby==4)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(chyby==5)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(chyby==6)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

}


void display_stav(vector<char> nespravne, string odpoved)
{
  cout<<"Nespravne uvahy: \n";

  for(int i = 0; i<nespravne.size(); i++)
  {
    cout<<nespravne[i]<<" ";
  }

  cout<<"\nSlovo:\n";

  for(int i = 0; i<odpoved.length(); i++)
  {
    cout<<odpoved[i]<<" ";
  }
}


void end_hra(string odpoved, string Slovo)
{
  if(odpoved==Slovo)
  {
    cout<<"SUPER! Zachranil si ma pred obesenim a za to ti udelujem pochvalu!\n";
    cout<<"GRATULUJEM!\n";
  }
  else
  {
    cout<<"NIEEE, prave si ma obesil!\n";
  }
}
