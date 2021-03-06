/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CMGestureManager;

@interface CKRaiseGesture : NSObject {
    SEL _action;
    BOOL _enabled;
    CMGestureManager *_gestureManager;
    int _gestureState;
    BOOL _proximityState;
    id _target;
}

@property SEL action;
@property(getter=isEnabled) BOOL enabled;
@property(retain) CMGestureManager * gestureManager;
@property int gestureState;
@property BOOL proximityState;
@property(getter=isRecognized,readonly) BOOL recognized;
@property id target;

+ (BOOL)isRaiseGestureEnabled;
+ (BOOL)isRaiseGestureSupported;

- (SEL)action;
- (void)dealloc;
- (id)gestureManager;
- (int)gestureState;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isEnabled;
- (BOOL)isRecognized;
- (BOOL)proximityState;
- (void)proximityStateDidChange:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setGestureManager:(id)arg1;
- (void)setGestureState:(int)arg1;
- (void)setProximityState:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
