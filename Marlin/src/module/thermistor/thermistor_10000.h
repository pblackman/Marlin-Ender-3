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

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor - Custom Lookup table by Patrick Blackman Sphaier
constexpr temp_entry_t temptable_10000[] PROGMEM = {
{ OV(  21), 320 },
{ OV(  23), 313 },
{ OV(  25), 307 },
{ OV(  27), 303 },
{ OV(  28), 300 },
{ OV(  31), 293 },
{ OV(  33), 290 },
{ OV(  35), 285 },
{ OV(  38), 281 },
{ OV(  41), 275 },
{ OV(  44), 271 },
{ OV(  48), 265 },
{ OV(  52), 260 },
{ OV(  56), 256 },
{ OV(  61), 251 },
{ OV(  66), 247 },
{ OV(  71), 242 },
{ OV(  78), 236 },
{ OV(  84), 230 },
{ OV(  92), 226 },
{ OV(  100), 221 },
{ OV(  109), 216 },
{ OV(  120), 210 },
{ OV(  131), 206 },
{ OV(  143), 200 },
{ OV(  156), 195 },
{ OV(  171), 190 },
{ OV(  187), 185 },
{ OV(  205), 179 },
{ OV(  224), 174 },
{ OV(  246), 169 },
{ OV(  268), 163 },
{ OV(  294), 157 },
{ OV(  320), 151 },
{ OV(  350), 146 },
{ OV(  379), 140 },
{ OV(  412), 136 },
{ OV(  445), 131 },
{ OV(  480), 126 },
{ OV(  516), 120 },
{ OV(  554), 114 },
{ OV(  591), 107 },
{ OV(  628), 102 },
{ OV(  665), 97 },
{ OV(  701), 92 },
{ OV(  737), 86 },
{ OV(  769), 80 },
{ OV(  801), 74 },
{ OV(  829), 69 },
{ OV(  857), 64 },
{ OV(  880), 59 },
{ OV(  903), 53 },
{ OV(  921), 48 },
{ OV(  939), 42 },
{ OV(  953), 36 },
{ OV(  966), 31 },
{ OV(  977), 26 },
{ OV( 985),  20 },
{ OV( 993),  15 },
{ OV( 999),  10 },
{ OV(1004),   5 },
{ OV(1008),   0 },
{ OV(1012),  -5 },
{ OV(1016), -10 },
{ OV(1020), -15 }
};
