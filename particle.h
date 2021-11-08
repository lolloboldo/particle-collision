//HEADER PARICLE.H  - Abstract Class

#IFNDEFINE Particle_h
#DEFINE Particle_h
class Particle{                                               
 public:
  //COSTRUTTORI
  Particle();                                                   //costruttore nullo
  Particle(double mass, Tlorentzvector momentum );    

  //DISTRUTTORE
  ~virtual Particle();                                           //pure virtual: ogni particella definisce il proprio   
  
  //GETTER
  double mass() const;                //da massa
  Tlorentzvector  momentum() const;   //da vettore momento
  
  //SETTER
  void mass(double mass);                     //setta massa
  void momentum(Tlorentzvector momentum);     //setta momento

  //FUNZIONALITA'
  double invariantmass() const;      //da massa invariante
  void boost();                      //esegue boost lorentz
  virtual Tlorentzvector* decay();   //legge decadimento particella, pure virtual
  
//-----------------------------------------------------
 private:
  double mass_;
  Tlorentzvector momentum_;   // P=(px,py.pz, E)


}
#ENDIF
