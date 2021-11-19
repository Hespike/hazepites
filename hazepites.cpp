#include <string>

using namespace std;

class Haz {
   string varos;
   string utca;
   unsigned hazszam;
   unsigned felepitettseg = 0;

public:
   Haz(string varos, string utca, unsigned int hazszam): varos(varos), utca(utca), hazszam(hazszam) {}

   unsigned get_felepitettseg() {
       return felepitettseg;
   }

   void epit() {
       felepitettseg++;
   }
};

void hazat_felepit(Haz* haz) {
   while (haz->get_felepitettseg() < 100) {
       haz->epit();
   }
}
