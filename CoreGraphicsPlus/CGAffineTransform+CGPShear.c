//
//  CGAffineTransform+Shearing.m
//  Vibematch
//
//  Created by Maximilian Christ on 2012-11-25.
//  Copyright (c) 2012 mczonk.de. All rights reserved.
//

#include "CGAffineTransform+CGPShear.h"

CGAffineTransform CGAffineTransformMakeShearX(CGFloat shear)
{
	return CGAffineTransformMake(1.0f, 0.0f, shear, 1.0f, 0.0f, 0.0f);
}

CGAffineTransform CGAffineTransformShearX(CGAffineTransform src, CGFloat shear)
{
	return CGAffineTransformConcat(src, CGAffineTransformMakeShearX(shear));
}

CGAffineTransform CGAffineTransformMakeShearY(CGFloat shear)
{
	return CGAffineTransformMake(1.0f, shear, 0.0f, 1.0f, 0.0f, 0.0f);
}

CGAffineTransform CGAffineTransformShearY(CGAffineTransform src, CGFloat shear)
{
	return CGAffineTransformConcat(src, CGAffineTransformMakeShearY(shear));
}
