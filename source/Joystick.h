/*
  PokeMini - Pok�mon-Mini Emulator
  Copyright (C) 2009-2014  JustBurn

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef POKEMINI_JOYSTICK
#define POKEMINI_JOYSTICK

// Process joystick buttons packed in bits
void JoystickBitsEvent(uint32_t pressbits);

// Process joystick buttons
void JoystickButtonsEvent(int button, int pressed);

#endif
