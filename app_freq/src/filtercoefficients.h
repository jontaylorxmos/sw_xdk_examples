/**
 * Module:  freq
 * Version: 1v1
 * Build:   b45a0fb9ab3e66156caa93683e6c6968b24e3366
 * File:    filtercoefficients.h
 *
 * The copyrights, all other intellectual and industrial 
 * property rights are retained by XMOS and/or its licensors. 
 * Terms and conditions covering the use of this code can
 * be found in the Xmos End User License Agreement.
 *
 * Copyright XMOS Ltd 2010
 *
 * In the case where this code is a modification of existing code
 * under a separate license, the separate license terms are shown
 * below. The modifications to the code are still covered by the 
 * copyright notice above.
 *
 **/                                   
// 44.0 Hz
// 62.22539674441619 Hz
// 88.00000000000001 Hz
// 124.45079348883239 Hz
// 176.00000000000006 Hz
// 248.90158697766483 Hz
// 352.00000000000017 Hz
// 497.8031739553297 Hz
// 704.0000000000005 Hz
// 995.6063479106597 Hz
// 1408.0000000000011 Hz
// 1991.2126958213196 Hz
// 2816.0000000000027 Hz
// 3982.4253916426396 Hz
// 5632.000000000006 Hz
// 7964.850783285281 Hz
int b0o[] = { 24615, 34790, 49158, 69436, 98029, 138300, 194920, 274341, 385372, 539878, 753505, 1046279, 1442752, 1971190, 2661441, 3543435,};
int b2o[] = { -24615, -34790, -49158, -69436, -98029, -138300, -194920, -274341, -385372, -539878, -753505, -1046279, -1442752, -1971190, -2661441, -3543435,};
int a1o[] = { -33504009, -33482469, -33451353, -33406047, -33339380, -33239940, -33089078, -32855503, -32485442, -31884705, -30886539, -29196356, -26305617, -21389881, -13308260, -1152439,};
int a2o[] = { 16727986, 16707636, 16678900, 16638344, 16581158, 16500617, 16387375, 16228534, 16006471, 15697460, 15270206, 14684658, 13891712, 12834835, 11454333, 9690346,};
