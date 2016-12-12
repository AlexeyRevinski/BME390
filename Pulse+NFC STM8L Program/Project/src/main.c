/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%                                                                        %%%%
%%%%           BME 390: Phrenic Nerve Stimulation: Implant Program          %%%%
%%%%                                 main.c                                 %%%%
%%%%                                                                        %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%	
********************************************************************************
*	Author:		Alexey Revinski
*	Last Revised:	11/20/2016
*******************************************************************************/
#include "private_functions.h"

/*******************************************************************************
*  PHYSIOLOGICAL VALUES
*******************************************************************************/
uint32_t        pulse_freq      = 2000;         //( 1000 = 10.00 Hz )
uint32_t        pulse_width     = 5000;         //( 100  = 100 us )
uint32_t        pulse_amp       = 300;          //( 100  = 1.00 V)
uint32_t        bpm             = 3500;         //( 1000 = 10.00 bpm)
uint32_t        ie_ratio        = 3000;         //( 1000 = 10.00 %  )
IN_RAM uint8_t  NDEFmessage[0x40];
/*******************************************************************************
*  MAIN FUNCTION
*******************************************************************************/
void main(void){initialize();while(1){;}}
/*******************************************************************************
**********************************   END   *************************************
*******************************************************************************/