/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "OI.h"
#include "commands/JoystickDrive.h"

JoystickDrive::JoystickDrive( Drive * drive, std::shared_ptr<frc::joystick>& Joystick) {
  // Use addRequirements() here to declare subsystem dependencies.
  SetName("drivew/joystick");
  AddRequirements(drive);
}

// Called when the command is initially scheduled.
void JoystickDrive::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void JoystickDrive::Execute() {
  drive->setMotors(Driverjoystick->GetRawAxes(1), Driverjoystick->GetRawAxes(5));
}

// Called once the command ends or is interrupted.
void JoystickDrive::End(bool interrupted) {}

// Returns true when the command should end.
bool JoystickDrive::IsFinished() { return false; }
