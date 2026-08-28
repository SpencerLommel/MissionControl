/*
 * Copyright (c) 2020-2026 Spencer Lommel
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "emulated_switch_controller.hpp"

namespace ams::controller {

    enum SteamDPadDirection {
        Steam4DPad_N,
        Steam4DPad_NE,
        Steam4DPad_E,
        Steam4DPad_SE,
        Steam4DPad_S,
        Steam4DPad_SW,
        Steam4DPad_W,
        Steam4DPad_NW,
        Steam4DPad_Released,
    };

    struct SteamButtonData {
        // bit field[0] we ignore

        // bit field[1]
        u8 A            : 1; // 0x01
        u8 B            : 1; // 0x02
        u8 X            : 1; // 0x04
        u8 Y            : 1; // 0x08
        u8 quick_access : 1; // 0x10
        u8 R3           : 1; // 0x20  (R3 stick press)
        u8 menu         : 1; // 0x40
        u8 R4           : 1; // 0x80

        // bit field[2]
        u8 R5           : 1; // 0x01
        u8 R1           : 1; // 0x02
        u8 dpad         : 4; // 0x04 S, 0x08 E, 0x10 W, 0x20 N
        u8 view         : 1; // 0x40
        u8 L3           : 1; // 0x80 (L3 stick press)

        // bit field[3]
        u8 steam        : 1; // 0x01
        u8 L4           : 1; // 0x02
        u8 L5           : 1; // 0x04
        u8 L1           : 1; // 0x08
        u8              : 1; // 0x10 (R3 stick capacative touch sense, not implemented)
        u8              : 1; // 0x20 (Right pad touch sense, not implemented)
        u8              : 1; // 0x40 unknown or unmapped?
        u8 R2           : 1; // 0x80 (only active when trigger fully pulled)

        // bit field[4]
        u8              : 1; // 0x01 (L3 stick capacative touch sense, not implemented)
        u8              : 1; // 0x02 (Left pad touch sense, not implemented)
        u8              : 1; // 0x04 unknown or unmapped?
        u8 L2           : 1; // 0x08 (only active when trigger fully pulled)
        u8              : 1; // 0x10 (Right capacative grip sense)
        u8              : 1; // 0x20 (Left capacative grip sense)
        u8              : 2; // 0x40 unknown or unmapped?

    } PACKED;


}
