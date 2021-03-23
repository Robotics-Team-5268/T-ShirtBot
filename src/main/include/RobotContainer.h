
#pragma once

#include <frc2/command/Command.h>
#include <frc/Joystick.h>
#include <frc2/command/button/JoystickButton.h>

#include "commands/ExampleCommand.h"
#include "subsystems/ExampleSubsystem.h"
#include "subsystems/Drive.h"

class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();

 private:
  // The robot's subsystems and commands are defined here...
  ExampleSubsystem subsystem;
  ExampleCommand autonomousCommand;

  Drive drive;

  std::shared_ptr<frc::Joystick> driverJoystick;
  std::vector<frc2::JoystickButton*> driverBtns;

  void ConfigureButtonBindings();
};
