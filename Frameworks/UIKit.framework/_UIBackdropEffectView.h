/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CABackdropLayer;

@interface _UIBackdropEffectView : UIView {
    CABackdropLayer *_backdropLayer;
    float _zoom;
}

@property(retain) CABackdropLayer * backdropLayer;
@property float zoom;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)backdropLayer;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setBackdropLayer:(id)arg1;
- (void)setZoom:(float)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (float)zoom;

@end
