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

#ifndef PMCOMMON_H
#define PMCOMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdint.h>

#include <retro_inline.h>

// Temporary variable length
// Minimum is 128
// Recommended is 256
#ifndef PMTMPV
#define PMTMPV	512
#endif

#ifdef _WIN32
#define PATH_SLASH_CHR '\\'
#define PATH_SLASH_STR "\\"
#else
#define PATH_SLASH_CHR '/'
#define PATH_SLASH_STR "/"
#endif

#define PATH_SLASH_OS    0
#define PATH_SLASH_UNIX  1
#define PATH_SLASH_WIN   2

// Return a number between min and max
static INLINE int BetweenNum(int num, int min, int max)
{
   return (num < min) ? min : (num > max) ? max : num;
}

// Return true if the string is valid and non-empty
int StringIsSet(char *str);

// Get multiple of 2 (Mask)
int GetMultiple2Mask(int input);

// Check if file exist
int FileExist(const char *filename);

// Directories
void PokeMini_InitDirs(char *argv0, char *exec);

#endif
