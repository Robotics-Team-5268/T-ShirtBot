/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Pneumatics.h"

Pneumatics::Pneumatics() 
{
    SetName("Pneumatics");
}

void Pneumatics::Single_Solenoid_Off(int port)
{
    switch(port)
    {
        case 1:
            ssolenoid1.Set(false);
            break;
        case 2:
            ssolenoid2.Set(false);
            break;
        case 3:
            ssolenoid3.Set(false);
            break;
        case 4:
            ssolenoid4.Set(false);
            break;
        case 5:
            ssolenoid5.Set(false);
            break;
        case 6:
            ssolenoid6.Set(false);
            break;
        default:
            break;
    }
}

void Pneumatics::Single_Solenoid_On(int port)
{
    switch(port)
    {
        case 1:
            ssolenoid1.Set(true);
            break;
        case 2:
            ssolenoid2.Set(true);
            break;
        case 3:
            ssolenoid3.Set(true);
            break;
        case 4:
            ssolenoid4.Set(true);
            break;
        case 5:
            ssolenoid5.Set(true);
            break;
        case 6:
            ssolenoid6.Set(true);
            break;
        default:
            break;
    }
}

void Pneumatics::Double_Solenoid_Forward()
{
    dsolenoid.Set(frc::DoubleSolenoid::kForward);
}
void Pneumatics::Double_Solenoid_Backward()
{
    dsolenoid.Set(frc::DoubleSolenoid::kReverse);
}

// This method will be called once per scheduler run
void Pneumatics::Periodic() {}
