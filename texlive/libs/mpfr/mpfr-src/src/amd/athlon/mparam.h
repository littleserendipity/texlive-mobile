/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005-2018 Free Software Foundation, Inc.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LESSER.  If not, see
http://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

#define MPFR_MULHIGH_TAB  \
 -1,0,-1,0,-1,0,-1,-1,0,-1,-1,0,0,0,0,10, \
 0,12,13,14,15,16,0,0,0,0,0,19,0,0,0,0, \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32, \
 30,32,30,34,32,32,36,34,36,36,38,38,42,38,38,42, \
 40,38,42,46,42,42,42,44,44,44,44,44,48,50,46,46, \
 60,50,50,48,50,56,56,56,56,56,56,56,60,60,64,60, \
 64,64,60,60,60,72,64,64,68,72,76,72,76,72,72,76, \
 75,76,76,72,76,72,75,72,72,72,84,76,84,75,72,76, \
 84,80,76,84,84,76,76,76,76,88,84,88,80,84,83,96, \
 84,96,92,84,88,91,92,88,92,90,96,96,92,91,92,96, \
 96,120,95,100,112,120,100,119,112,120,120,112,119,112,119,119, \
 120,118,119,119,119,118,119,120,128,127,120,128,128,120,120,127, \
 120,128,128,128,128,120,128,127,120,128,128,127,128,127,144,136, \
 128,144,152,152,152,136,144,144,144,136,151,152,144,152,128,151, \
 144,152,144,144,151,144,150,150,136,151,152,143,143,143,142,168, \
 144,144,168,151,168,144,152,151,152,152,160,152,151,152,160,151, \
 152,151,152,167,152,152,166,152,167,160,168,204,160,160,168,168, \
 204,176,202,167,168,166,167,168,204,184,202,204,204,204,204,192, \
 184,192,204,202,202,216,204,227,202,204,216,203,203,204,203,227, \
 202,204,202,202,202,203,202,215,204,202,203,202,202,215,228,214, \
 226,214,228,214,228,215,228,216,226,214,228,225,226,228,226,226, \
 226,215,216,216,226,225,226,227,216,227,240,216,252,252,226,227, \
 228,239,227,250,227,226,227,227,252,238,228,239,252,227,228,228, \
 252,226,246,228,227,227,252,247,250,263,262,250,252,250,250,252, \
 250,288,288,250,250,250,251,264,264,271,287,276,250,288,252,286, \
 251,287,288,251,276,274,288,262,263,263,282,252,288,252,276,284, \
 287,274,264,274,288,275,275,274,274,288,276,264,273,286,274,276, \
 300,287,288,286,286,276,288,285,275,300,275,273,275,299,300,299, \
 279,336,336,286,287,284,360,359,336,335,288,360,333,359,334,335, \
 335,287,359,335,336,336,359,333,334,359,360,288,360,332,335,336, \
 335,336,336,333,336,335,336,359,334,334,335,360,336,334,356,357, \
 335,336,358,359,359,336,335,336,334,355,384,356,354,384,334,357, \
 336,359,384,359,360,356,384,382,336,383,384,384,354,355,383,384, \
 382,359,384,382,382,383,383,359,381,382,383,356,384,382,381,384, \
 357,384,358,357,358,358,380,383,382,382,383,360,360,381,382,360, \
 377,360,378,360,360,381,382,383,381,380,383,383,360,382,383,380, \
 383,383,384,381,379,360,381,381,382,431,380,380,378,380,384,381, \
 382,382,384,407,384,382,379,384,430,431,383,384,408,384,456,431, \
 431,455,431,428,384,454,455,403,432,383,407,430,430,456,408,427, \
 455,455,456,455,432,431,431,429,455,432,432,424,430,427,427,429, \
 452,454,426,455,456,431,430,454,452,454,431,456,431,428,455,430, \
 454,430,432,455,454,442,443,432,443,431,451,452,456,430,451,456, \
 444,455,449,456,432,454,449,454,502,432,448,504,450,503,503,453, \
 454,502,446,452,453,454,455,499,504,453,456,504,454,453,503,455, \
 456,456,500,478,502,454,456,499,478,454,480,499,501,496,502,455, \
 499,502,503,456,478,500,501,500,479,503,504,451,452,479,454,455, \
 502,503,504,504,454,499,503,501,454,503,456,503,504,501,455,502, \
 503,503,502,504,610,503,504,574,480,551,528,504,609,576,480,503, \
 496,502,503,552,551,552,551,503,504,503,610,608,609,610,611,608, \
 608,551,648,611,612,550,576,572,608,611,610,606,608,611,610,574, \
 575,576,606,607,606,606,608,606,606,575,576,604,604,604,608,609, \
 606,606,606,608,604,604,611,604,604,576,610,606,610,606,604,610, \
 606,612,604,608,610,609,604,608,606,647,612,610,604,606,648,610, \
 610,606,646,608,604,647,606,647,606,609,610,647,648,609,641,611, \
 643,611,643,648,643,640,646,611,644,644,645,611,642,646,611,612, \
 640,647,610,611,610,611,606,647,648,647,648,644,682,642,682,683, \
 610,611,680,678,642,681,682,647,682,612,682,648,611,665,680,683, \
 609,646,666,676,680,646,679,647,646,646,648,679,684,611,612,643, \
 684,645,646,647,683,647,608,645,682,647,682,646,610,648,682,610, \
 684,612,612,683,684,647,647,646,680,646,646,745,648,646,644,647, \
 648,647,678,646,647,683,642,682,682,684,646,645,642,647,646,677, \
 646,647,683,678,680,646,646,643,681,647,683,645,666,755,756,645, \
 643,647,646,647,647,648,674,755,756,674,647,643,680,682,684,680, \
 680,682,682,675,682,677,666,683,680,682,682,684,680,681,674,674 \

#define MPFR_MUL_THRESHOLD 19
#define MPFR_EXP_2_THRESHOLD 411 /* bits */
#define MPFR_EXP_THRESHOLD 45200 /* bits */