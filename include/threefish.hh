/*
 *    Copyright (c) 2012-2013 Luxembourg University,
 *    Laboratory of Algorithmics, Cryptology and Security (LACS).
 *
 *    This file is part of the YAARX toolkit. YAARX stands for
 *    Yet Another ARX toolkit for analysis of ARX cryptographic algorithms.
 *
 *    YAARX is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    YAARX is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with YAARX.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 * \file  threefish.hh
 * \author V.Velichkov, vesselin.velichkov@uni.lu
 * \date 2012-2013
 * \brief Header file for threefish.cc: \copybrief threefish.cc.
 */ 
#ifndef THREEFISH_H
#define THREEFISH_H

#define THREEFISH_MAX_NROUNDS 20

#ifndef XDP_ADD_DIFF_SET_H
#include "xdp-add-diff-set.hh"
#endif

extern uint32_t g_threefish32_rot_const[12][2];

void threefish32_print_dset(diff_set_t DX[4]);

void threefish32_mix(uint32_t X[4], uint32_t rot_const_0, uint32_t rot_const_1);

void threefish32(uint32_t nrounds, uint32_t rot_const[THREEFISH_MAX_NROUNDS][2], uint32_t X[4], uint32_t Y[4]);

void threefish32_print_prob(double P[4]);

void threefish32_print_dset_trail(uint32_t nrounds, diff_set_t DT[THREEFISH_MAX_NROUNDS][4], double P[THREEFISH_MAX_NROUNDS][4]);

#endif  // #ifndef THREEFISH_H
