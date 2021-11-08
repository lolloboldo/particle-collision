//HEADER PARTICLEB.H  -Child Class

include <Particle.h>

#IFNDEFINE ParticleB_h
#DEFINE ParticleB_h
#DEFINE BMASS 5279e6 //5279MeV
class ParticleB : public Particle{                                               
 public:
  //COSTRUTTORI
 ParticleB(double mass, TLorentzVector momentum ) : Particle(BMASS, momentum);    

  //DISTRUTTORE
  virtual ~ParticleB();                                         
 
  virtual TLorentzVector* decay(TLorentzVector* decayProducts); 



}
#ENDIF
