//
// Kino/Bokeh - Depth of field effect
//
// Copyright (C) 2016 Unity Technologies
// Copyright (C) 2015 Keijiro Takahashi
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#if !defined(KERNEL_SMALL) && !defined(KERNEL_MEDIUM) && \
    !defined(KERNEL_LARGE) && !defined(KERNEL_VERYLARGE)

static const int kSampleCount = 1;
static const half2 kDiskKernel[1] = { half2(0, 0) };

#endif

#if defined(KERNEL_SMALL)

// rings = 1
// points per ring = 3
static const int kSampleCount = 3;
static const half2 kDiskKernel[kSampleCount] = {
    half2(0,0),
    half2(0.54545456,0),
    half2(0.16855472,0.5187581),
    // half2(-0.44128203,0.3206101),
    // half2(-0.48051673,0.2314047),
    // half2(-0.48051673,-0.23140468),
};

#endif

#if defined(KERNEL_MEDIUM)

// rings = 3
// points per ring = 7
static const int kSampleCount = 22;
static const half2 kDiskKernel[kSampleCount] = {
    half2(0,0),
    half2(0.53333336,0),
    half2(0.3325279,0.4169768),
    half2(-0.11867785,0.5199616),
    half2(-0.48051673,0.2314047),
    half2(-0.48051673,-0.23140468),
    half2(-0.11867763,-0.51996166),
    half2(0.33252785,-0.4169769),
    half2(1,0),
    half2(0.90096885,0.43388376),
    half2(0.6234898,0.7818315),
    half2(0.22252098,0.9749279),
    half2(-0.22252095,0.9749279),
    half2(-0.62349,0.7818314),
    half2(-0.90096885,0.43388382),
    half2(-1,0),
    half2(-0.90096885,-0.43388376),
    half2(-0.6234896,-0.7818316),
    half2(-0.22252055,-0.974928),
    half2(0.2225215,-0.9749278),
    half2(0.6234897,-0.7818316),
    half2(0.90096885,-0.43388376),
};

#endif

#if defined(KERNEL_LARGE)

// rings = 4
// points per ring = 7
static const int kSampleCount = 43;
static const half2 kDiskKernel[kSampleCount] = {
    half2(0,0),
    half2(0.36363637,0),
    half2(0.22672357,0.28430238),
    half2(-0.08091671,0.35451925),
    half2(-0.32762504,0.15777594),
    half2(-0.32762504,-0.15777591),
    half2(-0.08091656,-0.35451928),
    half2(0.22672352,-0.2843024),
    half2(0.6818182,0),
    half2(0.614297,0.29582983),
    half2(0.42510667,0.5330669),
    half2(0.15171885,0.6647236),
    half2(-0.15171883,0.6647236),
    half2(-0.4251068,0.53306687),
    half2(-0.614297,0.29582986),
    half2(-0.6818182,0),
    half2(-0.614297,-0.29582983),
    half2(-0.42510656,-0.53306705),
    half2(-0.15171856,-0.66472363),
    half2(0.1517192,-0.6647235),
    half2(0.4251066,-0.53306705),
    half2(0.614297,-0.29582983),
    half2(1,0),
    half2(0.9555728,0.2947552),
    half2(0.82623875,0.5633201),
    half2(0.6234898,0.7818315),
    half2(0.36534098,0.93087375),
    half2(0.07473,0.9972038),
    half2(-0.22252095,0.9749279),
    half2(-0.50000006,0.8660254),
    half2(-0.73305196,0.6801727),
    half2(-0.90096885,0.43388382),
    half2(-0.98883086,0.14904208),
    half2(-0.9888308,-0.14904249),
    half2(-0.90096885,-0.43388376),
    half2(-0.73305184,-0.6801728),
    half2(-0.4999999,-0.86602545),
    half2(-0.222521,-0.9749279),
    half2(0.07473029,-0.99720377),
    half2(0.36534148,-0.9308736),
    half2(0.6234897,-0.7818316),
    half2(0.8262388,-0.56332),
    half2(0.9555729,-0.29475483),
};

#endif

#if defined(KERNEL_VERYLARGE)

// rings = 5
// points per ring = 7
static const int kSampleCount = 71;
static const half2 kDiskKernel[kSampleCount] = {
    half2(0,0),
    half2(0.2758621,0),
    half2(0.1719972,0.21567768),
    half2(-0.061385095,0.26894566),
    half2(-0.24854316,0.1196921),
    half2(-0.24854316,-0.11969208),
    half2(-0.061384983,-0.2689457),
    half2(0.17199717,-0.21567771),
    half2(0.51724136,0),
    half2(0.46601835,0.22442262),
    half2(0.32249472,0.40439558),
    half2(0.11509705,0.50427306),
    half2(-0.11509704,0.50427306),
    half2(-0.3224948,0.40439552),
    half2(-0.46601835,0.22442265),
    half2(-0.51724136,0),
    half2(-0.46601835,-0.22442262),
    half2(-0.32249463,-0.40439564),
    half2(-0.11509683,-0.5042731),
    half2(0.11509732,-0.504273),
    half2(0.32249466,-0.40439564),
    half2(0.46601835,-0.22442262),
    half2(0.7586207,0),
    half2(0.7249173,0.22360738),
    half2(0.6268018,0.4273463),
    half2(0.47299224,0.59311354),
    half2(0.27715522,0.7061801),
    half2(0.056691725,0.75649947),
    half2(-0.168809,0.7396005),
    half2(-0.3793104,0.65698475),
    half2(-0.55610836,0.51599306),
    half2(-0.6834936,0.32915324),
    half2(-0.7501475,0.113066405),
    half2(-0.7501475,-0.11306671),
    half2(-0.6834936,-0.32915318),
    half2(-0.5561083,-0.5159932),
    half2(-0.37931028,-0.6569848),
    half2(-0.16880904,-0.7396005),
    half2(0.056691945,-0.7564994),
    half2(0.2771556,-0.7061799),
    half2(0.47299215,-0.59311366),
    half2(0.62680185,-0.4273462),
    half2(0.72491735,-0.22360711),
    half2(1,0),
    half2(0.9749279,0.22252093),
    half2(0.90096885,0.43388376),
    half2(0.7818315,0.6234898),
    half2(0.6234898,0.7818315),
    half2(0.43388364,0.9009689),
    half2(0.22252098,0.9749279),
    half2(0,1),
    half2(-0.22252095,0.9749279),
    half2(-0.43388385,0.90096885),
    half2(-0.62349,0.7818314),
    half2(-0.7818317,0.62348956),
    half2(-0.90096885,0.43388382),
    half2(-0.9749279,0.22252093),
    half2(-1,0),
    half2(-0.9749279,-0.22252087),
    half2(-0.90096885,-0.43388376),
    half2(-0.7818314,-0.6234899),
    half2(-0.6234896,-0.7818316),
    half2(-0.43388346,-0.900969),
    half2(-0.22252055,-0.974928),
    half2(0,-1),
    half2(0.2225215,-0.9749278),
    half2(0.4338835,-0.90096897),
    half2(0.6234897,-0.7818316),
    half2(0.78183144,-0.62348986),
    half2(0.90096885,-0.43388376),
    half2(0.9749279,-0.22252086),
};

#endif
