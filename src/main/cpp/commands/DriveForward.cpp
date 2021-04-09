/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DriveForward.h"


DriveForward::DriveForward(Drive* idrive) 
: drive( idrive )
{
  SetName( "DriveForward" );
  AddRequirements( drive );
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void DriveForward::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void DriveForward::Execute() {
  drive->Acceleration(1.0, 1.0);

}

// Called once the command ends or is interrupted.
void DriveForward::End(bool interrupted) {
  drive->Acceleration(0.0, 0.0);
}

// Returns true when the command should end.
bool DriveForward::IsFinished() { return false; }
