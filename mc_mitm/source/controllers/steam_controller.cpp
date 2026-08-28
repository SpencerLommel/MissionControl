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

    enum SteamControllerDPadDirection {
        ValveSteam4DPad_N,
        ValveSteam4DPad_NE,
        ValveSteam4DPad_E,
        ValveSteam4DPad_SE,
        ValveSteam4DPad_S,
        ValveSteam4DPad_SW,
        ValveSteam4DPad_W,
        ValveSteam4DPad_NW,
        ValveSteam4DPad_Released,
    };

    class SteamController final : public EmulatedSwitchController {

        public:
            static constexpr const HardwareID hardware_ids[] = {

            }


    }
}
