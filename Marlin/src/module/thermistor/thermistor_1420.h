/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define REVERSE_TEMP_SENSOR_RANGE_1420 1

#define PtLineAdj(T,R0,Rup,Adj) { OV(PtAdVal(T, R0, Rup)) + Adj, T }

// Pt1000 with 4k7 pullup, but adjusted as it has offset by approx 5%
// template was taken from 1047, and measured each temp and compared the values
constexpr temp_entry_t temptable_1420[] PROGMEM = {
  // only a few values are needed as the curve is very flat
  PtLineAdj(  0, 1000, 4700, 128),
  PtLineAdj( 50, 1000, 4700, 128),
  PtLineAdj(100, 1000, 4700, 192),
  PtLineAdj(150, 1000, 4700, 240),
  PtLineAdj(200, 1000, 4700, 304),
  PtLineAdj(250, 1000, 4700, 384),
  PtLineAdj(300, 1000, 4700, 416),
  PtLineAdj(350, 1000, 4700, 464),
  PtLineAdj(400, 1000, 4700, 480),
  PtLineAdj(450, 1000, 4700, 400),
  PtLineAdj(500, 1000, 4700, 384)
};
