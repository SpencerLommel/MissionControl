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

        u8 A            : 1; // 0x01
        u8 B            : 1; // 0x02
        u8 X            : 1; // 0x04
        u8 Y            : 1; // 0x08
        u8 quick_access : 1; // 0x10
        u8 R3           : 1; // 0x20  (right stick click)
        u8 menu         : 1; // 0x40
        u8 R4           : 1; // 0x80


    }


}
