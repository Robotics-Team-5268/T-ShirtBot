/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/MoveFlag.h"

MoveFlag::MoveFlag( Flag* aflag )
    : mflag( aflag ) {
  // Use addRequirements() here to declare subsystem dependencies.
  SetName( "MoveFlag" );
   AddRequirements( mflag );
}

// Called when the command is initially scheduled.
void MoveFlag::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void MoveFlag::Execute() {
  mflag->Move(1.0);
}

// Called once the command ends or is interrupted.
void MoveFlag::End(bool interrupted) {
  mflag->Move(0.0);
}

// Returns true when the command should end.
bool MoveFlag::IsFinished() { return false; }
