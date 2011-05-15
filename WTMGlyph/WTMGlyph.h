//
//  WTMGlyph.h
//  WTMGlyph
//
//  Created by Brit Gardner on 5/1/11.
//  Copyright 2011 Warrior Thief Mage Studios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WTMGlyphStroke.h"

@interface WTMGlyph : NSObject {
    NSString *name;
    NSMutableArray *strokes;
    NSMutableArray *templates;
    
    WTMGlyphStroke *currentStroke;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *strokes;
@property (nonatomic, retain) NSMutableArray *templates;

- (id)init;
- (id)initWithName:(NSString *)_name strokes:(NSArray *)strokes;

- (void)createTemplates;
- (void)heapPermute;

- (void)addPoint:(CGPoint)point;
- (void)startStroke;
- (void)endStroke;

@end
