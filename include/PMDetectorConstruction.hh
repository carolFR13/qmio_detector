#ifndef PMDETECTORCONSTRUCTION
#define PMDETECTORCONSTRUCTION

#include "G4VUserDetectorConstruction.hh"

#include "G4Box.hh"

#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4Material.hh"

#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"
#include "G4UnitsTable.hh"



class PMDetectorConstruction : public G4VUserDetectorConstruction{

    public: 
        PMDetectorConstruction();
        virtual ~PMDetectorConstruction(); // virtual function cause its already defined in the parent class 

        virtual G4VPhysicalVolume *Construct();

};


#endif