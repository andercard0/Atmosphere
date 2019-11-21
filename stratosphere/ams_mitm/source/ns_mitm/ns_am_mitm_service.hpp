/*
 * Copyright (c) 2018-2019 Atmosphère-NX
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
#include <stratosphere.hpp>

namespace ams::mitm::ns {

    class NsAmMitmService  : public sf::IMitmServiceObject {
        private:
            enum class CommandId {
                /* TODO */
            };
        public:
            static bool ShouldMitm(os::ProcessId process_id, ncm::ProgramId program_id) {
                /* TODO */
                return false;
            }
        public:
            SF_MITM_SERVICE_OBJECT_CTOR(NsAmMitmService) { /* ... */ }
        protected:
            /* TODO */
        public:
            DEFINE_SERVICE_DISPATCH_TABLE {
                /* TODO */
            };
    };

}