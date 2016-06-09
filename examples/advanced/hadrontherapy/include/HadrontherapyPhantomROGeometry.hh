//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id: HadrontherapyPhantomROGeometry.hh; May 2005
// ----------------------------------------------------------------------------
//                 GEANT 4 - Hadrontherapy example
// ----------------------------------------------------------------------------
// Code developed by:
//
// G.A.P. Cirrone(a)*, F. Di Rosa(a), S. Guatelli(b), G. Russo(a)
// 
// (a) Laboratori Nazionali del Sud 
//     of the National Institute for Nuclear Physics, Catania, Italy
// (b) National Institute for Nuclear Physics Section of Genova, genova, Italy
// 
// * cirrone@lns.infn.it
// ----------------------------------------------------------------------------

//The phantom is devided in voxels. the dimension of the voxel is 1 mm
//
//
#ifndef HadrontherapyPhantomROGeometry_h
#define HadrontherapyPhantomROGeometry_h 

#include "G4VReadOutGeometry.hh"

class HadrontherapyPhantomROGeometry : public G4VReadOutGeometry
{
public:
  HadrontherapyPhantomROGeometry(G4String aString,
				 G4double phantomDimX,
				 G4double phantomDimY,
				 G4double phantomDimZ,
				 G4int numberOfVoxelsX,
				 G4int numberOfVoxelsY,
				 G4int numberOfVoxelsZ);

  ~HadrontherapyPhantomROGeometry();

private:
  G4VPhysicalVolume* Build();

private:  
  const G4double phantomSizeX;
  const G4double phantomSizeY; 
  const G4double phantomSizeZ;

  const G4int numberOfVoxelsAlongX;
  const G4int numberOfVoxelsAlongY; 
  const G4int numberOfVoxelsAlongZ; 
  
  G4VPhysicalVolume *ROPhantomZDivisionPhys;
};
#endif