//HEADER PARICLE.H  - Abstract Class

include <TLorentzVector.h>

#IFNDEFINE Particle_h
#DEFINE Particle_h
class Particle{                                               
 public:
  //COSTRUTTORI
  Particle();                                                   //costruttore nullo
  Particle(double mass, TLorentzVector momentum );    

  //DISTRUTTORE
  ~virtual Particle();                                           //pure virtual: ogni particella definisce il proprio   
  
  //GETTER
  double mass() const;                //da massa
  TLorentzVector  momentum() const;   //da vettore momento
  
  //SETTER
  void mass(double mass);                     //setta massa
  void momentum(Tlorentzvector momentum);     //setta momento

  //FUNZIONALITA'
  double invariantmass() const;      //da massa invariante
  void boost(TVector3 boostVec);                      //esegue boost lorentz
  virtual TLorentzVector* decay(TLorentzVector* decayProducts);   //legge decadimento particella, pure virtual
  
//-----------------------------------------------------
 private:
  double mass_;
  TLorentzVector momentum_;   // P=(px,py.pz, E)


}
#ENDIF
