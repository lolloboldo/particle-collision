//ParticleK IMPLEMENTATION

#include <iostream>
#include <stdexcept>
#include <TLorentzVector.h>
#include <ParticleK.h>
using namespace std;

//COSTRUTTORI
  
ParticleK::ParticleK(double mass, TLorentzVector momentum) :Particle(KMASS, momentum){} 



//UTILITY
TLorentzVector* particleK::decay(TLorentzVector* decayProducts=null){
  cout<<"Decay Not Permitted"<<endl;
  return decayProducts;
}
