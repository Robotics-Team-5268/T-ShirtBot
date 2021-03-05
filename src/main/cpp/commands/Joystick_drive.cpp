/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Joystick_drive.h"

Joystick_drive::Joystick_drive( std::function<double()> left, std::function<double()> right, Drive* drive)
    : m_left(left), m_right(right), m_drive(drive) {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void Joystick_drive::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void Joystick_drive::Execute() {}

// Called once the command ends or is interrupted.
void Joystick_drive::End(bool interrupted) {}

// Returns true when the command should end.
bool Joystick_drive::IsFinished() { return false; }
