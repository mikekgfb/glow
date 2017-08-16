#include "noether/Random.h"
using namespace noether;

namespace {

// This is a global variable, a singleton, that's used as an index into
// the array with random numbers.
unsigned randomArrayIndex = 0;

const unsigned numRandomVals = 256;
const double randomVals[] = {
    0.3119,  0.2053,  -0.1625, 0.9081,  -0.0972, 0.5397,  -0.4983, 0.3785,
    0.6981,  0.0505,  -0.6367, 0.1460,  0.8340,  -0.4144, 0.9957,  -0.2024,
    -0.0171, -0.7535, -0.2993, -0.5050, -0.7014, -0.6071, 0.0854,  -0.5920,
    0.8374,  0.6717,  0.2843,  0.7334,  -0.7864, -0.3570, -0.0928, -0.9854,
    0.2700,  0.0362,  -0.6376, -0.6991, -0.6091, 0.0460,  0.9290,  0.0522,
    0.1254,  0.2769,  -0.4032, 0.9420,  -0.7114, -0.3320, 0.5311,  -0.2856,
    -0.1138, 0.1187,  0.3992,  -0.8446, -0.4276, 0.7928,  -0.7558, -0.9549,
    -0.3512, 0.2376,  -0.9238, -0.2592, -0.5816, 0.7417,  -0.6861, -0.2258,
    0.7791,  -0.1462, 0.0798,  0.9692,  -0.2235, -0.4592, -0.0954, 0.4369,
    0.4599,  -0.7982, 0.5520,  -0.4378, 0.6393,  0.7063,  0.8030,  0.0609,
    -0.1199, 0.1164,  -0.8909, 0.4796,  0.3586,  -0.9597, 0.3200,  -0.1604,
    -0.5608, 0.9013,  -0.7177, -0.0505, -0.4453, 0.2462,  0.3048,  0.2312,
    0.1478,  0.1861,  0.6161,  0.8645,  0.3807,  0.4095,  -0.1221, 0.6488,
    -0.4410, -0.0026, 0.9983,  -0.7491, 0.3968,  -0.2880, -0.5902, 0.3572,
    0.8124,  -0.2756, 0.4636,  -0.2615, -0.1985, 0.2010,  -0.0115, 0.4999,
    -0.9142, -0.4040, 0.9575,  0.3227,  0.9896,  0.9290,  -0.1939, 0.3720,
    0.1959,  0.2998,  -0.7930, -0.7941, 0.7538,  -0.5714, -0.3527, -0.4551,
    0.6728,  0.4108,  0.5074,  0.4148,  0.2340,  -0.2864, -0.9577, 0.2964,
    0.6011,  0.7637,  -0.9632, 0.3520,  -0.6711, -0.1416, -0.9730, 0.9751,
    -0.5226, 0.4510,  0.5092,  -0.8291, -0.5695, 0.0941,  0.9588,  0.4567,
    -0.5691, -0.8318, -0.6906, 0.2703,  0.7569,  0.1685,  -0.0332, -0.7916,
    0.4840,  0.3441,  -0.7144, 0.8336,  0.0900,  -0.2700, -0.3341, -0.4677,
    -0.2857, 0.1010,  -0.3767, 0.3659,  -0.6182, 0.0974,  -0.6367, 0.5807,
    0.2856,  -0.2813, 0.0810,  0.5332,  0.7670,  0.6322,  -0.8546, -0.6379,
    -0.0115, 0.9751,  -0.3050, 0.3132,  -0.1248, 0.0833,  -0.1947, 0.3581,
    -0.5310, 0.2623,  0.6555,  -0.4236, -0.0660, 0.0121,  0.3932,  0.0848,
    -0.5717, 0.4478,  0.5830,  -0.6124, 0.2857,  -0.4315, -0.3694, -0.6480,
    -0.4186, 0.0221,  -0.3994, -0.7689, -0.7289, 0.1114,  -0.8366, -0.4375,
    -0.5246, -0.6765, -0.8305, 0.3017,  0.5472,  -0.7913, 0.7184,  -0.7245,
    0.9294,  0.4736,  0.1575,  -0.6042, -0.4478, 0.6700,  -0.7470, -0.6719,
    -0.7332, -0.4192, -0.8280, -0.1954, 0.0863,  -0.2299, 0.9117,  -0.3130,
    0.9571,  0.4145,  -0.3284, -0.6304, 0.2475,  -0.3137, 0.3770,  -0.4844};
} // namespace

double noether::nextRand() {
  return randomVals[(randomArrayIndex++) % numRandomVals];
}
