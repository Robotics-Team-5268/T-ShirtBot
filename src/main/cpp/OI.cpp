/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "commands/Joystick_drive.h"
#include "OI.h"

OI::OI(){
  m_drive.SetDefaultCommand(Joystick_drive(
      [this] { return m_joy.GetY(frc::GenericHID::JoystickHand::kLeftHand); },
      [this] { return m_joy.GetY(frc::GenericHID::JoystickHand::kRightHand); },
      &m_drive));
  // Configure the button bindings
  ConfigureButtonBindings();
}

void OI::ConfigureButtonBindings() {
  
}

float OI::DRAxis() {
  return Driverjoystick->GetRawAxis(5);
}

float OI::DLAxis() {
  return Driverjoystick->GetRawAxis(1);
}