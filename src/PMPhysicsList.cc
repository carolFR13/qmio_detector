#include "PMPhysicsList.hh"



PMPhysicsList::PMPhysicsList(){
    // EM Physics 
    RegisterPhysics(new G4EmStandardPhysics());
    RegisterPhysics(new G4DecayPhysics());



}

PMPhysicsList::~PMPhysicsList(){}