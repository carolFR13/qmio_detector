// main source file

#include <iostream>

#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4VisManager.hh"
#include "G4UIExecutive.hh"
#include "G4VisExecutive.hh"


int main(int argc, char** argv){
	
	G4RunManager *runManager = new G4RunManager();
	
	//user interface
	G4UIExecutive *ui = new G4UIExecutive(argc, argv);
	
	G4VisManager *visManager = new G4VisExecutive();
	visManager -> Initialize();
	
	G4UImanager *UImanager = G4UImanager::GetUIpointer();

	ui -> SessionStart();

	return 0;
}
