//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================
//
// Game version constants and information
//
//=============================================================================

#ifndef __AGS_CN_AC__GAMEVERSION_H
#define __AGS_CN_AC__GAMEVERSION_H

/*

Game data versions and changes:
-------------------------------

12 : 2.3 + 2.4

Versions above are incompatible at the moment.

18 : 2.5.0
19 : 2.5.1 + 2.52
20 : 2.5.3

Lip sync data added.
21 : 2.5.4
22 : 2.5.5

Variable number of sprites.
24 : 2.5.6
25 : 2.6.0

Encrypted global messages and dialogs.
26 : 2.6.1

Wait() must be called with parameter > 0
GetRegionAt() clips the input values to the screen size
Color 0 now means transparent instead of black for text windows
SetPlayerCharacter() does nothing if the new character is already the player character.
27 : 2.6.2

Script modules. Fixes bug in the inventory display.
Clickable GUI is selected with regard for the drawing order.
Pointer to the "player" variable is now accessed via a dynamic object.
31 : 2.7.0
32 : 2.7.2

35 : 3.0.0

Room names are serialized when game is compiled in "debug" mode.
36 : 3.0.1

Interactions are now scripts. The number for "not set" changed from 0 to -1 for
a lot of variables (views, sounds).
37 : 3.1.0

Dialogs are now scripts. New character animation speed.
39 : 3.1.1

Individual character speech animation speed.
40 : 3.1.2

Audio clips
41 : 3.2.0
42 : 3.2.1

43 : 3.3.0
Added few more game options.

44 : 3.3.1
Added custom dialog option highlight colour.

45 : 3.4.0.1
Support for custom game resolution.

46 : 3.4.0.2-.3
Audio playback speed.
Custom dialog option rendering extension.

47 : 3.4.0.4
Custom properties changed at runtime.
Ambient lighting

*/

enum GameDataVersion
{
    kGameVersion_Undefined      = 0,
    kGameVersion_230            = 12,
    kGameVersion_240            = 12,
    kGameVersion_250            = 18,
    kGameVersion_251            = 19, // same as 2.52
    kGameVersion_253            = 20,
    kGameVersion_254            = 21,
    kGameVersion_255            = 22,
    kGameVersion_256            = 24,
    kGameVersion_260            = 25,
    kGameVersion_261            = 26,
    kGameVersion_262            = 27,
    kGameVersion_270            = 31,
    kGameVersion_272            = 32,
    kGameVersion_300            = 35,
    kGameVersion_301            = 36,
    kGameVersion_310            = 37,
    kGameVersion_311            = 39,
    kGameVersion_312            = 40,
    kGameVersion_320            = 41,
    kGameVersion_321            = 42,
    kGameVersion_330            = 43,
    kGameVersion_331            = 44,
    kGameVersion_340_1          = 45,
    kGameVersion_340_2          = 46,
    kGameVersion_340_4          = 47,
    kGameVersion_Current        = kGameVersion_340_4
};

extern GameDataVersion loaded_game_file_version;

#endif // __AGS_CN_AC__GAMEVERSION_H