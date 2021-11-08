//HEADER PARTICLEK.H  -Child Class

include <Particle.h>

#IFNDEFINE ParticleK_h
#DEFINE ParticleK_h
#DEFINE KMASS 500e6 //5279MeV
class ParticleK : public Particle{                                               
 public:
  //COSTRUTTORI
 ParticleK(double mass, TLorentzVector momentum ) : Particle(KMASS, momentum);    

  //DISTRUTTORE
  virtual ~ParticleK();                                         
 
  virtual TLorentzVector* decay(TLorentzVector* decayProducts); 



}
#ENDIF
