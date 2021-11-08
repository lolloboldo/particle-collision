//HEADER PARTICLEPI.H  -Child Class

include <Particle.h>

#IFNDEFINE ParticlePI_h
#DEFINE ParticlePI_h
#DEFINE PIMASS 140e6 //5279MeV
class ParticlePI : public Particle{                                               
 public:
  //COSTRUTTORI
 ParticlePI(double mass, TLorentzVector momentum ) : Particle(PIMASS, momentum);    

  //DISTRUTTORE
  virtual ~ParticlePI();                                         
 
  virtual TLorentzVector* decay(TLorentzVector* decayProducts); 



}
#ENDIF
