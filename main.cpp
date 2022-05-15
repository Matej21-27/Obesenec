#include <iostream>
#include <vector>
#include "obesenec_funkcie.h"
using namespace std;
int main()
{
  greet();

  string Slovo = "Matejko";
  string odpoved = "_______";
  int chyby = 0;
  vector<char> nespravne;
  bool uvaha = false;
  char pismeno;


  while(odpoved!=Slovo && chyby < 7)
  {
    display_chyby(chyby);
    display_stav(nespravne, odpoved);

    cout<<"\n\nZadaj odhadovane pismeno: ";
    cin>>pismeno;

    for(int i = 0; i<Slovo.length(); i++)
    {
      if(pismeno==Slovo[i])
      {
        odpoved[i] = pismeno;
        uvaha = true;
      }
    }
    if(uvaha)
    {
      cout<<"\nSpravne, pokracuj!\n";
    }
    else
    {
      cout<<"\nNespravne! Dokreslila sa dalsia cast postavicky, postupuj opatrnejsie!\n";
      nespravne.push_back(pismeno);
      chyby++;
    }
    uvaha = false;
  }

  end_hra(odpoved, Slovo);
  return 0;
}
