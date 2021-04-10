/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/MoveSingleSolenoid.h"

MoveSingleSolenoid::MoveSingleSolenoid(Pneumatics* mpneumatics, bool mstate) 
: pneumatics(mpneumatics),
state(mstate)
{
  SetName("MoveSingleSolenoid");
  AddRequirements(pneumatics);
}

// Called when the command is initially scheduled.
void MoveSingleSolenoid::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void MoveSingleSolenoid::Execute() {
  if(state){
    pneumatics->Single_Solenoid_On();
  }
  else{
    pneumatics->Single_Solenoid_Off();
  }
}

// Called once the command ends or is interrupted.
void MoveSingleSolenoid::End(bool interrupted) {}

// Returns true when the command should end.
bool MoveSingleSolenoid::IsFinished() { return false; }
