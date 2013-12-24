//
//  CGAffineTransform+Shearing.h
//  Vibematch
//
//  Created by Maximilian Christ on 2012-11-25.
//  Copyright (c) 2012 mczonk.de. All rights reserved.
//

#pragma once

#include <CoreGraphics/CoreGraphics.h>

CGAffineTransform CGAffineTransformMakeShearX(CGFloat proportion);
CGAffineTransform CGAffineTransformShearX(CGAffineTransform src, CGFloat proportion);

CGAffineTransform CGAffineTransformMakeShearY(CGFloat proportion);
CGAffineTransform CGAffineTransformShearY(CGAffineTransform src, CGFloat proportion);
