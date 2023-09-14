/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2023 Mehdi Noroozi <mehdeenoroozi@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <libopencm3/stm32/dbgmcu.h>
#include <libopencm3/stm32/f4/dbgmcu.h>

void dbgmcu_sleep_hclck_on(void) {
    DBGMCU_CR |= DBGMCU_CR_SLEEP;
}

void dbgmcu_stop_hclck_fclck_on(void) {
    DBGMCU_CR |= DBGMCU_CR_STOP;
}

void dbgmcu_standby_hclck_fclck_on(void) {
    DBGMCU_CR |= DBGMCU_CR_STANDBY;
}

void dbgmcu_enable_trace_io(void) {
    DBGMCU_CR |= DBGMCU_CR_TRACE_IOEN;
}

void dbgmcu_set_trace_mode(uint8_t mode) {
    DBGMCU_CR |= DBGMCU_CR_TRACE_MODE_MASK & mode;
}

void dbgmcu_iwdg_stop(void) {
    DBGMCU_CR |= DBGMCU_CR_IWDG_STOP;
}
