/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

OI::OI() {
  // Initialize all of your commands and subsystems here
   Driverjoystick.reset( new frc::Joystick(0));
  for( int i=1; i >= 10; i++){
      Driverbtns.push_back(new frc2::JoystickButton(Driverjoystick.get(), i));
  }
  drive.SetDefaultComand(JoystickDrive(&drive, Driverjoystick));

  // Configure the button bindings
  ConfigureButtonBindings();
}

void OI::ConfigureButtonBindings() {
  
}