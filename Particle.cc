//Particle IMPLEMENTATION

#include "Particle.h"
#include <iostream>
#include <stdexcept>
#include <TLorentzVector.h>
using namespace std;

//COSTRUTTORI
Particle::Particle(){}
  
Particle::Particle(double mass, TLorentzVector momentum){
    mass(mass);
    momentum(momentum);
} 

//GETTER
double Particle::mass() const{
    return this.mass_;
}
  
TLorentzVector Particle::momentum() const{
    return this.momentum_;
}

//SETTER
void  Particle::mass(double mass){
    if(mass<0){
      throw std::invalid_argument("Negative mass doesn't exist.");
    }else{
      this.mass_ = mass;
    }
}

void Particle::momentum(TLorentzVector momentum){
   this.momentum_ = momentum;
}

//UTILITY
double Particle::invariantmass() const{
   return this.momentum_->M2();
}

void Particle::boost(TVector3 boostVec){
  this.momentum_->Boost(boostVec);
}
