//ParticleB IMPLEMENTATION

#include <iostream>
#include <stdexcept>
#include <TLorentzVector.h>
#include <ParticleB.h>
using namespace std;

//COSTRUTTORI
  
ParticleB::ParticleB(double mass, TLorentzVector momentum) :Particle(BMASS, momentum){} 



//UTILITY
TLorentzVector* particleB::decay(TLorentzVector* decayProducts){
  cout<<"La particella B verra' distrutta: salvare le informazioni utili in anticipo!"<<endl;
  this. ~ParticleB();
  return decayProducts;
}
