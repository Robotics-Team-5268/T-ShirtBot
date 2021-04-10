/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/MoveDoubleSolenoid.h"

MoveDoubleSolenoid::MoveDoubleSolenoid(Pneumatics* mpneumatics, bool mstate) 
: pneumatics(mpneumatics),
state(mstate) 
{
  SetName("MoveDoubleSolenoid");
  AddRequirements(pneumatics);
}

// Called when the command is initially scheduled.
void MoveDoubleSolenoid::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void MoveDoubleSolenoid::Execute() 
{
  if(state){
    pneumatics->Double_Solenoid_Forward();
  }
  else{
    pneumatics->Double_Solenoid_Backward();
  }

}

// Called once the command ends or is interrupted.
void MoveDoubleSolenoid::End(bool interrupted) {}

// Returns true when the command should end.
bool MoveDoubleSolenoid::IsFinished() { return false; }
