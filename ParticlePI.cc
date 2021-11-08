//ParticleK IMPLEMENTATION

#include <iostream>
#include <stdexcept>
#include <TLorentzVector.h>
#include <ParticlePI.h>
using namespace std;

//COSTRUTTORI
  
ParticlePI::ParticlePI(double mass, TLorentzVector momentum) :Particle(PIMASS, momentum){} 



//UTILITY
TLorentzVector* particlePI::decay(TLorentzVector* decayProducts = null){
  cout<<"Decay Not Permitted"<<endl;
  return decayProducts;
}
