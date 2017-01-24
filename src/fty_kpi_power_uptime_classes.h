/*  =========================================================================
    fty_kpi_power_uptime_classes - private header file

    Copyright (C) 2014 - 2017 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_KPI_POWER_UPTIME_CLASSES_H_INCLUDED
#define FTY_KPI_POWER_UPTIME_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_kpi_power_uptime.h"

//  Extra headers

//  Opaque class structures to allow forward references
#ifndef DC_T_DEFINED
typedef struct _dc_t dc_t;
#define DC_T_DEFINED
#endif
#ifndef UPT_T_DEFINED
typedef struct _upt_t upt_t;
#define UPT_T_DEFINED
#endif

//  Internal API
#include "dc.h"
#include "upt.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_KPI_POWER_UPTIME_PRIVATE void
    dc_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_KPI_POWER_UPTIME_PRIVATE void
    upt_test (bool verbose);

//  Self test for private classes
FTY_KPI_POWER_UPTIME_PRIVATE void
    fty_kpi_power_uptime_private_selftest (bool verbose);

#endif // FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API

#endif
