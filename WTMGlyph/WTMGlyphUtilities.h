//
//  WTMGlyphUtilities.h
//  WTMGlyph
//
//  Created by Brit Gardner on 5/15/11.
//  Copyright 2011 Warrior Thief Mage Studios. All rights reserved.
//

#import <Foundation/Foundation.h>

NSArray* Resample(NSArray *points, int num);
NSArray* Scale(NSArray *points, int resolution, float threshold);
CGRect BoundingBox(NSArray *points);
NSMutableArray* Splice(NSMutableArray *original, id newVal, int i);
float PathLength(NSArray *points);
float Distance(CGPoint point1, CGPoint point2);
float IndicativeAngle(NSArray *points);
NSArray* TranslateToOrigin(NSArray *points);
CGPoint CalcStartUnitVector(NSArray *points, int count);
NSArray* Vectorize(NSArray *points);