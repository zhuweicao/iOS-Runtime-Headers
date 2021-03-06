/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKAction : NSObject <NSCoding, NSCopying> {

  /* Error parsing encoded ivar type info: ^{SKCAction=^^?If@?@BddffdBB@?iffff} */
    struct SKCAction { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; bool x7; double x8; double x9; float x10; float x11; double x12; bool x13; bool x14; id x15; void*x16; int x17; float x18; float x19; float x20; float x21; } *_caction;

}

@property double duration;
@property BOOL finished;
@property float speed;
@property id timingFunction;
@property int timingMode;

+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(float)arg2 duration:(double)arg3;
+ (id)colorizeWithColorBlendFactor:(float)arg1 duration:(double)arg2;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(id)arg2;
+ (id)fadeAlphaBy:(float)arg1 duration:(double)arg2;
+ (id)fadeAlphaTo:(float)arg1 duration:(double)arg2;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)falloffBy:(float)arg1 duration:(double)arg2;
+ (id)falloffTo:(float)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 speed:(float)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath { }*)arg1 speed:(float)arg2;
+ (id)group:(id)arg1;
+ (id)hide;
+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
+ (id)moveBY:(struct CGVector { float x1; float x2; })arg1 duration:(double)arg2;
+ (id)moveBy:(struct CGVector { float x1; float x2; })arg1 duration:(double)arg2;
+ (id)moveByX:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)moveTo:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2;
+ (id)moveToX:(float)arg1 duration:(double)arg2;
+ (id)moveToY:(float)arg1 duration:(double)arg2;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)playSoundFileNamed:(id)arg1;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint { float x1; float x2; })arg2 waitForCompletion:(BOOL)arg3;
+ (id)playSoundFileNamed:(id)arg1 waitForCompletion:(BOOL)arg2;
+ (id)reachTo:(struct CGPoint { float x1; float x2; })arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachTo:(struct CGPoint { float x1; float x2; })arg1 rootNode:(id)arg2 velocity:(float)arg3;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 velocity:(float)arg3;
+ (id)removeFromParent;
+ (id)repeatAction:(id)arg1 count:(unsigned int)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (id)resizeByWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;
+ (id)resizeToHeight:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;
+ (id)rotateByAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3;
+ (id)runAction:(id)arg1 onChildWithName:(id)arg2;
+ (id)runBlock:(id)arg1;
+ (id)runBlock:(id)arg1 queue:(id)arg2;
+ (id)scaleBy:(float)arg1 duration:(double)arg2;
+ (id)scaleTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXBy:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleXTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleYTo:(float)arg1 duration:(double)arg2;
+ (id)sequence:(id)arg1;
+ (id)setTexture:(id)arg1;
+ (id)setTexture:(id)arg1 resize:(BOOL)arg2;
+ (id)speedBy:(float)arg1 duration:(double)arg2;
+ (id)speedTo:(float)arg1 duration:(double)arg2;
+ (id)strengthBy:(float)arg1 duration:(double)arg2;
+ (id)strengthTo:(float)arg1 duration:(double)arg2;
+ (id)unhide;
+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;

- (struct SKCAction { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; bool x7; double x8; double x9; float x10; float x11; double x12; bool x13; bool x14; id x15; void*x16; int x17; float x18; float x19; float x20; float x21; }*)caction;
     /* Encoded args for previous method: ^{SKCAction=^^?If@?@BddffdBB@?iffff}8@0:4 */

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)finished;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)ratioForTime:(double)arg1;
- (id)reversedAction;
- (void)setCppAction:(void*)arg1;
- (void)setDuration:(double)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setTimingMode:(int)arg1;
- (float)speed;
- (id)timingFunction;
- (int)timingMode;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
